#include <stdio.h>

int main() {
	int ary[][5] = {1,2,3,4,5,6,7,8,9,10}; //주어진 이차원 배열
	int (*ptr)[5]=ary; //배열 포인터 정의

    for (int i=0; i<2; i++){
        for (int j=0; j<5; j++){
            ptr[i][j] +=5; //원소의 값 5씩 증가
        }
    } //for문 중첩 
     
    for (int i=0; i<2; i++){
        for (int j=0; j<5; j++){
            printf("%d ", ary[i][j]); //5씩 증가한 이차원 배열 출력
        }
        printf("\n");
    } //for문 중첩 

	return 0;
}