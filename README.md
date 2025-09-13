# ➕ Simple Arithmetic Calculator in C

A basic C program that takes two integer numbers as input and performs the following operations:

- Addition
- Subtraction
- Multiplication
- Integer Division
- Modulus (Remainder)

The program displays both the result and the full equation for each operation.

---

## 💡 How It Works

1. The program prompts the user to enter two integer numbers.
2. It reads the input using `scanf()`.
3. It performs all five basic arithmetic operations.
4. For each operation, it prints:
   - A simple sentence: `The sum is: 10`
   - And the full equation: `5 + 5 = 10`

---

## 🛠️ How to Compile & Run

1. Save the code as `calculator.c`
2. Open your terminal or CMD
3. Compile using GCC:
   ```bash
   gcc calculator.c -o calculator


🧪 Example Output

Enter number:
12
Enter other number:
4
The sum is: 16
12 + 4 = 16

The difference is: 8
12 - 4 = 8

The product is: 48
12 * 4 = 48

The quotient is: 3
12 / 4 = 3

The remainder is: 0
12 % 4 = 0
