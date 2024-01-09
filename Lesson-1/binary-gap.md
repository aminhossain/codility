<h1 align="center">BinaryGap</h1>
<p align="center">
<a href="https://app.codility.com/programmers/trainings/9/binary_gap/">Problem Link</a> | 
<a href="./Lesson-1/binary-gap.cpp">C++ Solution</a>
</p>

# Intuition

<!-- Describe your first thoughts on how to solve this problem. -->

The problem requires finding maximal sequence of consecutive zeros that is surrounded by ones at both ends in the binary representation of a number. The number can be from 1 to 2,147,483,647.

# Approach

<!-- Describe your approach to solving the problem. -->

We can solve this problem in multiple ways. A bruteforce approach would be, first convert the number from decimal to binary and then count the max zero occurances from that binary representation. In this approach the time complexity will be O(logn).

To optimize the bruteforce solution to O(1) we can solve the problem with bit manipulation approach. As the number will be under 32 bit so we can run a loop from 1 to 31 to check each bit of the number. We know that we can construct any decimal number by powering the binary base. Steps to construct the bit manipulation approach:

- Declare the `maxZero` variable to store the result.
- Run a loop from 1 to 31 and find each bit of `N` by right shift (>>) operation.
- Do and(&) operation with the right shifted bit and check if the bit is 1 or 0;
- If the bit found 1 then run a while loop for all the next bit until the next 1 is found and increment the `cnt` for all zeros in between.
- Store the max count of zeros in `maxZero`
- Finally return the `maxZero`.

# Complexity

- Time complexity: O(1)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(1)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code: C++

```C++
int solution(int N) {
    // Implement your solution here
    int maxZero = 0;
    for(int i = 0; i < 31; i++) {

        int bit = (N >> i) & 1;

        if(bit) {
            i++;
            int cnt = 0;
            while(((N >> i) & 1) != 1 && i < 31) {
                i++, cnt++;
            }

            if((N >> i) & 1) {
                maxZero = max(maxZero, cnt);
                i--;
            }
        }
    }

    return maxZero;
}
```
