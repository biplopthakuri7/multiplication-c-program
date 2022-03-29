#include<stdio.h>
int main()
{
int num;
printf("Input the number:");
scanf("%d",&num);
if(num>=0)
printf("%d is positive number\n",num);
else
printf("%d is negative number\n",num);
return 0;
}