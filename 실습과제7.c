#include <stdio.h>

int main() {
	int ary[][5] = {1,2,3,4,5,6,7,8,9,10}; //�־��� ������ �迭
	int (*ptr)[5]=ary; //�迭 ������ ����

    for (int i=0; i<2; i++){
        for (int j=0; j<5; j++){
            ptr[i][j] +=5; //������ �� 5�� ����
        }
    } //for�� ��ø 
     
    for (int i=0; i<2; i++){
        for (int j=0; j<5; j++){
            printf("%d ", ary[i][j]); //5�� ������ ������ �迭 ���
        }
        printf("\n");
    } //for�� ��ø 

	return 0;
}