//Pattern Printing

// Input - 5
// Output - 1   2   3   4   5   5   4   3   2   1

#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;
   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
        printf("%d  ",iCnt);
   }

   for(iCnt=iNo ; iCnt >= 1 ; iCnt--)
   {
        printf("%d  ",iCnt);
   }
   printf("\n");
}

int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of Symbol : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}