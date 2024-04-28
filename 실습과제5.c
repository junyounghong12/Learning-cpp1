#include <stdio.h>

void swap(int *x, int *y) //함수 swap() 구현
{
    int temp= *x; //temp에 x 저장
    *x= *y; //x에 y 저장
    *y= temp; //y에 temp(원래 x) 저장
}

int main() {
    int a = 3;
    int b = 7;
    printf("a=%d, b=%d \n", a, b);

    swap(&a, &b); //함수를 호출, a와 b의 값을 서로 바꾼다

    printf("swap() 함수 호출 결과: a=%d, b=%d \n", a, b);
    return 0;
}