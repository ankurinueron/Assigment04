#include<stdio.h>   //print first 10 odd natural numbers in reverse order
int main()
{
int x;
for(x=20;x>=1;x--)
{
    if(x%2!=0)
    {
    printf("%d\n",x);
    }
}
return 0;
}
