### AB Balance
[AB Balance](https://codeforces.com/problemset/problem/1606/A)

### Problem Logic
This is a pure observational problem, we will apply mathematical induction to prove that 
```cpp
if(s[0]==s[n-1]) then freq(ab) = freq(ba) will always hold true
```
See the editorial which is below
```
Let's look at the first and the last characters of 𝑠
. Note that if 𝑠1=𝑠𝑛
 (where 𝑛=|𝑠|
), then AB(𝑠)
 is always equal to BA(𝑠)
.

It can be proved, for example, by induction: if 𝑠
 consists of equal characters then AB(𝑠)=BA(𝑠)=0
; if 𝑠
 has a structure like abb...ba (or baa...ab) then AB(𝑠)=BA(𝑠)=1
.

Otherwise, there is at least one character 𝑠𝑖
 in the middle that equal to 𝑠1
 and 𝑠𝑛
. So we can split string 𝑠
 in 𝑠[1..𝑖]
 and 𝑠[𝑖..𝑛]
. Both these string has AB=BA
 (by induction), so our string 𝑠
 also has AB(𝑠)=BA(𝑠)
.

As a result, if 𝑠1=𝑠𝑛
 then the answer is 0
, and we print the string untouched. Otherwise, we replace either 𝑠1
 or 𝑠𝑛
 and get the desired string.

(It also can be proved that if 𝑠1≠𝑠𝑛
 then AB(𝑠)≠BA(𝑠)
)
```