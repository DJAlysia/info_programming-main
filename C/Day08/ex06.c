#include <stdio.h>

int main(void) {
    
    int M, N;           // (MxN) 2Â÷¿ø ¹è¿­
    printf("M : ");
    scanf("%d", &M);
    
    printf("N : ");
    scanf("%d", &N);

    int arr[M][N];

    // ÀÔ·Â 
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Ãâ·Â 
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}