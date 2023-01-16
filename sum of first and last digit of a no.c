// WAP to add first and last digit of a number
#include <stdio.h>
#include <math.h>
int main()
{
    int i,num,first,lst,len,sum,k;
    printf("enter the number");
    scanf("%d",&num);
    k=num;
    len=log10(num); //this function gives length-1
    if(len<1)
    printf("sum of first and last digit of %d=%d",k,k);
    else
   {
       lst=num%10;
    for(i=1;i<=len;i++)
    {
        num=num/10;
    }
    first=num;
    printf("sum of first and last digit of %d=%d",k,first+lst);
    }
    return 0;
}