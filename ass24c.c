#include<stdio.h>
#include<stdlib.h>


typedef int*IPTR;

int Difference(int Arr[],int iLength)
{
  int iCnt=0, iMin=0,iMax=0;

  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt]>iMax)
    {
        iMax=Arr[iCnt];
    }
     if(Arr[iCnt]<iMin)
    {
        iMin=Arr[iCnt];
    }
  }
  return iMax-iMin;
}



int main()
{
    int iLength=0,iCnt=0,iRet=0;
    
    IPTR iPtr=NULL;

    printf("enter the numbere of elements:");
    scanf("%d",&iLength);
    
   
    iPtr=(IPTR)malloc(iLength*sizeof(int));

    if(NULL==iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("enter the values:\n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }
    
   
   
    iRet=Difference(iPtr,iLength);
   
 
     printf("Difference number is :%d\n",iRet);
    
    free(iPtr);
    return 0;
}