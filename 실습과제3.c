#include <stdio.h>
#include <stdlib.h> //srand(),rand() �Լ� ����� ���� �������
#include <time.h> //time()�Լ� ����� ���� �������

int number; //���� ������ ������ ������ ���� number ����
int min =1; // ��Ʈ�� �ֱ� ���� ���� �ܺ� ���� min�� �ʱ�ȭ
int max =100; // ��Ʈ�� �ֱ� ���� ���� �ܺ� ���� max�� �ʱ�ȭ
int trycount =0; //�õ� Ƚ�� ������ ���� trycount�� �ʱ�ȭ

void setNumber() {
    srand(time(NULL));
    number =rand()%(max-min+1)+min; //1���� 100������ ������ �߻��Ͽ� ���� ���� number�� ����
}

void printHead() {
    printf("���ڸ� ���߽ÿ�.\n");
    printf("���ڴ� %d�� %d���̿� �ִ�. \n", min, max); //���ڰ� min�� max���̿� �ִٴ� ��Ʈ�� ���
}

void printHigher() {
    printf("�� ū ���� �Է��ϼ���! (%d�� �õ���)\n", trycount); //�� ū ���ڸ� �Է��ϵ��� ��Ʈ�� ���
}

void printLower() {
    printf("�� ���� ���� �Է��ϼ���! (%d�� �õ���)\n", trycount); //�� ���� ���ڸ� �Է��ϵ��� ��Ʈ�� ���
} 

void printAnswer() {
    printf("%d���� �õ� ���� ���� %d�� ������ϴ�!\n", trycount, number); // ���� �޽��� ���
}

int main() {
    setNumber(); //���� ����
    printHead();

    while (1) //������ ���� ������ �ݺ�
    {
        int guess;
        printf("���ڸ� �����Ͻÿ�: ");
        scanf_s("%d", &guess); //������ �Է�
        trycount++;

        if (guess == number) {
            printAnswer(); //����
            break;
        }
        else if (guess < number) {
            printHigher(); //��Ʈ
        }
        else {
            printLower(); //��Ʈ
        }
    }
    return 0;
}