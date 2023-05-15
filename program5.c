#include<stdio.h>
int FactorialDiff(int iValue)
{ 


if(iValue<=0)
{

iValue=-iValue;


}
int  i=0,iNo6=1;

for(i=1;i<=iValue;i++)
  
{
if(i%2==0)
{

iNo6=iNo6*i;
}
}

int iNo7=1;
for(i=1;i<=iValue;i++)
  
{
if(i%2!=0)
{

iNo7=iNo7*i;
}
}
return iNo6-iNo7;


}

int main()
{

int iRet=0,iAns=0;
printf("enter the values for factorial:\n");
scanf("%d",&iAns);
iRet=FactorialDiff(iAns);
printf(" Factorial difference of a number is %d ",iRet);




    return 0;
}