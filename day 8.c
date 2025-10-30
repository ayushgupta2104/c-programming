/*#include<stdio.h>
int main()
{
    char ch;
    printf("enter the charcter:");
    scanf("%c", &ch);
    if(ch=='a' && ch=='z')
    {
        printf("%c is a lower case charcter.", ch);
    }
    else if(ch=='A' && ch=='Z')
    {
        printf("%c is a upper case character.", ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("%c is a digit", ch);
    }
    else
        printf("%c is a special character.", ch);
    return 0;

}*/
/*#include<stdio.h>
int main()
{
 int a, b, c;
 printf("enter a number:");
 scanf("%d", &a);
 printf("enter a number:");
 scanf("%d", &b);
 printf("enter a number:");
 scanf("%d", &c);
 if (a>b && a>c){
    printf("a is greatest");
 }
    else if (b>a && b>c)
     {
         printf("b is greatest");
     }
     else
    printf("c is greatest");
  return 0;
 }*/
 /* #include<stdio.h>
 int main()
 {
     int marks;
     printf("enter marks obtained: ");
     scanf("%d", &marks);
     if(marks>=90 && marks<=100)
     {
         printf("grade A");
     }
     else if(marks<90 && marks>=80)
     {
         printf("grade B");
     }
     else if(marks<80 && marks>=70)
     {
         printf("grade C");
     }
     else if (marks<70 && marks>=60)
        {
            printf("grade D");
        }
        else if(marks<60)
        {
            printf("grade F");
        }
        return 0;}*/


 /*#include<stdio.h>
 int main()
 {
     int a, b,c ;
     printf ("enter the length of side of triangle:");
     scanf("%d %d %d", &a, &b, &c);
     if (a==b && a==c)
     {
         printf("its an eqilateral triangle");
     }
     else if (a==b || b==c)
     {
         printf("its an isoscleles triangle");
     }
     else
     {
         printf("its a scelene triangle");
     }
     return 0;
 }*/
 /*#include<stdio.h>
 int main()
 {
     int day;
     printf ("enter a number(1-7):");
     scanf("%d", &day);
     switch(day)
     {
     case 1:
        printf("monday");
        break;

     case 2:
        printf("tuesday");
        break;
     case 3:
        printf("wednesday");
        break;
     case 4:
        printf("thursday");
        break;
     case 5:
        printf("friday");
        break;
     case 6:
        printf("saturday");
        break;
     case 7:
        printf("sunday");
        break;}
        return 0;
 }*/
 /*#include<stdio.h>
 int main()
{
    int month;
     printf ("enter a number(1-12):");
     scanf("%d", &month);
     switch(month)
     {
     case 1:
        printf("january-31days");
        break;

     case 2:
        printf("february-28days");
        break;
     case 3:
        printf("march-31days");
        break;
     case 4:
        printf("april-30days");
        break;
     case 5:
        printf("may-31days");
        break;
     case 6:
        printf("june-30days");
        break;
     case 7:
        printf("july-31days");
        break;
     case 8:
        printf("august-31days");
        break;
     case 9:
        printf("september-30days");
        break;
     case 10:
        printf("october-31days");
        break;
     case 11:
        printf("november-30days");
        break;
     case 12:
        printf("december-31days");
        break;}
        return 0;
 }*/
/*#include<stdio.h>
int main()
{
    int cp, sp, profit, loss;
    printf("enter the prices with spacing: ");
    scanf("%d %d", &cp, &sp);
    if (sp>cp)
        {
            profit=sp-cp;
            printf("profit:%d\n", profit);
            printf("profit percentage:%d%%",(profit*100)/cp);

        }
    else if(cp>sp)
            {
                loss=cp-sp;
                printf("loss:%d\n", loss);
                printf("loss percentage:%d%%",(loss*100)/cp);

            }
    else if(cp==sp)
    {
        printf("no profit no loss");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int days;
    int fine=0;
    printf("enter the number of days late:");
    scanf("%d", &days);
    if(days<=5)
    {
        fine=days*2;
        printf("fine=$%d", fine);
    }
    else if(days<=10)
    {
        fine=(5*2)+(days-5)*4;
        printf("fine=$%d", fine);
    }
    else if(days<=30)
    {
        fine=(5*2)+(5*4)+(days-10)*6;
        printf("fine=$%d", fine);
    }
    else
        printf("membership cancelled");
    return 0;
}*/
/*#include<stdio.h>
int main()
    {
        int units;
        int unit=0;
        printf("total units consumed: ");
        scanf("%d", &units);
        if(units<=100)
        {
            unit=units*5;
            printf("bill:%d", unit);
        }
        else if(units<=200)
        {
            unit=(100*5)+(units-100)*7;
            printf("bill:%d",unit);
        }
        else if (units<=300)
        {
            unit=(100*5)+(100*7)+(units-200)*10;
            printf("bill:%d",unit);
        }
        else if(units>300)
        {
            unit=(100*5)+(100*7)+(100*10)+(units-300)*12;
            printf("bill:%d", unit);
        }
    }*/

/*#include<stdio.h>
int main()
{
      int a, b;
      char op;
    printf("enter the numbers with spacing along with operator:");
    scanf("%d %c %d", &a, &op, &b);
    switch(op)
    {
    case '+':
        printf("sum:%d", a+b );
        break;
    case '-':
        printf("diff:%d", a-b);
        break;
    case '*':
        printf("product:%d",a*b);
        break;
    case '/':
        if(b!=0)
        {
            printf("divion:%d", a/b);
        }
        else
            printf("error!");
            break;
    case '%':
        if (b==0)
        {
            printf("error!");
        }
        else
            printf("remaainder:%d",a%b);
            break;
    }
        return 0;
}*/
/*#include<stdio.h>
int main()
{
   int n, i;
   printf("enter the number:");
   scanf("%d", &n);
   for (i=1;i<=n;i++)
   {
        printf("%d\n", i);

   }
   return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,i, sum=0;
    printf("enter sum of numbers you want:");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
        sum+=(2*i -1);
    }
     printf("%d", sum);
    return 0;

}*/
/*#include<stdio.h>
int main()
{
    int n, i, prod=1;
    printf("enter value of n:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        prod*=(2*i);
    }
    printf("product of %d even numbers:%d",n, prod);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n, i, fact=1;
    printf("enter value of factorial:");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
        fact*=i;

    }
    printf("factorial of %d :%d",n, fact);

    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n, rem, rev=0;
    printf("enter a number:");
    scanf("%d", &n);
    while(n!=0)
    {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    }
    printf("%d", rev);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n, rem, rev=0, num;
    printf("enter a number: ");
    scanf("%d", &n );
    num=n;
    while (n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if (rev == num)
        printf("its a palindrome number");
    else
        printf("its not a palindrome number");
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n, num, rem, sum=0;
    printf("enter number:");
    scanf("%d", &n);
    num=n;
    while (n!=0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if (num==sum)
        printf("its an armstrong number");
    else
        printf("its not an armstrong number");
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n, i, count=0;
    printf("enter the number:");
    scanf("%d", &n);
    if (n<=1)
    {
         printf("NOT a prime number");
         return 0;
    }
    for (i=2;i<n;i++)
    {
        if(n%i==0)
        {
            (count=1);
             break;

        }
    }
            if (count=0)
                printf("its a prime number");

            else
                printf("its not a prime number");
return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)

        if (n%i==0)

        printf(" %d", i);
    return 0;
}*/

