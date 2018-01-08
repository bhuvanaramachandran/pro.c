#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("the value of n is");
scanf("%d",&n);
if(n>0)
{
printf("the value of n is positive");
}
elseif(n<0)
{
printf("the value of n is  negative");
}
else
{
printf("the value of n is zero");
}
getch();
}
