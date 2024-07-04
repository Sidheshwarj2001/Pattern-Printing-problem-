// Pattern Printing

//      Input - Row : 3  ,   Col : 5
//      Output -
//                  a   b    c   d    e
//                  a   b    c   d    e
//                  a   b    c   d    e
#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1 , ch = 'a'; j <= iCol; j++ , ch++)
        {
            printf("%c\t",ch);
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