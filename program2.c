#include<stdio.h>
int DollarToInr(int iNo)
{
if(iNo<=0)
{

    iNo=-iNo;
}
return iNo*70;


}


int main()
{
int iValue=0,iRet=0;
printf("ENTER VALUE OF USD:\n");
scanf("%d",&iValue);
iRet=DollarToInr(iValue);
printf("value of Inr is %d",iRet);
return 0;
}