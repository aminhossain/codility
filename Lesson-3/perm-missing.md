<h1 align="center">PermMissingElem</h1>
<p align="center">
<a href="https://app.codility.com/programmers/lessons/3-time_complexity/perm_missing_elem/">Problem Link</a>
</p>

# Intuition

<!-- Describe your first thoughts on how to solve this problem. -->

The problem requires finding the missing number from the array where the array contains integers in the range [1..(N + 1)].

# Approach

<!-- Describe your approach to solving the problem. -->

We can solve this problem in multiple ways. A bruteforce approach would be, we can take a map and store every element of the array. Then run a loop from 1 to N+1 and check the map to find the missing element. But in this case the space complexity will be O(n) and we have to run a loop to find the number.

To optimize the bruteforce solution to O(1) by space and O(n) by time we can solve the problem by bit manipulation approach. To solve the problem we will do XOR(^) operation. First we will run a loop from `1 to N+1` and store the result in variable. Then go through on every element of the array and do XOR with the array elements to eliminate the existing number as far the XOR rule, thus the missing number will remain as result. Steps to construct the solution:

- Declare a variable called `ans`
- Now run a loop from `1 to N+1` and do XOR to store the result in `ans`
- Now loop through the array element to eliminate the existing number by doing XOR operation.
- return the `ans`.

# Complexity

- Time complexity: O(n)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(1)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code: C++

```C++
int solution(vector<int> &A) {
    // Implement your solution here
    int size = A.size();
    int ans = 0;
    for(int i = 1; i <= size+1; i++) {
        ans ^= i;
    }

    for(int i = 0; i < size; i++) {
        ans ^= A[i];
    }

    return ans;
}
```
