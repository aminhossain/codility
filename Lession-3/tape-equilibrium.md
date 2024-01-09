<h1 align="center">TapeEquilibrium</h1>
<p align="center">
<a href="https://app.codility.com/programmers/lessons/3-time_complexity/tape_equilibrium/">Problem Link</a>
</p>

# Intuition

<!-- Describe your first thoughts on how to solve this problem. -->

The problem requires finding the absolute difference between the sum of the first part and the sum of the second part of an array.

# Approach

<!-- Describe your approach to solving the problem. -->

The problem is pretty much straight forward and can be solved via some mathematical calculation. We can solve it via prefixSum technique or taking the total some of the array and then subtract as we move on the array element. Steps to construct the solution:

- Declare a variable called `sum` ans calculate the total sum of the array
- Now loop through the array element and subtract each part of element from the total `sum`.
- return the `sum`.

# Complexity

- Time complexity: O(n)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(1)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code: C++

```C++
int solution(vector<int> &A) {
    // Implement your solution here
    int sum = 0, curSum = 0;
    int size = A.size();

    for(int i = 0; i < size; i++) {
        sum += A[i];
    }

    int mini = INT_MAX;
    for(int i = 0; i < size-1; i++) {
        curSum += A[i];
        mini = min(mini, abs(sum - (curSum*2)));
    }

    return mini;
}
```
