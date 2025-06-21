# Park Lighting
[Park Lighting](https://codeforces.com/problemset/problem/1358/A)

### Problem Logic
Max lights that could have been requried is n*m but it is given that each light can light up 2 blocks so n*m/2 lights are needed for the task in total but in case of n*m being an odd number we need one extra lantern to light up the last block so we will take the ceil value of n*m/2, which in C++ can be represented as (n*m+1)/2