#include <stdio.h>

void add(double plus[][3], double x[][3], double y[][3]) //�� ������ �迭�� ���ϱ⸦ �����ϴ� �Լ�
{
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            plus[i][j] = x[i][j] + y[i][j];
            printf(" %.1lf   ", plus[i][j]);
        }
        printf("\n");
    } //for�� ��ø
}

void sub(double minus[][3], double x[][3], double y[][3]) //�� ������ �迭�� ���⸦ �����ϴ� �Լ�
{
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            minus[i][j] = x[i][j] - y[i][j];
            printf(" %.1lf   ", minus[i][j]);
        }
        printf("\n");
    } //for�� ��ø
}

int main() {
    double a[2][3]={{4.2, 4.3, 3.8}, {3.7, 1.5, 0.7}}; //�־��� ������ �迭
    double b[2][3]={{5.2, 2.1, 1.8}, {3.2, 1.4, 2.9}}; //�־��� ������ �迭
    double c[2][3]={0}; //���� ��� ������ �迭 c �ʱ�ȭ

    printf("�� ������ �迭�� ���ϱ� ��� \n");
    add(c, a, b); //�� ������ �迭�� ���ϱ⸦ �����ϴ� �Լ� ȣ��
    printf("\n");

    printf("�� ������ �迭�� ���� ��� \n");
    sub(c, a, b); //�� ������ �迭�� ���⸦ �����ϴ� �Լ� ȣ��

    return 0;
}