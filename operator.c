#include<stdio.h>
#include<conio.h>
void main()
{
int s1,s2;
scanf("%d",&s1);
scanf("%d",&s2);
printf("%d %d",s1,s2);
s1=s1^s2;
s2=s1^s2;
s1=s1^s2;
printf("%d %d",s1,s2);
getch();
}
