#include <stdio.h>

void swap(int *x, int *y) //�Լ� swap() ����
{
    int temp= *x; //temp�� x ����
    *x= *y; //x�� y ����
    *y= temp; //y�� temp(���� x) ����
}

int main() {
    int a = 3;
    int b = 7;
    printf("a=%d, b=%d \n", a, b);

    swap(&a, &b); //�Լ��� ȣ��, a�� b�� ���� ���� �ٲ۴�

    printf("swap() �Լ� ȣ�� ���: a=%d, b=%d \n", a, b);
    return 0;
}