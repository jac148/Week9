#include<stdio.h>


int sequence(int n)  //sequence�Լ� ����

{
  
       if (n < 3)  // if number is less than 3
       {               
        return n;           //n�� ��ȯ
       }

       return sequence(n - 1) + sequence(n - 2) + sequence(n - 3); //����Լ�
}

int main() {   //main�Լ�

    int n;   // ���� ����

    printf("�� ��°���� ������ ���ұ��? ");   //n��° ���� �Է�
    scanf_s("%d", &n);    // ���� n�� ����

    for (int i = 0; i < n; i++) {    // i�� 0���� �Էµ� n�������� �ݺ��Ѵ�
        printf(" %d ", sequence(i));   // ���� ���
    }

    return 0;  //0�� ��ȯ
}