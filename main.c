#include<stdio.h>
int main(){
    int length, breadth, perimeter, area;
    printf("enter the length: ");
    scanf("%d", &length);
    printf("enter the breadth: ");
    scanf("%d", &breadth);
    perimeter= 2*(length+breadth);
    area=length*breadth;
    printf("perimeter: %d\n", perimeter);
    printf("area:%d", area);
    return 0;


}
