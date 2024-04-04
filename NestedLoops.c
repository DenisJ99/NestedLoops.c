#include <stdio.h>

int main(){

    int rows;
    int columns;
    char symbol;

    printf("\nEnter # of rows: ");
    scanf("%d", &rows);

    printf("\nEnter # of columns: ");
    scanf("%d", &columns);

    scanf("%c");

    printf("\nEnter a symbol to use: ");
    scanf("%c", &symbol);

    for(int i =1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}

// Nested Loop = A loop inside of another loop