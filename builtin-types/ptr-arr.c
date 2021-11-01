#include <stdio.h>
#include <stdlib.h>

void pascal_triang(int n);
void print_pascal_triang(int n, int** triang);
void free_pascal_triang(int n, int** triang);

int main()
{
    int n;
    int **ptriang;

    printf("This program will print the Pascal triangle.\nEnter number of rows: ");
    scanf("%d", &n);
    pascal_triang( n );
    
    return 0;
}

void pascal_triang(int n)
{
    int i, j;
    int **pnum;

    // dynamic memory allocation
    pnum = (int **) malloc( n * sizeof(int *) );
    for (i = 0; i < n; i++) {
        pnum[i] = (int *) malloc( i * sizeof(int) );
    }

    pnum[0][0] = 1; // initialize

    // compute the triang
    for (i = 1; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                pnum[i][j] = pnum[0][0];
            else
                pnum[i][j] = pnum[i-1][j-1] + pnum[i-1][j];
        }
    }

    print_pascal_triang (n, pnum );
    free_pascal_triang( n, pnum );  // free memory
}

void print_pascal_triang(int n, int** triang)
{
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf(" %d", triang[i][j]);
        }
        printf("\n");
    }
}

void free_pascal_triang(int n, int** triang)
{
    int i, j;

    for (i = 0; i < n; i++) {
        free(triang[i]);
    }
    free(triang);
}