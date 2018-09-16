#include <stdio.h>
void main()
{
int q,w,e;
printf("enter integer 1, 2 & 3\n");
scanf("%d\n%d\n%d",&q,&w,&e);
printf("entered integers are\n %d\n%d\n%d",q,w,e);
if(q==w || q==e || w==e)
{

printf("0");
}
if(w!=e || q!=w || e!=q)
{
printf("1");
}





}
