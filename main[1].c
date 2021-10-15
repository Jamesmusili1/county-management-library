#include <stdio.h>
#include <stdlib.h>
/*
--> Project: COUNTY LIBRARY MANAGEMENT SYSTEM
--> Author: James MUSILI
--> Date: 11th October 2021
--> Compiler: GNU GCC
--> Language: C 99
--> License: MTT
*/

int main()
{
    int a,b;
    int sum;
    int difference;
    int product;
    float quotient;
    int modulus;
    printf("Enter number a: \n");
    scanf("%d",&a);
    printf("Enter number b: \n");
    scanf("%d",&b);
    sum = a+b;
    difference = a-b;
    product = a*b;
    quotient = a/b;
    modulus = a%b;
    printf("sum of a and b is: %d\n", sum);
    printf("difference of a and b is: %d\n", difference);
    printf("Product of a and b is:%d\n", product);
    printf("Quotient of a and b is:%d\n", quotient);
    printf("Modulus of a and b is:%d\n", modulus);
    return 0;
}
