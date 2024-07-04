//Pattern Printing

// Input - 5
// Output - A    B   C   D   E

// Input - 3
// Output - A    B   C   

#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;
   char ch = 'A';
   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
        printf("%c\t",ch);
        ch++;
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