#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in the array :");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("number of elements in the array cannot be non positive ");
        return 1;
    }
    int nums[n];
    
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d entry of the array :",i+1);
        scanf("%d",&nums[i]);
    }
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(nums[j]==nums[i])
            {
                count++;
            }
            if(count>n/2)
            {
                printf("%d",nums[i]);
                return 0;
            }
        }
    }
        printf("-1");
    return 0;
}
