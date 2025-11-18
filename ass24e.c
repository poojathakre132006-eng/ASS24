#include<stdio.h>
#include<stdlib.h> 

int SumOfDigits(int iNo)
{
    int iSum = 0;
    int iDigit = 0;
    int temp = iNo; 

    
    if (temp < 0) {
        temp = -temp;
    }
    
    while(temp > 0)
    {
        iDigit = temp % 10;   
        iSum = iSum + iDigit; 
        temp = temp / 10;     
    }
    return iSum;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

 
    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1; 
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    printf("\nSummation of digits for each number:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       
        iRet = SumOfDigits(p[iCnt]);
        printf("Sum of digits for %d is %d\n", p[iCnt], iRet);
    }


    free(p);
    return 0;

}