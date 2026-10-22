#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL CheckEven(int iNo)
{
    if(iNo%2==0)
    {
        printf("number is even.");
    }
    else{
        printf("number is odd.");
    }
    return 0;
}
int main()
{
    int iValue=0;
     BOOL bRet=FALSE;

    printf("enter number");
    scanf("%d",&iValue);
    
    bRet=CheckEven(iValue);
    return 0;
}