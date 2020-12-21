#include<stdio.h>
#include<conio.h>
int main()
{
    float num1, num2;
    char ch;
    printf("Enter any two Number: ");
    scanf("%f%f", &num1, &num2);
    printf("Enter the Operator (+, -, *, /): \n ");
    scanf(" %c", &ch);
    if(ch=='+') 
        printf("Result = %0.2f", num1+num2);
    else if(ch=='-')
        printf("Result = %0.2f", num1-num2);
    else if(ch=='*')
        printf("Result = %0.2f", num1*num2);
    else if(ch=='/')
        printf("Result = %0.2f", num1/num2);
    else
        printf("Wrong Operator");
    getch();
    return (0);
}
