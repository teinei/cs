/*
In this task you will continue working on the linked list of students in which you would like to store, for each student,
their name and age. As before you are provided with some code that you should not modify:

A structure definition for the storage of each student's information.
A main() function to test your code.
Prototypes for the functions createStudent(), append() (from previous tasks) and printStudents() (from the current task).
You will need the function definitions (from previous tasks) for createStudent(), append() as well as any other functions you added,
such as copyStr() for example.
If you were unable to solve the previous task you have the option to be given the code for the append() function
(see the quiz preceding this task) so that you can work on the current task.

Your new task is to write a function printStudents() which takes as input a pointer that holds the address of the start of a linked
list of students. Your function should then print this list of students to the screen as specified in the example below.
Your function should not return anything.
*/

#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[50], int studentAge);
struct student * append(struct student * end, struct student * newStudptr);
void printStudents(struct student *start);
void freeStudents(struct student * start);
/* add other prototypes here if needed*/

int main(void) {
    struct student *start, *newStudptr, *end, *tmp;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);

    start = createStudent("Petra", ageP);
    end = start;

    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);

    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);
    freeStudents(start);

    return 0;
}

/* Place your function definitions here. Be sure to include the definitions for
   createStudent() and append() as well as any other functions you created for
   the previous tasks. */

struct student * createStudent(char studentName[], int studentAge)
{
    struct student * stuptr;
    stuptr = (struct student *) malloc(sizeof(struct student));
    int i = 0;
    while (studentName[i] != '\0')
    {
        stuptr->name[i] = studentName[i];
        i++;
    }
    stuptr->name[i] = '\0';
    stuptr->age = studentAge;
    stuptr->next = NULL;
    return stuptr;
}

struct student * append(struct student * end, struct student * newStudentr)
{
    end->next = newStudentr;
    end = newStudentr;
    return end;
}

void printStudents(struct student *start)
{
    struct student * ptr = start;
    while( ptr != NULL)
    {
        printf("%s is %d years old.\n", ptr->name, ptr->age);
        ptr = ptr->next;
    }
}

void freeStudents(struct student * start)
{
    struct student * ptr = start;
    struct student * tmp;
    while (ptr != NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }

}