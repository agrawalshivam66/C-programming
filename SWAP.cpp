#include<stdio.h>

int main()
{
int A,B,C;
printf("enter the value of A ");
scanf("%d", &A);
printf("enter the value of B ");
scanf("%d", &B);
printf("\nthe value of A you entered is %d ", A);
printf("\nthe value of B you entered is %d ", B);
C=A;
A=B;
B=C;
printf("\nthe value of A is %d ", A);
printf("\nthe value of B is %d ", B);
}
