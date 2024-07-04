//Pattern Printing

// Input - 7
// Output - # # # # # # #

// Input - 3
// Output - # # # 

#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;
   for ( iCnt = 1; iCnt <= iNo; iCnt++)
   {
        printf("# \t");
   }
}

int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of Symbol : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}