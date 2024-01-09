<h1 align="center">Frog Jump</h1>
<p align="center">
<a href="https://app.codility.com/programmers/lessons/3-time_complexity/frog_jmp/">Problem Link</a>
</p>

# Intuition

<!-- Describe your first thoughts on how to solve this problem. -->

The problem requires finding the minimal jump for the frog from X to Y, where the frog can jump D distance in each jump.

# Approach

<!-- Describe your approach to solving the problem. -->

The problem is very basic problem. We just have to do some arithmetic operation tosolve the problem Steps to construct the solution:

- Find the remaining distance by subtracting X from Y and store it in `dis`
- Now divide the `dis` by `D` and store the result in `ans`
- Find if there is any distance left after dividing the `dis`, if so then add another step in the `ans`
- return the `ans`.

# Complexity

- Time complexity: O(1)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(1)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code: C++

```C++
int solution(int X, int Y, int D) {
    // Implement your solution here
    int dis = Y - X;
    int ans = dis/D;
    if(dis%D) ans++;

    return ans;
}
```
