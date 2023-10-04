#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int sum(int a, int b)
{
    int result = 0;
    result = a + b;
    return result;
}

int dif(int a, int b)
{
    int result = a - b;
    return result;
}

int multy(int a, int b)
{
    int result = a * b;
    return result;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Cannot divide by 0");
        return 0.0;
    }
    else
    {
        float result = a / b;
        return result;
    }
}

int matrix(int **matrix, int row, int cols)
{
    int result = (matrix[0][0] * matrix[1][1] * matrix[2][2]) +
                 (matrix[0][2] * matrix[1][0] * matrix[2][1]) +
                 (matrix[2][0] * matrix[0][1] * matrix[1][2]) -
                 (matrix[2][0] * matrix[1][1] * matrix[0][2]) -
                 (matrix[1][0] * matrix[0][1] * matrix[2][2]) -
                 (matrix[0][0] * matrix[2][1] * matrix[1][2]);
    return result;
}

int main()
{

    int num1;
    int num2;
    int choice;
    int row;
    int colms;
    int result;
    int size;

    printf("1. Sum\n2. Difference\n3. Multiplication\n4. Division\n5. Create a Matrix and solve it\n6. Sorting numbers\n");
    printf("Select an option: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter a number: ");
        scanf("%d", &num1);
        printf("Enter a number: ");
        scanf("%d", &num2);
        result = sum(num1, num2);
        printf("The result is: %d", result);
        break;
    case 2:
        printf("Enter a number: ");
        scanf("%d", &num1);
        printf("Enter a number: ");
        scanf("%d", &num2);
        result = dif(num1, num2);
        printf("The result is: %d", result);
        break;
    case 3:
        printf("Enter a number: ");
        scanf("%d", &num1);
        printf("Enter a number: ");
        scanf("%d", &num2);
        result = multy(num1, num2);
        printf("The result is: %d", result);
        break;
    case 4:
        printf("Enter a number: ");
        scanf("%f", &num1);
        printf("Enter another number: ");
        scanf("%f", &num2);
        float result = divide(num1, num2);
        if (result != 0.0)
        {
            printf("The result is: %0.2f", result);
        }
        break;
    case 5:
        row = 3;
        colms = 3;
        int **ptr = (int **)malloc(row * sizeof(int *));
        for (int i = 0; i < row; i++)
        {
            ptr[i] = (int *)malloc(colms * sizeof(int));
        }
        printf("Create the matrix here:");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < colms; j++)
            {
                printf("Enter the numbers of the matrix: \n");
                scanf("%d", &ptr[i][j]);
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < colms; j++)
            {
                printf("%d ", ptr[i][j]);
            }
            printf("\n");
        }
        result = matrix(ptr, row, colms);
        printf("Result is:%d\n", result);
        // Free the dynamically allocated memory
        for (int i = 0; i < row; i++)
        {
            free(ptr[i]);
        }
        free(ptr);
        break;
    case 6:
        printf("Enter the size of the array: ");
        scanf("%d", &size);
        int *arr = (int *)malloc(size * sizeof(int));
        for (int i = 0; i < size; i++)
        {
            printf("Enter the numbers u wnat to sort:");
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < size; i++)
        {
            int sort = 0;
            for (int j = 0; j < size - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    sort = 1;
                }
            }
            if (sort == 0)
            {
                printf("No sortation needed\n");
                break;
            }
        }
        printf("Sorted array: ");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        free(arr);
        break;

    default:
        printf("Invalid option.");
        break;
    }
}