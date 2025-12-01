
#include <stdio.h>

int main() 
{
    int n,target,flag=1,p=0;
    printf("Enter the number of elements in the array and the target element\n");
    scanf("%d %d",&n,&target);
    if(n<=0)
    {
        while(n<=0)
        {
            printf("Number of enteries cannot be less than or equal to zero . Please enter the no of elements of the array again\n ");
            scanf("%d",&n);
        }
    }
    int nums[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element on the %d index of the array",i);
        scanf("%d",&nums[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(nums[i]==target)
        {
            printf("%d,",i);
            p=i;
            flag=0;
             break;
        }
       
    }
    if(flag==0)
    {
    for(int i=n-1;i>=p;i--)
    {
        if(nums[i]==target)
        {
            printf("%d\n",i);
            break;
        }
    
    }
    }
    else
    
    {
        printf("-1,-1\n");
    }
    

    return 0;
}
