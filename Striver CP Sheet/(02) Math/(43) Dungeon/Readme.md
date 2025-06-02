# Dungeon
[Dungeon](https://codeforces.com/problemset/problem/1463/A)

### Problem Logic
The reason we check **`(a + b + c) % 9 == 0`** in the "Dungeon" problem is due to **how damage is distributed per every 7 shots**.

---
### 🎯 What happens in 7 shots?
- You fire **6 normal shots**, each doing 1 damage to *any one monster*.
- You fire **1 enhanced shot**, which does 1 damage to **each of the 3 monsters** ⇒ total **3 damage**.

### 🧮 So in every 7 shots:
- You do **6 (normal)** + **3 (enhanced)** = **9 units of total damage**.
- Therefore, for any full "set" of 7 shots, the total damage you deal is **a multiple of 9**.

---

## 🧠 Total HP must match total damage
Let:
- `S = a + b + c` (total health of all monsters combined)
- `k = number of enhanced shots`
- Then total shots fired = `7k`
- Total damage done = `9k` (because each 7-shot cycle deals 9 damage)

So, to beautifully kill all monsters *on an enhanced shot*:
- You must do exactly `S = 9k` damage ⇒ **S must be divisible by 9**.

**Hence, `S % 9 == 0` is required**.

---

## 💡 Also:
Each monster will take exactly `k` damage from the enhanced shots (since each enhanced shot hits all three), so:
- If any monster has HP less than `k`, it can't survive until the `k`-th enhanced shot → you can’t kill all monsters together.

So you also check:
- `min(a, b, c) ≥ k = S / 9`

---

## ✅ In summary:
- `S % 9 == 0` ensures the damage is exactly enough to kill all monsters on a multiple of 7 (last shot is enhanced).
- `min(a, b, c) ≥ S / 9` ensures no monster dies before that enhanced shot.