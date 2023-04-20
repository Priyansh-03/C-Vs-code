#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,power_sets,j;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array: ");
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    power_sets=pow(2,n);
    printf("\n\nNumber of power sets: %d \n",power_sets);
    for(i=0;i<power_sets;i++)
    {
        printf(" { ");
        for(j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                printf("%d ",arr[j]);
            }
        }
        printf(" } ");
    }
}