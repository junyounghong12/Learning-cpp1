#include <stdio.h>

void increase(int arr[], int size, int n) //배열에서 모든 원소의 값을 n씩 증가시키는 함수
{
    for (int i=0; i<size; i++){
        arr[i] += n;
    }
}

int main() {
    int data[] ={3, 21, 35, 57, 24, 82, 8}; //주어진 배열
    int n =5; //증가시킬 값을 5로 함
    int size=sizeof(data)/sizeof(data[0]); //sizeof 연산자 사용, size에 7 저장

    increase(data, size, n); //함수 호출, 배열에서 모든 원소의 값 n씩 증가

    printf("n씩 증가된 배열: ");
    for (int i=0; i<size; i++){
        printf("%d ", data[i]); //n씩 증가된 배열 출력
    }
    return 0;
}