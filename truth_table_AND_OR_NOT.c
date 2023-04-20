// Wap in c to display the boolean truth table for AND, OR, NOT
#include<stdio.h>

int OR(int a, int b)
{
    return (a|b);
}

int AND(int a, int b)
{
    return (a&b);
}

int NOT(int a)
{
    if(a==1)
    {
    	return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
    int choice,i,a,b;
    
    while(1)
    {
    	printf("\n************\n\n1. OR\n");
	    printf("2. AND\n");
	    printf("3. NOT\n");
	    printf("4 exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("\nGive two input 1 for true and 0 for false\n");
                scanf("%d%d",&a,&b);
                printf("%d OR %d = %d",a,b,OR(a,b));
                break;
            }
            
                case 2:
                {
                    printf("Give two input 1 for true and 0 for false\n");
                    scanf("%d%d",&a,&b);
                    printf("%d AND %d = %d",a,b,AND(a,b));
                    break;
                } 
                case 3:
                {
                    printf("Give an input 1 for true and 0 for false\n");
                    scanf("%d",&a);
                    printf("NOT of %d = %d",a,NOT(a));
                    break;
                }
                case 4:
                {
                    return(0);    
                }
                default: 
                {
                    printf("Wrong choice\n");
                }
            }
        }
}