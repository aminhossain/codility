<h1 align="center">MaxCounters</h1>
<p align="center">
<a href="https://app.codility.com/programmers/lessons/4-counting_elements/max_counters/">Problem Link</a>
</p>

# Intuition

<!-- Describe your first thoughts on how to solve this problem. -->

The problem requires finding a sequence of integers representing the values of the counters from 1 to N. Initially the counter is 0 for all the element. The counter will increase in two ways for the elements,\
i. increase(X) − counter X is increased by 1\
ii. max counter − all counters are set to the maximum value of any counter.

# Approach

<!-- Describe your approach to solving the problem. -->

We can solve this problem in multiple ways. A bruteforce approach would be, we can increase each element counter an whenever N+1 occured we can reset all the counter via max counter running the loop from 1 t N. But in this case the space time will be O(N\*(M+count(N+1))).

To optimize the bruteforce solution to O(n) by time we can solve the problem maintaing two variable minCount and maxCount. Steps to construct the solution:

- Declare a vector `a` and initialize all element with 0
- Now declate two variable `minCount` and `maxCount`
- Now loop through the array and increase the element count as found and update the `maxCount`
- Now Whenever `N+1` found in array keep the `maxCount` in `minCount`, becuase this will our minimum count for all element
- Finally run another loop from `1 to N` and check `a[i] < minCount` or not, if yes then update the `a[i]` with `minCount`
- return the answer `a`

# Complexity

- Time complexity: O(n)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(N)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code: C++

```C++
// you can use includes, for example:
// #include <algorithm>
#include <bits/stdc++.h>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
    // Implement your solution here
    int size = A.size();
    int minCount = 0, maxCount = 0;
    vector<int> a(N,0);

    for(int i = 0; i < size; i++) {
        if(A[i] == N+1) {
            minCount = maxCount;
        } else {
            if(a[A[i]-1] < minCount) a[A[i]-1] = minCount;
            a[A[i]-1]++;
            maxCount = max(maxCount, a[A[i]-1]);
        }
    }

    for(int i = 0; i < N; i++) {
        if(a[i] < minCount) a[i] = minCount;
    }

    return a;
}
```
