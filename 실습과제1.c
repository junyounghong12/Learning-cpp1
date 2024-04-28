#include <stdio.h> 
#include<time.h> //time()함수 사용을 위한 헤더파일
#include<stdlib.h> //srand(),rand() 함수 사용을 위한 헤더파일

int main(void) {
	int computer; //컴퓨터의 값 저장
    int user; //유저의 값 저장
	srand(time(NULL)); //rand함수 결과를 매번 다르게 함
	computer = rand() % 3 + 1; //1에서 3중 하나를 저장

	printf("가위 바위 보 게임을 시작하세요. \n");
	printf("1.가위    2.바위    3.보 : ");
	scanf_s("%d", &user); //유저의 값 입력

	if (user == computer) //유저와 컴퓨터의 값이 같으므로 비김
		printf("비겼습니다.");
	else if (user == 1 && computer == 3) //유저가 승리한 경우
		printf("유저가 승리했습니다.");
	else if (user == 2 && computer == 1) //유저가 승리한 경우
		printf("유저가 승리했습니다.");
	else if (user == 3 && computer == 2) //유저가 승리한 경우
		printf("유저가 승리했습니다.");
	else //비긴 경우와 유저가 승리한 경우를 제외하면 컴퓨터가 승리
		printf("컴퓨터가 승리했습니다.");

	return 0;
}