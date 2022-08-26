#include<stdio.h>   //print first 10 odd natural numbers
int main()
{
int x;
for(x=1;x<=20;x++)
{
    if(x%2!=0)
    {
    printf("%d\n",x);
    }
}
return 0;
}
