#include<stdio.h>
#include<conio.h>
void main()
{
int i;
printf("enter the no");
scanf("%d",&i);
if(i<0)
{
printf("negative no");
}
else if(i>0)
{
printf("positive no");
}
else
{
printf("it is zero");
}
getch();
}
