# 🎓 Student Management System in C

A menu-driven **Student Management System** developed in C to manage student names, subject marks, grades, and academic performance through a command-line interface. This project demonstrates arrays, functions, loops, conditional statements, input validation, and basic data processing.

## ✨ Features

- **Add Students:** Register multiple students by entering their names.
- **Add Student Marks:** Enter marks for up to 10 subjects for a selected student.
- **Display Students:** View the list of registered students with their student numbers.
- **Display Marks:** View the subject-wise marks of a selected student.
- **Calculate Grades:** Automatically assign grades based on subject marks.
- **Find Highest and Lowest Marks:** Identify the highest and lowest subject marks for each student.
- **Display Complete Student Data:** View student names, subject marks, and corresponding grades together.
- **Input Validation:** Handle invalid menu choices, student numbers, subject counts, and marks outside the range of 0–100.
- **Menu-Driven Interface:** Navigate between operations using a simple console menu.

## 🛠️ Technologies Used

- **Programming Language:** C
- **Header Files:** `stdio.h`, `string.h`
- **Compiler:** GCC
- **Interface:** Command-Line Interface (CLI)
- **Data Storage:** Arrays

## 📋 Available Operations

| Option | Operation | Description |
|---|---|---|
| 1 | Add Student | Register student names |
| 2 | Add Student Marks | Enter marks for a selected student |
| 3 | Display Students | Show the registered student list |
| 4 | Display Marks | View marks for a selected student |
| 5 | Show Student Grades | Calculate and display subject-wise grades |
| 6 | Highest and Lowest Marks | Find the highest and lowest marks for each student |
| 7 | Display All Student Data | Display names, marks, and grades |
| 8 | Exit | Terminate the program |

## 📊 Grading System

The program assigns grades according to the following scale:

| Marks Range | Grade |
|---|---|
| 90–100 | A |
| 80–89.99 | B |
| 70–79.99 | C |
| 60–69.99 | D |
| Below 60 | F |

Each subject receives an individual grade based on its marks.

## 🚀 Getting Started

### Prerequisites

Install a C compiler such as GCC. On Windows, you can use GCC through MinGW-w64 or MSYS2.

### Compilation

Open a terminal in the project directory and execute:

```bash
gcc StudentManagement.c -o StudentManagement
```

Replace `StudentManagement.c` with your actual source filename if it differs.

### Run the Program

**Windows (PowerShell):**

```powershell
.\StudentManagement.exe
```

**Linux/macOS:**

```bash
./StudentManagement
```

## 💻 Example Output

```text
====================================
       STUDENT MANAGEMENT SYSTEM
====================================
1. Add Student
2. Add student marks
3. Display students
4. Display marks of students.
5. Show student grade
6. Get highest and lowest marks of students.
7. Display all data of students.
8. Exit

Enter your choice : 1
Enter number of students to add: 2
Enter name of student 1: Rahul
Enter name of student 2: Aman
Student added successfully!!
```

## 📚 Concepts Practiced

- One-dimensional and two-dimensional arrays
- Functions, parameters, and return values
- `do-while` loops and `for` loops
- `switch-case` statements
- Conditional statements using `if-else`
- String handling using `fgets()` and `strcspn()`
- Input validation using `scanf()`
- Working with character arrays and floating-point values
- Grade calculation using functions
- Searching for minimum and maximum values
- Passing arrays to functions
- Organizing a program into reusable modules

## ⚠️ Limitations

- Student information is stored in arrays and is lost when the program terminates.
- The program currently supports up to 100 students and 10 subjects per student.
- Student names cannot exceed 49 characters, excluding the terminating null character.
- Existing student records cannot be edited or deleted.
- There is no database, file storage, or user authentication.
- Invalid marks input can interrupt the current marks-entry operation without rolling back previously entered marks.

## 🔮 Future Improvements

- Add file handling to save student records permanently.
- Implement search functionality by student name or student number.
- Add options to edit and delete student records.
- Calculate total marks, average marks, and percentage.
- Introduce attendance tracking.
- Generate student performance reports.
- Add sorting by marks, name, or grade.
- Replace arrays with structures (`struct`) for better data organization.
- Integrate a database for persistent storage.

## 🎯 Project Objective

The objective of this project is to strengthen fundamental C programming and problem-solving skills by building a practical application for managing student information and analyzing academic performance.

## 👨‍💻 Author

**Arun Saini**

This project is part of my programming practice and GitHub portfolio, demonstrating my progress in C programming, modular design, and problem-solving.

---

⭐ If you find this project useful, consider giving the repository a star!
