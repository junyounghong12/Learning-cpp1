#include <stdio.h>

int main(){
    int i= 0x324F3A24; //int�� ���� i�� 0x324F3A24�� ����
    char* pc= (char*)&i; //char* ���� pc�� int�� ���� i�� �ּҷ� ����

    printf("%X%X%X%X \n", pc[3], pc[2], pc[1], pc[0]); //16������ ���
    return 0;
}