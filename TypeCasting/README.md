# Typecasting in C++ - Exploring Different Types

# Problem Statement

# Title:
Exploring Typecasting in C++

# Description:
This exercise evaluates the functionality and potential issues of typecasting in C++. You will work with implicit and explicit typecasting (including `static_cast`, `dynamic_cast`, `reinterpret_cast`, and `const_cast`) to explore their usage with primitive types and user-defined classes. The program highlights safe conversions as well as risky conversions that can lead to undefined behavior.

# Objectives:
1. Demonstrate implicit and explicit typecasting with primitive types (e.g., converting `int` to `double` and vice versa).
2. Perform upcasting and downcasting between base and derived classes.
3. Explore the use of `reinterpret_cast` and demonstrate the associated risks.
4. Use `const_cast` to remove constness from variables, and explain why this can be dangerous.

# Solution Hint
1. Primitive Typecasting:
   - Use implicit typecasting when the compiler automatically converts one type to another (e.g., `int` to `double`).
   - Use `static_cast` for explicit conversions between compatible types (e.g., `double` to `int`).

2. Class Typecasting:
   - Upcasting (from `Derived` to `Base`) is done implicitly, but downcasting requires the use of `dynamic_cast` to ensure safety.
   - Demonstrate dynamic casting and check if the casting was successful.

3. Risky Typecasting:
   - `reinterpret_cast` is used to treat a pointer as if it points to another type (e.g., casting an `int*` to `char*`). This can be unsafe and lead to undefined behavior.

4. Const Typecasting:
   - `const_cast` allows removing the const qualifier, but modifying a const variable can cause unexpected results or undefined behavior.

# Learning

By solving this problem, you will:
- Understand the differences between implicit and explicit typecasting.
- Learn how to safely cast between base and derived classes using `dynamic_cast`.
- Explore the dangers of `reinterpret_cast` and why it should be used sparingly.
- Understand how `const_cast` can be used to remove const qualifiers, but also why it can be dangerous to modify const data.
