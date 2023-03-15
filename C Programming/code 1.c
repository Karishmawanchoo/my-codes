//Title of program
//Write a program using addition operator
//Header
#include<stdio.h>
// Function Heading
int main()    {
           //variable Declaration
           int var1, var2;
           float sum;
           //Output Statement (prompt)
           printf("Enter two numbers to be added");
           //Input Statement
           scanf ("%d%d", &var1, &var2);
           //Assignment Statement
           sum= var1+var2;
           //Output Statement
           printf("%d+%d=%f", var1, var2, sum);
        return 0;
}
