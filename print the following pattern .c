/*write a c programe to print the following pattern 3 3 3 3 3 
                                                    3 2 2 2 3
                                                    3 2 1 2 3
                                                    3 2 2 2 3 */


#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, n, num;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = -n + 1; i <= n - 1; i++)  // Correct loop condition
    {
        for(j = -n + 1; j <= n - 1; j++)  // Remove semicolon
        {
            num = abs(i) > abs(j) ? abs(i) : abs(j);
            printf("%d", num + 1);
        }
        printf("\n");
    }

}
