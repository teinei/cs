w2devoir struct

```c
//w2devoir c2ucsc
#include <stdio.h>

struct employee{
	char department[30];
	int annualSalary;
	int ssn;//social security number
};

//function prototypes
void printEmployee(struct employee);
//void readStudent(struct student *studptr);

//main function
int main(void) {
    //! showMemory(start=65520)
    struct employee jo={"HR",0,0};
    printEmployee(jo);
    //readStudent(&me);
    //printStudent(me);
	return 0;
}

/*
void readStudent(struct student *studptr) {
    printf("\nEnter a new student record: \n");
    printf("First name: ");
    scanf("%s", studptr->firstName);
    printf("Last name: ");
    scanf("%s", studptr->lastName);
    printf("Birth year: ");
    scanf("%d", &studptr->birthYear);
    printf("Average grade: ");
    scanf("%lf", &studptr->aveGrade);
}
*/
///*
void printEmployee(struct employee stud) {
    printf("Name: %s\n", stud.department);
	printf("Year of birth: %d\n",stud.annualSalary);
	printf("Social Security Number: %d\n",stud.ssn);
	//printf("Average grade: %.2lf\n",stud.aveGrade);
}
//*/
```

