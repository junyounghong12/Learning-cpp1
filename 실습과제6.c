#include <stdio.h>

void add(double plus[][3], double x[][3], double y[][3]) //두 이차원 배열의 더하기를 수행하는 함수
{
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            plus[i][j] = x[i][j] + y[i][j];
            printf(" %.1lf   ", plus[i][j]);
        }
        printf("\n");
    } //for문 중첩
}

void sub(double minus[][3], double x[][3], double y[][3]) //두 이차원 배열의 빼기를 수행하는 함수
{
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            minus[i][j] = x[i][j] - y[i][j];
            printf(" %.1lf   ", minus[i][j]);
        }
        printf("\n");
    } //for문 중첩
}

int main() {
    double a[2][3]={{4.2, 4.3, 3.8}, {3.7, 1.5, 0.7}}; //주어진 이차원 배열
    double b[2][3]={{5.2, 2.1, 1.8}, {3.2, 1.4, 2.9}}; //주어진 이차원 배열
    double c[2][3]={0}; //연산 결과 저장할 배열 c 초기화

    printf("두 이차원 배열의 더하기 결과 \n");
    add(c, a, b); //두 이차원 배열의 더하기를 수행하는 함수 호출
    printf("\n");

    printf("두 이차원 배열의 빼기 결과 \n");
    sub(c, a, b); //두 이차원 배열의 빼기를 수행하는 함수 호출

    return 0;
}