#include <stdio.h>

void copyarray(double* source, double* target, int size) //ù ��° ������ �迭 source�� �� ��° ������ �迭 target�� �����ϴ� �Լ�
{
    for (int i=0; i<size; i++){
        target[i] = source[i];
    }
}

int main() {
    double ary[5] = {3.12, 5.14, 7.25, 7.48, 5.91}; //double�� 1���� �迭 �ʱ�ȭ
    double target[5];

    copyarray(ary, target, 5); //�迭 ���� �Լ� ȣ��

    printf("����� �迭\n");
    for (int i=0; i<5; i++){
        printf("%.2lf  ", target[i]); //����� �迭 ���
    }
    return 0;
}