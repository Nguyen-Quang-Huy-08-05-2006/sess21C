#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    int age;
} Student;

#define MAX_STUDENTS 100

void readStudentsFromFile(const char *filename, Student *students, int *count) {
    FILE *file = fopen(filename, "r");
    int i = 0;
    while (fscanf(file, "%d,%49[^,],%d", &students[i].id, students[i].name, &students[i].age) == 3) {
        i++;
        if (i >= MAX_STUDENTS) {
            printf("Da dat gioi han toi da so sinh vien (%d).\n", MAX_STUDENTS);
            break;
        }
    }

    *count = i;
    fclose(file);
}

void printStudents(const Student *students, int count) {
    for (int i = 0; i < count; i++) {
        printf("[ID: %d] [Name: %s] [Age: %d]\n", students[i].id, students[i].name, students[i].age);
    }
}

int main() {
    Student students[MAX_STUDENTS];
    int studentCount;

    readStudentsFromFile("students.txt", students, &studentCount);

    printf("\nDanh sach sinh vien:\n");
    printStudents(students, studentCount);

    return 0;
}

