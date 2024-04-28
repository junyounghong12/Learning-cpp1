#include <stdio.h>

void copyarray(double* source, double* target, int size) //첫 번째 인자인 배열 source을 두 번째 인자인 배열 target에 복사하는 함수
{
    for (int i=0; i<size; i++){
        target[i] = source[i];
    }
}

int main() {
    double ary[5] = {3.12, 5.14, 7.25, 7.48, 5.91}; //double형 1차원 배열 초기화
    double target[5];

    copyarray(ary, target, 5); //배열 복사 함수 호출

    printf("복사된 배열\n");
    for (int i=0; i<5; i++){
        printf("%.2lf  ", target[i]); //복사된 배열 출력
    }
    return 0;
}