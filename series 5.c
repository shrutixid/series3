#include<stdio.h>
void main()
{
printf("The following program is to print the odd numbers series till n\n\n\n");
int n,eve;
printf("Enter a number to print a series till than:-");
scanf("%d",&n);
printf("\nThe odd number series is :-\n");
for(int i=1;i<=n;i++)
{
 if(i%2!=0)
 {
   printf("%d ",i);
 }
}
}
