/*#include<stdio.h>
int main()
{
    int a, b;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value of a:%d\n", a);
    printf("value of b:%d\n", b);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n, i, num, sum;
    sum=0;
    printf("enter numbers you want to add:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;

    }
    printf("sum of %d natural no. :%d\n", i, sum);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int rate, principal, time;
    float SI, CI;
    printf("rate: ");
    scanf("%d", %rate);
    printf("principal: ");
    scanf("%d", %principal);
    printf("time period: ");
    scanf("%d", %time);
    SI=principal*time*rate/100;
    printf("simple interest:%f", SI);
    amount=principal;
    for (i=1;i<=time;i++)
    {
        principal=principal(1+r/100);
        CI=amount-principal
    }
    printf("CI:%d", CI);
    return 0;

}
