#include<stdio.h>
int main()
{
int i=0;
while(i++)
{
printf("loop");
if(i==3)
break;
};
return 0;
}
//the condition is while(i++),the exp is post incremented variable.so when it is applied for the first time the conditin will be false because while(0)
