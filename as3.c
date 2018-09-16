#include <stdio.h>
void main()
{
int a,b,c;
printf("enter three integers ");
scanf("%d\n%d\n%d",&a,&b,&c);

if(a+b>c && a+c>b && b+c>a)
{

printf("1");

}
else
{
printf("0");
}

}
