#include<stdio.h>
void main()
{
    // Q.1 Write a Program to find the minimum number from the given 3 numbers using nested if else.

    int a,b,c;

    printf("Enter the Value of A :");
    scanf("%d",&a);

    printf("Enter the Value of B :");
    scanf("%d",&b);

    printf("Enter the Value of C :");
    scanf("%d",&c);

    if(a<b)
    {
        if(a<c)
        {
            printf("Value of A is Minimum : %d\n",a);
        }
        else
        {
            printf("Value of C is Minimum : %d\n",c);
        }
    }
    else
    {
        if(b<c)
        {
            printf("Value of B is Minimum : %d\n",b);
        }
        else
        {
            printf("Value of C is Minimum : %d\n",c);
        }
    } 


    // Q.2 Write a Program to find the maximum number from the given 4 numbers using nested if else.

    int m,n,o,p;

    printf("Enter the Value of M :");
    scanf("%d",&m);

    printf("Enter the Value of N :");
    scanf("%d",&n);

    printf("Enter the Value of O :");
    scanf("%d",&o);

    printf("Enter the Value of P :");
    scanf("%d",&p);

    if(m<n)
    {
        if(m<o)
        {
            if(m<p)
            {
                printf("Value of M is Minimum : %d",m);
            }
            else
            {
                 printf("Value of P is Minimum : %d",p);
            }
        }
        else
        {
             printf("Value of O is Minimum : %d",o);
        }
    }
    else
    {
        if(n<o)
        {
            if(n<p)
            {
                 printf("Value of N is Minimum : %d",n);
            }
            else
            {
                 printf("Value of P is Minimum : %d",p);
            }
        }
        else
        {
             printf("Value of O is Minimum : %d",o);
        }
    }
}