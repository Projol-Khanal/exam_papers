#include<stdio.h>
int main()
{
    int i, j;
    char k;
    for(i = 1; i <= 4; i++)  // 4 rows for this pattern
    {
        k='A';
        
        for(j = 1; j <= 7; j++)  // 7 positions since first row has 7 stars
        {
            if(j >= 5-i && j <= 3+i)  // Condition for star placement
            {
                printf("%c",k);
                
                j<4?k++:k--;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}