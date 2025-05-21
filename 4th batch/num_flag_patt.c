/* WAP to print the given pattern.

1 2 3 4 3 2 1
1 2 3   3 2 1
1 2       2 1
1           1
*/

#include<stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 4; i++)  // 4 rows
    {
        int num = 1; // Starting number
        for(j = 1; j <= 7; j++) // Total positions
        {
            if(j <= 5-i || j >= 3+i)
            {
                printf("%d ", num);
                if(j < 4)
                    num++;
                else
                    num--;
            }
            else
            {
                printf("  "); 
                if(j == 4) 
                num--; 
            }
        }
        printf("\n");
    }
    return 0;
}
