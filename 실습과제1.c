#include <stdio.h> 
#include<time.h> //time()�Լ� ����� ���� �������
#include<stdlib.h> //srand(),rand() �Լ� ����� ���� �������

int main(void) {
	int computer; //��ǻ���� �� ����
    int user; //������ �� ����
	srand(time(NULL)); //rand�Լ� ����� �Ź� �ٸ��� ��
	computer = rand() % 3 + 1; //1���� 3�� �ϳ��� ����

	printf("���� ���� �� ������ �����ϼ���. \n");
	printf("1.����    2.����    3.�� : ");
	scanf_s("%d", &user); //������ �� �Է�

	if (user == computer) //������ ��ǻ���� ���� �����Ƿ� ���
		printf("�����ϴ�.");
	else if (user == 1 && computer == 3) //������ �¸��� ���
		printf("������ �¸��߽��ϴ�.");
	else if (user == 2 && computer == 1) //������ �¸��� ���
		printf("������ �¸��߽��ϴ�.");
	else if (user == 3 && computer == 2) //������ �¸��� ���
		printf("������ �¸��߽��ϴ�.");
	else //��� ���� ������ �¸��� ��츦 �����ϸ� ��ǻ�Ͱ� �¸�
		printf("��ǻ�Ͱ� �¸��߽��ϴ�.");

	return 0;
}