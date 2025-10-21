#include<stdio.h>
int main(){
    int num1, num2, sum, diff, prod, div;
    printf("enter num1:");
    scanf("%d", &num1);
    printf("enter num2: ");
    scanf("%d", &num2);
    sum=num1+num2;
    diff=num1-num2;
    prod=num1*num2;
    div=num1/num2;
    printf("sum of numbers: %d\n", sum);
    printf("difference of numbers: %d\n", diff);
    printf("product of numbers: %d\n", prod);
    printf("division of numbers: %d\n", div);
    return 0;

}
