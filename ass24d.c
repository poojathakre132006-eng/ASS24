#include<stdio.h>
#include<stdlib.h>


typedef int*IPTR;

int Dighit(int Arr[],int iLength)
{
  int iCnt=0;

  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt]>=100 && Arr[iCnt]<=999)
    {
        printf("%d",Arr[iCnt]);
    }
  }
  printf("\n");
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
    
   
   
    iRet=Dighit(iPtr,iLength);
   
 
     printf("Dighit number is :%d\n",iRet);
    
    free(iPtr);
    return 0;
}