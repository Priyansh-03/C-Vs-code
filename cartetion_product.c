//WAP in c to find cartetion product of two sets
#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("Enter no. of Elements in set 1: ");
    scanf("%d",&n);

    printf("Enter no. of Charecter Elements in set 2: ");
    scanf("%d",&m);
    
    int set1[n],set2[m];

    printf("\nEnter numbers in set 1: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&set1[i]);
    }

    printf("\nEnter charecter in set 2: ");
    for(i=0;i<m;i++)
    {
        scanf("%s",&set2[i]);
    }

    printf("{\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("(%d,%c) ",set1[i],set2[j]);
        }
        printf("\n");
    }
    printf("\b}");
}