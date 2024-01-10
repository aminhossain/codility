<h1 align="center">OddOccurences</h1>
<p align="center">
<a href="https://app.codility.com/programmers/lessons/2-arrays/odd_occurrences_in_array/">Problem Link</a>
</p>

# Intuition

<!-- Describe your first thoughts on how to solve this problem. -->

The problem requires finding the odd occurances of the number from the given array.

# Approach

<!-- Describe your approach to solving the problem. -->

We can solve this problem in multiple ways. A bruteforce approach would be, we can take a map to store count of each element and then run loop on the map to find the odd occurance of the number. But in this case the space complexity will be O(n) and we have to run a loop to find the number.

To optimize the bruteforce solution to O(1) by space and O(n) by time we can solve the problem by bit manipulation approach. To solve the problem we will do XOR(^) operation on every element of the array as a result the even number of occurance numbers will be eliminate as far the XOR rule, thus the odd occured number will remain as result. Steps to construct the solution:

- Declare a variable and assign first element (0<sup>th</sup>) of the array in it.
- Run through the loop by array size from 1<sup>st</sup> element and do the XOR(^) operation.
- finally return the result.

# Complexity

- Time complexity: O(n)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(1)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code: C++

```C++
int solution(vector<int> &A) {
    int odd = A[0];

    for(int i = 1; i < A.size(); i++) {
        odd ^= A[i];
    }

    return odd;
}
```
