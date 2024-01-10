<h1 align="center">FrogRiverOne</h1>
<p align="center">
<a href="https://app.codility.com/programmers/lessons/4-counting_elements/frog_river_one">Problem Link</a>
</p>

# Intuition

<!-- Describe your first thoughts on how to solve this problem. -->

The problem requires finding the earliest time when the frog can jump to the other side of the river which is `X`. But to reach that position the frog must move by each leaves from `1 to X`.

# Approach

<!-- Describe your approach to solving the problem. -->

We can solve this problem using `set` data structure. `set` stores unique occurance of the element and also it's easy to find, erase any element from set. Steps to construct the solution:

- Declare a set `a` and store `1 to X`
- Now loop throug the array and check if the arry element is found in `a`
- if found is true then erase the element from `a` and check `a` becomes empty or not
- when `a` becomes empty return the i<sup>th</sup> second immedialty.

# Complexity

- Time complexity: O(nlogn)
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

int solution(int X, vector<int> &A) {
    // Implement your solution here
    set<int> a;
    int size = A.size();

    for(int i = 1; i <= X; i++) {
        a.insert(i);
    }

    for(int i = 0; i < size; i++) {
        if(a.count(A[i])) {
            a.erase(A[i]);
        }

        if(a.empty()) return i;
    }

    return -1;
}
```
