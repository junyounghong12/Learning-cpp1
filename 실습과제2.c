#include<stdio.h>

int Return(void) //함수 자신이 호출된 횟수를 반환하는 함수
{
	static int call=0; //정적변수 사용하여 호출 횟수 기억
	return ++call; //호출 횟수 증가시키고 반환
}

int main(void){
	int count;
	for (int i = 0; i < 5; i++) //for문 반복
	{ 
		printf("%d번 호출 \n", i + 1); //몇번째 호출인지 알려줌
		Return(); //함수 호출
	}
	count =Return(); //함수 호출하고 반환된 호출 횟수를 저장
	printf("한 번 더 호출 \n");
	printf("총 호출 횟수: %d \n", count);

	return 0;
}