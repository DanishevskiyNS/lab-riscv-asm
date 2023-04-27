#include <stdio.h>

#define N 6
#define M 6

int process(int n, int m, int matrix[M][N])
{
    int result = 0;
    int summ = 0;
    int tmp = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            summ += matrix[j][i];
        }
        if (tmp <= summ)
        {
            tmp = summ;
            result = i;
        }
    }
    return result;
}

int main(int argc, char** argv)
{
    int matrix[M][N];
    int result;

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    result = process(N, M, matrix);

    printf("%d", result);

    return 0;
}
