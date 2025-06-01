# K-divisible Sum
[K-divisible Sum](https://codeforces.com/problemset/problem/1476/A)

## 🔍 Problem Summary (in simple words)

You are given:
- `n`: number of elements you want in your array
- `k`: the **sum of the array** must be divisible by this `k`

Goal:
> Make an array of `n` **positive integers**, such that:
> - The **sum** is divisible by `k`
> - The **maximum element** is **as small as possible**

---

## 🧠 Key Observations

1. ✅ Each element must be at least 1 → So **total sum must be ≥ n**

2. ✅ The **sum of the array must be divisible by `k`**

So, you are looking for:
- The **smallest number ≥ n** that is also **divisible by `k`**

Let’s call that number `S`. So:

```cpp
S = the smallest multiple of k which is ≥ n
```

This `S` will be the **total sum** of the array.

Now, you want to **distribute this sum** across `n` elements such that:
- Every number is positive
- The **maximum number** is as small as possible

So, you just **spread the sum evenly**.

That means the **maximum element** is:

```cpp
ceil(S / n)
```

---

## 🎯 Final Formula Logic

```cpp
S = ((n + k - 1) / k) * k;  // this gives us the smallest multiple of k ≥ n
answer = (S + n - 1) / n;   // this gives ceil(S / n)
```

This is a classic **“ceil division trick”** using integer math:

```cpp
ceil(a / b) = (a + b - 1) / b
```

---

## 🧪 Example Walkthrough

Let’s take: `n = 4`, `k = 3`

### Step 1: Find smallest multiple of 3 ≥ 4

- Multiples of 3: `3, 6, 9, ...`
- Smallest ≥ 4 is **6**

So total sum = 6

### Step 2: Spread sum across 4 elements

- `ceil(6 / 4) = 2`

So, answer is **2**  
👉 For example: `[1, 2, 1, 2]` → sum = 6, divisible by 3, max = 2 ✅

---

## 💡 Why It Works?

We are:
- Making the **total sum as small as possible** (while still divisible by `k`)
- Then **distributing it as evenly as possible** to make the **max value small**

That’s exactly what the problem wants: **minimum max value**, **sum divisible by `k`**, and **`n` elements**.

---

Let me know if you'd like to visualize it with more examples or see how to construct the array too!