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
#include<stdio.h>
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
 }
