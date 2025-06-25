# CPP Module 03 - Inheritance

## 🚀 Introduction

This module is part of the C++ Piscine at 42 School. It introduces the powerful concept of **inheritance** in object-oriented programming (OOP). The goal is to understand how classes can derive from other classes, how to extend functionality, and how to properly manage object construction, destruction, and behavior chaining.

---

## 🎯 Goals of the Module

- Understand **inheritance** in C++
- Learn how to use base classes and derived classes
- Master constructor/destructor chaining
- Apply the **Orthodox Canonical Form** with inheritance
- Understand how derived classes extend or override base class functionalities
- Handle class-specific behaviors while maintaining proper memory management

---

## 📚 Exercise Summary

| Exercise | Description                                                                          | Key Concepts                              |
|----------|--------------------------------------------------------------------------------------|--------------------------------------------|
| **ex00** | Implement the class `ClapTrap` with basic actions: `attack`, `takeDamage`, `beRepaired`. | Class basics, member functions, canonical form |
| **ex01** | Create `ScavTrap` class inheriting from `ClapTrap`. Add `guardGate()` mode.         | Simple inheritance, constructor chaining   |
| **ex02** | Implement `FragTrap` inheriting from `ClapTrap`. Add `highFivesGuys()` special ability. | Multiple child classes, extending functionality |
| **ex03** | Demonstrate proper use of destructors with pointers and references to base class.   | Virtual destructors, runtime behavior      |

---

## 🗝️ Key Concepts Table

| Concept                  | Description                                                            |
|--------------------------|------------------------------------------------------------------------|
| **Inheritance**          | Mechanism for a class to inherit members from another class.          |
| **Constructor Chaining** | When a child class calls the parent’s constructor to initialize base attributes. |
| **Destructor Order**     | Child destructors run before parent destructors (reverse of construction). |
| **Orthodox Canonical Form** | Constructor, Copy Constructor, Copy Assignment Operator, Destructor. |
| **Method Overriding**    | A derived class can redefine a method of the base class.              |
| **Virtual Destructor**   | Ensures correct destruction order when deleting via a base class pointer. |
| **Access Specifiers**    | `protected` allows derived classes to access members (unlike `private`). |

---

## 🌟 What I Learned

- How to design class hierarchies using inheritance
- The importance of proper constructor and destructor chaining
- How and when to override member functions
- The necessity of virtual destructors when working with polymorphism
- Deeper understanding of the **Orthodox Canonical Form** in inheritance contexts
- Real-world simulation of behaviors using OOP principles

---

## 🛠️ Tools Used

- **Language:** C++ (C++98 Standard)
- **Compiler:** `clang++` / `g++` with flags `-Wall -Wextra -Werror`
- **Editor:** Visual Studio Code / Vim / Emacs / or your preferred code editor
- **OS:** Linux / Unix (42 School environment)

---

## 🔮 Next Steps

- Move to **CPP Module 04:**  
  → Learn **runtime polymorphism**, **abstract classes**, and **interfaces**.