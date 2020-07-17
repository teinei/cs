Choose one of the following two options and upload your program as a text file.

## Option 1 (General)

Write enumerated types that supports dates—such as december 12. Then add a function that produces a next day.  So nextday(date) of december 12 is december 13. Also write a function printdate(date) that prints a date legibly.The function can assume that February has 28 days and it most know how many days are in each month. Use a struct with two members; one is the month and the second  is the day of the month—an int (or short).

```c
typedef enum month{ jan, feb, …} month;
typedef struct date{ month m; int d} date;
```

Then print out  the date January 1  and print  the next day Jan 2.

Do this for the following dates:  February 28, March 14, October 31, and  December 31.

## Option 2 (Natural or Social Science Focus)

Write a struct that has 

* a member that is the name of a business department: HR, Sales, Research, Software, and Executive (use enums for the 4 departments).  

* A second member that is an annual salary as an int. 

* A third member that is a social security number(unsigned).  

Generate 10 employees with different social security numbers. Invent a salary generator for each department 

(use some base salary for the department and add in a randomly generated offset).  

Print out the 10 employees and their values to the screen-one line at a time.

编写一个结构，该结构的

成员是业务部门的名称：人力资源，销售，研究，软件和执行人员（将枚举用于四个部门）。 

第二个成员，作为int的年薪。 

第三个成员是社会保险号（未签名）。 

生成具有不同社会保险号的10名员工。 为每个部门创建一个工资生成器（为该部门使用一些基本工资，并添加一个随机生成的抵消额）。 一次将10名员工及其价值观打印到屏幕一行。



Upload File



I, **NING ZHENG**, understand that submitting work that isn’t my own may result in permanent failure of this course or deactivation of my Coursera account. 

Learn more about Coursera’s Honor Code

This project has not been saved.