#include <stdio.h>

int main(){
    int i= 0x324F3A24; //int형 변수 i에 0x324F3A24을 정의
    char* pc= (char*)&i; //char* 변수 pc를 int형 변수 i의 주소로 설정

    printf("%X%X%X%X \n", pc[3], pc[2], pc[1], pc[0]); //16진수로 출력
    return 0;
}