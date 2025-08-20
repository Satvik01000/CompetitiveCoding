### Roof Construction
[Roof Construction](https://codeforces.com/problemset/problem/1632/B)

### Problem Logic
This is a problem that totally depends on knowing this concept 

<img width="500" height="700" alt="image" src="https://github.com/user-attachments/assets/ea57e647-1971-481c-8de6-ec018583f752" />

Now what we will do from this concept is set a threshold value which will be `pow(2, msb)`. Now this is the point from where the `msb` becomes active before this it is `0` and from it, the `msb` is `1`. So what we saw from the image is that if we have `1000` it is `>` `0111`. So when we do bitwise operation we cannot reduce the answer to be lesser than `MSB` value no matter what combination we try. This proves us that the answer will be `≥pow(2, msb)`. So what we want to do is achieve the minimum value in that range which is `pow(2, msb)`. For that what we will do is first print `(threshold - 1) to 0` and then `threshold to n`. The reasson we print this way and not directly `0 to n-1` is say threshold was `4` now we are printing `0 to n-1`, `xor(3, 4)` would be greater than pow(2, msb). So we print in this manner which ensures at the threshold, `xor(thrshold-1, threshold)=pow(2, msb)`. 

[Watch the video](https://www.youtube.com/watch?v=39W4Xgbawyc)
