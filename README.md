# 🧙‍♂️ CashWizard – Customer Discount & Cash Register Simulator

**CashWizard** is a terminal-based C program that simulates a point-of-sale system. It calculates applicable discounts based on customer status, wholesaler status, and payment method. It then processes the cash payment and calculates the precise change in real currency denominations.

---

## ✨ Features

- Random purchase amount generator
- Dynamic discount logic:
  - Based on purchase amount
  - Returning customer bonus
  - Wholesaler bonus
  - Cash payment bonus
- Full input validation
- Detailed change calculation using realistic denominations
- Summary with total paid, discount, and savings breakdown

---

## 🧮 How It Works

1. **Generates a random total** between €1.00 and €1000.00.
2. **Applies discounts** based on:
   - High purchase amount (up to 8%)
   - Returning customer (+5%)
   - Wholesaler status (+15%)
   - Cash payment (+2%)
3. **Asks user for input** on customer and payment types.
4. **Handles cash input** until enough is given.
5. **Calculates change** using denominations from €500 to €0.01.
6. **Prints receipt** with all relevant transaction details.


---

## 🔧 How to Compile and Run

Make sure you have a C compiler installed (e.g., `gcc`). Then compile and execute with:

```bash
gcc -o CashWizard cashwizard.c
./CashWizard
```


---

## 👨‍💻 Author
Created by Me
