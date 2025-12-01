#include<stdio.h>
 int main(){
     int radius, cir, area;
     printf ("enter the radius: ");
     scanf("%d", &radius);
     cir=2*3.14*radius;
     area=3.14*radius*radius;
     printf("circumference:%d\n", cir);
     printf("area:%d", area);
     return 0;

 }
