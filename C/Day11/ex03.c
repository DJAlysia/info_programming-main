#include <stdio.h>

/*
    배열 포인터
    : 배열을 가리키는 포인터 변수
    - 배열의 주소값을 저장한 포인터 변수

    포인터 배열 선언 : int *arr[3];
    배열 포인터 선언 : int (*arr)[3];
*/

int main(void) {

    // 2행 3열의 2차원 배열
    int arr[2][3] =  {
                        {1, 2, 3},
                        {4, 5, 6}
                     };
    int i, j;
    // 열이 3개인 2차원 배열 포인터
    int (*arrptr)[3] = arr;

    for (int i = 0; i < 2; i++) {   
        for (int j = 0; j < 3; j++) {
            printf("%d ", arrptr[i][j]);
        }
        printf("\n");
    }
    return 0;
}