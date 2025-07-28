# 💸 C Expense Tracker

A simple command-line Expense Tracker built in C. This is a WIP (work-in-progress) project aimed at practicing the basics of the C language, including arrays, strings, user input handling, and eventually modularization and file operations.

---

## 📋 Features

### ✅ Current Functionality
- Add a description and amount for expenses
- View all entered expenses
- Get the **total sum** of all expenses (rounded to 2 decimal places)

### 🧠 Under the Hood
- Stores up to 99 expenses
- Uses global arrays to store descriptions and amounts
- Handles floating-point rounding using `math.h`
- Input taken via `scanf()` and `fgets()`

---

## 🚧 Upcoming Features
- [ ] **Input validation**  
  - Prevent crash/bug when entering non-integer in menu selection  
  - Handle invalid characters in descriptions and amounts  
- [ ] **Monthly expense separation**  
  - Track which month each expense belongs to  
- [ ] **Average monthly expenses**  
  - Calculate average per month from all stored data  
- [ ] **Tags for each expense**  
  - Add a tag (like "food", "rent", etc.) for better grouping  
- [ ] **Get sum of expenses by tag**  
  - Sum and display total spent per tag  
- [ ] **User profiles**  
  - Multiple user data support — each user has separate expenses  
- [ ] **Fix infinite loop on invalid menu input**  
  - Clear input buffer and reprompt when bad input is entered  

---

## 🧪 How to Compile & Run

You'll need a C compiler like `gcc`.

```bash
gcc main.c -o main -lm
./main
```

---

##  ✍️ Author

**GitHub**: [rowanvictor01](https://github.com/rowanvictor01)  
**X (Twitter)**: [@rowanlearnscode](https://x.com/rowanlearnscode)  
**Blog Posts**: [rowanvictor01](https://dev.to/rowanvictor01)  
**Frontend Mentor**: [rowanvictor01](https://www.frontendmentor.io/profile/rowanvictor01)  

---

🧠 Notes

This project is part of my journey to get better at systems-level programming and to understand how memory, input, and program flow works at a low level. The goal is to continuously build upon this base with more advanced features while learning good coding practices in C.

Stay tuned!

---

