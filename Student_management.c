#include <stdio.h>
#include <string.h>

// Function to ask user choice

int userChoice() {
    int choice;
    do {
        printf("\n====================================\n");
        printf("       STUDENT MANAGEMENT SYSTEM\n");
        printf("====================================\n");
        printf("1. Add Student\n");
        printf("2. Add student marks\n");
        printf("3. Display students\n");
        printf("4. Display marks of students.\n");
        printf("5. Show student grade\n");
        printf("6. Get highest and lowest marks of students.\n");
        printf("7. Display all data of students.\n");
        printf("8. Exit\n\n");
        printf("Enter your choice : ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid! Enter correct choice.\n");
            while(getchar() != '\n');
            choice = 0; 
        } else {
            while(getchar() != '\n');
        }

        printf("====================================\n");

    } while (choice < 1 || choice > 8);

    return choice;
}

// Function to display student marks

void addStudent_marks(char students[][50], int size, float marks[][10], int subject_count[]) {
    if (size == 0) {
        printf("No student found!\n");
        return;
    }

    int studentNum;
    printf("Enter student number (1 to %d): ", size);

    if (scanf("%d", &studentNum) != 1 || studentNum < 1 || studentNum > size) {
        printf("Invalid student number!\n");
        while (getchar() != '\n');
        return;
    }

    int index = studentNum - 1;
    int subNum;

    printf("Enter subject number from (1 to 10) : ");
    if (scanf("%d", &subNum) != 1 || subNum < 1 || subNum > 10) {
        printf("Invalid subject number!\n");
        while (getchar() != '\n');
        return;
    }

    for (int i = 0; i < subNum; i++) {
        printf("Enter marks of %s for subject %d : ", students[index], i + 1);
        if (scanf("%f", &marks[index][i]) != 1 || marks[index][i] < 0 || marks[index][i] > 100) {
            printf("Invalid marks! Enter marks between (0 to 100).");
            while (getchar() != '\n');
            return;
        }
    }

    subject_count[index] = subNum;
    printf("Marks added successfully for %s!\n", students[index]);

}

// Function to print student marks

void printStudent_Marks(char students[][50], int size, float marks[][10], int subject_count[]) {

    if (size == 0) {
        printf("No student found\n!");
        return;
    }

    int studentNum;
    printf("Enter student number (1 to %d): ", size);

    if (scanf("%d", &studentNum) != 1 || studentNum < 1 || studentNum > size) {
        printf("Invalid student number!\n");
        while (getchar() != '\n');
        return;
    }

    int index = studentNum - 1;

    if (subject_count[index] == 0) {
        printf("No marks entered for %s yet.", students[index]);
        return;
    }
    
    printf("=== Marks of %s ====\n", students[index]);

    for (int i = 0; i < subject_count[index]; i++) {  
        printf("Subject %d: %.2f\n", i + 1, marks[index][i]);
    }

}

// Function to fetch highest and lowest marks

void get_High_low_Marks(char students[][50], int size, float marks[][10], int subject_count[]) {
    
    if (size == 0) {
        printf("No student found!");
        return;
    }

    for (int i = 0; i < size; i++) {

        if (subject_count[i] == 0) {
            printf("No marks available for %s", students[i]);
            continue;
        }

        float highest = marks[i][0];
        float lowest = marks[i][0];

        for (int j = 1; j < subject_count[i]; j++) {
            if (marks[i][j] > highest) {
                highest = marks[i][j];
            }

            if (marks[i][j] < lowest) {
                lowest = marks[i][j];
            }
        }

        printf("\nStudent: %s\n", students[i]);
        printf("Highest marks: %.2f\n", highest);
        printf("Lowest marks: %.2f\n", lowest);
    }
}

// Function to add students

int addStudent(char students[][50], int size) {
    int count;

    printf("Enter number of students to add: ");
    if (scanf("%d", &count) != 1) {
        printf("Enter correct number!");
        while (getchar() != '\n');
        return size;
    }

    getchar(); 

    for (int i = 0; i < count; i++) {
        printf("Enter name of student %d: ", size + 1);

        fgets(students[size], 50, stdin);
        students[size][strcspn(students[size], "\n")] = '\0';

        size++;
    }

    printf("Student added successfully!!");

    return size;
}

// Function to calculate student grade

char calculateGrade(float mark) {
    
    if (mark >= 90) {
        return 'A';
    } else if (mark >= 80) {
        return 'B';
    } else if (mark >= 70) {
        return 'C';
    } else if (mark >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

// Function to display student grades

void displayStudentGrade(char students[][50], int size, float marks[][10], int subject_count[]) {

        if (size == 0) {
            printf("No student found!, Please add student first.");
            return;
        }

        for (int i = 0; i < size; i++) {

            if (subject_count[i] == 0) {
                printf("No marks available for student %s.\n", students[i]);
                continue;
            } 

            printf("---- Grade of %s ----\n", students[i]);

            for (int j = 0; j < subject_count[i]; j++) {
                printf("Subject %d : %.2f - Grade %c\n", j + 1, marks[i][j], calculateGrade(marks[i][j]));
            }

        }

}

// Function to display student names

void printstudent(char students[][50], int size) {

    if (size == 0) {
        printf("No student found!\n");
        return;
    }
    
    printf("\n--- Student List ---\n");

    for (int i = 0; i < size; i++) {
        printf("Student no %d : %s\n", i + 1, students[i]);
    }

}

// Function to display student data

void displayStudentData(char students[][50], int size, float marks[][10], int subject_count[]) {

    if (size == 0) {
        printf("No student found!");
        return;
    } 

    printf("==== All Student Data ====\n");

    for (int i = 0; i < size; i++) {
        printf("Student No : %d\n", i + 1);
        printf("Name :  %s\n", students[i]);

        if (subject_count[i] == 0) {
            printf("Marks not entered yet!\n");
            continue;
        }

        for (int j = 0; j < subject_count[i]; j++) {

            printf("Subject %d: %.2f | Grade: %c\n", j + 1, marks[i][j], calculateGrade(marks[i][j]));
        
        }

    }

    printf("\n======================================\n");

}



int main() {

    int choice;
    int size = 0;
    char students[100][50];
    float marks[100][10] = {0};
    int subject_count[100] = {0};

     do {
        choice = userChoice();

        switch (choice) {
            case 1:
                size = addStudent(students, size);
                break;
            case 2:
                addStudent_marks(students, size, marks, subject_count);
                break;

            case 3:
                printstudent(students, size);
                break;

            case 4:
                printStudent_Marks(students, size, marks, subject_count);
                break;
            
            case 5:
                displayStudentGrade(students, size, marks, subject_count);
                break;

            case 6:
                get_High_low_Marks(students, size, marks, subject_count);
                break;

            case 7:
                displayStudentData(students, size, marks, subject_count);
                break;

            case 8:
                printf("Exiting Program.. Thank you!!\n");
                break;

        }

    } while (choice != 8);

    return 0;
}