#include <stdio.h>
 
int main()
 
{
 
int first, last, i, j, num;
scanf("%d %d", &first, &last);
printf("Prime numbers between %d and %d are ", first, last);
for(i=first+1; i<last; ++i)
{
num=0;
for(j=2; j<=i/2; ++j)
{
if(i%j==0)
{
num=1;
break;
}
}
if(num==0)
printf("%d ",i);
}
  return 0;
}
