//write a c programme to print the reverse of the given array//
#include <stdio.h>

int main() 
{
    int num, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);

    int arr[num];

    printf("Enter %d elements:\n", num);
    for(i = 0; i < num; i++) 
	{
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order:\n");
    for(i = num - 1; i >= 0; i--) 
	{
        printf("%d ", arr[i]);
    }

    return 0;
}

