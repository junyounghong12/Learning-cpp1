#include <stdio.h>
#include <stdlib.h> //srand(),rand() 함수 사용을 위한 헤더파일
#include <time.h> //time()함수 사용을 위한 헤더파일

int number; //전역 변수로 난수를 저장할 변수 number 선언
int min =1; // 힌트를 주기 위한 정적 외부 변수 min을 초기화
int max =100; // 힌트를 주기 위한 정적 외부 변수 max를 초기화
int trycount =0; //시도 횟수 저장할 변수 trycount를 초기화

void setNumber() {
    srand(time(NULL));
    number =rand()%(max-min+1)+min; //1에서 100까지의 난수를 발생하여 전역 변수 number에 저장
}

void printHead() {
    printf("숫자를 맞추시오.\n");
    printf("숫자는 %d와 %d사이에 있다. \n", min, max); //숫자가 min과 max사이에 있다는 힌트를 출력
}

void printHigher() {
    printf("더 큰 수를 입력하세요! (%d번 시도함)\n", trycount); //더 큰 숫자를 입력하도록 힌트를 출력
}

void printLower() {
    printf("더 작은 수를 입력하세요! (%d번 시도함)\n", trycount); //더 작은 숫자를 입력하도록 힌트를 출력
} 

void printAnswer() {
    printf("%d번의 시도 끝에 숫자 %d를 맞췄습니다!\n", trycount, number); // 정답 메시지 출력
}

int main() {
    setNumber(); //난수 설정
    printHead();

    while (1) //정답을 맞출 때까지 반복
    {
        int guess;
        printf("숫자를 추측하시오: ");
        scanf_s("%d", &guess); //추측값 입력
        trycount++;

        if (guess == number) {
            printAnswer(); //정답
            break;
        }
        else if (guess < number) {
            printHigher(); //힌트
        }
        else {
            printLower(); //힌트
        }
    }
    return 0;
}