#include <stdio.h>

void increase(int arr[], int size, int n) //�迭���� ��� ������ ���� n�� ������Ű�� �Լ�
{
    for (int i=0; i<size; i++){
        arr[i] += n;
    }
}

int main() {
    int data[] ={3, 21, 35, 57, 24, 82, 8}; //�־��� �迭
    int n =5; //������ų ���� 5�� ��
    int size=sizeof(data)/sizeof(data[0]); //sizeof ������ ���, size�� 7 ����

    increase(data, size, n); //�Լ� ȣ��, �迭���� ��� ������ �� n�� ����

    printf("n�� ������ �迭: ");
    for (int i=0; i<size; i++){
        printf("%d ", data[i]); //n�� ������ �迭 ���
    }
    return 0;
}