//Pattern Printing

// Input - 5
// Output - -5  -4  -3   -2   -1   0   1   2   3   4   5  


#include<stdio.h>

void DisplayRange(int iValue)
{
    int iCnt = 0;
    
    for(iCnt = -iValue ; iCnt <=iValue ; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}


int main()
{
    int iNo = 0 ;

    printf("Enter the number :- ");
    scanf("%d" , &iNo);

    DisplayRange(iNo);



    return 0;
}




// #include<stdio.h>

// void Display(int iNo)
// {
//    int iCnt = 0;

//    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
//    {
//         printf("%d  ",iCnt);
//    }

//    printf("\n");
// }

// int main()
// {
//     int iFrequency = 0;

//     printf("Enter the frequency of Symbol : \n");
//     scanf("%d",&iFrequency);

//     Display(iFrequency);

//     return 0;
// }