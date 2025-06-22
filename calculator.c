#include<stdio.h>
int main()
{
    int n,a=0,b=0,pow,i;
    int fact=1;
    printf("What Operation you wanna perform:\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo Division\n6.Power\n7.Factorial\n.8.Largest Element\n");
    scanf("%d",&n);
    if(n==7)
    {
        printf("Enter a Number:\n");
        scanf("%d",&a);

    }
    else 
    {
    printf("Enter any two Elements you wanna perform Opearations on:\n");
    scanf("%d %d",&a, &b);
    }

    switch(n)
    {
        case 1:
                printf("Addtion\n");
                break;
        case 2:
                //performing subtraction operation
                printf("Subtraction of %d and %d is %d\n",a,b,a-b); 
                break;
        case 3:
                //performing Multiplication Operation
                printf("Multiplicatin of %d and %d is \n",a,b);
                break;
        case 4:
                //performing Division Operation
                printf("Division of %d and %d is %d\n",a,b,a/b);
                break;
         case 5:
                //performing Modulo Division
                printf("Modulo Division of %d and %d is \n",a,b);
                break;
         case 6:
                //performing Power
                printf("Power of %d and %d is \n",a,b);
                break;
         case 7:
                //performing Factorial 
                   for(i=1;i<=a;i++)
    {
        fact*=i;
    }
                printf("Factorial of %d is %d\n",a,fact); 
                break;
         case 8:
                //performing Largest Element
                printf("Largest Element amoung the %d and %d is \n",a,b);
                break;                                                        
    }
    return 0;
} 
