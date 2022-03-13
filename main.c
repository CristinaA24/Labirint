#include <stdio.h>

int main()
{
    long A[101][101], sol = 0;
    int n;

    printf("Numarul de linii este: ");
    scanf("%d", &n);

    A[1][1] = 1;
    for(int i = 2; i <= n; i++)
        for(int j = 1; j <= n; j++)
            if(j == 1)
                A[i][j] = A[i-1][j] + A[i-1][j+1];
            else if(j == i - 1)
                A[i][j] = A[i-1][j-1] + A[i-1][j];
            else if(j == i)
                A[i][j] = A[i-1][j-1];
            else A[i][j] = A[i-1][j-1] + A[i-1][j] + A[i-1][j+1];
    for(int i = 1; i <= n; i++)
        sol = sol + A[n][i];

    printf("Numarul de trasee este: %ld", sol);
    return 0;
}

