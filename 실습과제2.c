#include<stdio.h>

int Return(void) //�Լ� �ڽ��� ȣ��� Ƚ���� ��ȯ�ϴ� �Լ�
{
	static int call=0; //�������� ����Ͽ� ȣ�� Ƚ�� ���
	return ++call; //ȣ�� Ƚ�� ������Ű�� ��ȯ
}

int main(void){
	int count;
	for (int i = 0; i < 5; i++) //for�� �ݺ�
	{ 
		printf("%d�� ȣ�� \n", i + 1); //���° ȣ������ �˷���
		Return(); //�Լ� ȣ��
	}
	count =Return(); //�Լ� ȣ���ϰ� ��ȯ�� ȣ�� Ƚ���� ����
	printf("�� �� �� ȣ�� \n");
	printf("�� ȣ�� Ƚ��: %d \n", count);

	return 0;
}