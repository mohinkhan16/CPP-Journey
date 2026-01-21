# Library Management System (C++ OOP Project)

## 📘 Project Overview

This project is a **Library Management System** implemented in **C++** to demonstrate core **Object-Oriented Programming (OOP)** concepts. The system allows managing different types of library items such as **Books, DVDs, and Magazines** using a menu-driven interface.

The program makes use of **abstraction, inheritance, polymorphism, encapsulation, dynamic memory allocation, and exception handling**, making it suitable for **academic practical exams and viva**.

---

## 🎯 Objectives

* To design an abstract base class for library items
* To demonstrate runtime polymorphism using base-class pointers
* To manage library items dynamically
* To handle invalid input using exception handling

---

## 🛠️ Tools & Technologies

* **Language:** C++
* **Compiler:** g++ (GNU Compiler)
* **IDE:** Visual Studio Code
* **Operating System:** Windows

---

## 🧱 Class Design

### 🔹 Abstract Base Class: `LibraryItem`

* Data Members: `title`, `author`, `dueDate`
* Pure Virtual Functions:

  * `checkOut()`
  * `returnItem()`
  * `displayDetails()`

### 🔹 Derived Classes:

1. **Book**

   * Additional Data: `pages`
   * Checkout Period: 15 Days

2. **DVD**

   * Additional Data: `duration`
   * Checkout Period: 7 Days

3. **Magazine**

   * Additional Data: `issueNumber`
   * Checkout Period: 5 Days

---

## ⚙️ Key OOP Concepts Used

* **Abstraction:** Using abstract class `LibraryItem`
* **Inheritance:** `Book`, `DVD`, and `Magazine` inherit from `LibraryItem`
* **Polymorphism:** Base-class pointer calls overridden methods at runtime
* **Encapsulation:** Private data members with public setters/getters
* **Dynamic Memory Allocation:** Objects created using `new` and released using `delete`
* **Exception Handling:** Handles invalid input safely

---

## 📋 Program Features

* Menu-driven interface
* Add Books, DVDs, and Magazines
* Display all library items
* Check out and return items
* Input validation and error handling
* Supports up to **50 library items**

---

## ▶️ Sample Menu Output

```
--- LIBRARY MANAGEMENT SYSTEM ---
1. Add Book
2. Add DVD
3. Add Magazine
4. Display All Items
5. Check Out Item
6. Return Item
0. Exit
Enter Choice:
```

## ✅ Conclusion

This Library Management System successfully demonstrates the practical use of **Object-Oriented Programming principles in C++**. It is well-structured, easy to understand, and fulfills academic practical requirements.


