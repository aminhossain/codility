<h1 align="center">MissingInteger</h1>
<p align="center">
<a href="https://app.codility.com/programmers/lessons/4-counting_elements/missing_integer/">Problem Link</a>
</p>

# Intuition

<!-- Describe your first thoughts on how to solve this problem. -->

The problem requires finding the smallest positive integer from the given array. It's clear that if the max value of the array is negative then the answer will be 1, because we have to return minimum missing positive number from the array.

# Approach

<!-- Describe your approach to solving the problem. -->

We can solve this problem using `map` data structure. `map` stores unique occurance of the element and also it's easy to find any element from map. Steps to construct the solution:

- Declare a map `mp` and store all the element of the array and keep the max value from the array in `maxi`
- Now run a loop from `1 to maxi` and check `i` is exists in `mp` or not, if no then return the `i` immediatly
- Otherwise if the `maxi` is less than 0 then retun `1` else return `maxi+1`

# Complexity

- Time complexity: O(maxi)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(n)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code: C++

```C++
// you can use includes, for example:
// #include <algorithm>
#include <bits/stdc++.h>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // Implement your solution here
    map<int, int> mp;
    int maxi = 0;
    int size = A.size();

    for(int i = 0; i < size; i++) {
        mp[A[i]]++;
        maxi = max(maxi, A[i]);
    }

    for(int i = 1; i <= maxi; i++) {
        if(mp[i] == 0) return i;
    }

    if(maxi < 0) return 1;
    else return maxi+1;
}
```
