#include<stdio.h>
int main()
{
int percentage;
printf("enter the percentage");
scanf("%d",&percentage);
if(percentage>81 && percentage<=100)
{
printf("grade A");
}
else if(percentage>61 && percentage<=80){
printf("grade B ");
}
else if(percentage>=41 && percentage<=60)
{
printf("grade C");
}
else
{
printf("fail");
}
return 0;
}
