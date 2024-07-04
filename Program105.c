//Pattern Printing

// Input - 5
// Output - A   1   B   2   C   3   D   4   E   5

// Input - 3
// Output -  A   1   B   2   C   3

#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;
   char ch = 'A';
   for(iCnt = 1,ch = 'A'; iCnt <= iNo; iCnt++,ch++)
   {
        printf("%c  %d      ",ch,iCnt);
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