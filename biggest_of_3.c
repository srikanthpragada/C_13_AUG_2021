// Program to take 3 numbers and display the biggest

#include<stdio.h>

void main()
{
 int n1,n2,n3;

    printf("Enter three numbers :");
    scanf("%d%d%d",&n1,&n2,&n3);

    if(n1 > n2 && n1 > n3)
         printf("%d",n1);
    else
        if(n2 > n3)
           printf("%d", n2);
        else
           printf("%d", n3);
}
