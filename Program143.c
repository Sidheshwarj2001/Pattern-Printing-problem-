// Pattern Printing

//      Input -        Row : 5  , Col : 5
//      Output -
//                     *   *   *   *
//                     *   *   *
//                     *   *
//                     * 

#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if (iRow != iCol)
    {
        printf("Invalid input\n");
        return;
    }

    for(i = iRow ; i>=1 ; i--)
    {
        for(j= 1 ; j<=i ; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }

    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d", &iValue1);

    printf("Enter Number of columns : \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}


// for (i = iRow; i >= 1; i--)
//     {
//         for (j = 1 ; j <= i ; j++)
//         {
//             printf("*\t");
//         }
//         printf("\n\n");
//     }