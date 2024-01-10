<h1 align="center">CyclicRotation</h1>
<p align="center">
<a href="https://app.codility.com/programmers/lessons/2-arrays/cyclic_rotation/">Problem Link</a>
</p>

# Intuition

<!-- Describe your first thoughts on how to solve this problem. -->

The problem requires to rotate array A, K times; that is, each element of A will be shifted to the right K times.

# Approach

<!-- Describe your approach to solving the problem. -->

We can solve this problem in multiple ways. A bruteforce approach would be, each time rotate the array from right side (last element) by k times. But In this approach the time complexity will be O(n<sup>2</sup>).

To optimize the bruteforce solution to O(n) we can solve the problem with some mathematical trick. If we look closly, whenever K is equal to the array size the array will be it's original position. It means we just have to rotate the array reminder of K times. Steps to construct the solution:

- Declare a new vector to store the result.
- Run through the loop by array size.
- Now, just place each array element as far the given k rotation by formulating `(i+K)%size`.
- return the result array.

# Complexity

- Time complexity: O(n)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(n)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code: C++

```C++
vector<int> solutionCyclicRotation(vector<int> &A, int K) {
    // Implement your solution here
    int size = A.size();
    vector<int> newArr(size);

    for(int i = 0; i < size; i++) {
        newArr[(i+K)%size] = A[i];
    }

    return newArr;
}
```
