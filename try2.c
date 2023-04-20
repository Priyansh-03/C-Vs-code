#include<stdio.h>

print_array(int *arr,int n,int i)
{
    printf("%d ",arr[i]);
}
int main()
{
    int a,b,n;
    int i=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        print_array(arr,n,i);
    }
}