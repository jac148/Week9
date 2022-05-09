#include<stdio.h>
void sum(int mat1[12][12], int mat2[12][12]);          //2����� ���� �Լ� ����
void difference(int mat1[12][12], int mat2[12][12]);  //2����� ���� �Լ� ����
void multiply(int mat1[12][12], int mat2[12][12]);  //2����� ���� �Լ� ����

void main()
{
    int mat1[12][12], mat2[12][12]; //12���� int�� ���� ������ �迭 mat1�� mat2
    int i, j, m, n; //���� ����
    // ù��° ����� ���� ���� �ι�° ����� ���� ���� ���ƾ� ������ �����ϰ� 2����� ���� ���� ���� ���� ���ƾ� ����&������ �����ϴ�.
    printf("Enter the number of rows and columns of 2 matrices\n"); //2����� ��� ���� ���� �Է�
    scanf_s("%d%d", &m, &n);  //��� ���� ���� ����m�� n�� �����Ѵ�
    printf("Enter the elements of the 1st matrix\n");  // 1��° ����� ���� �Է�
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++)
        {
            scanf_s("%d", &mat1[i][j]);  //���� ������ �̿��Ͽ��� 1��° ��� ���� �����Ѵ�
        }
    }
    
    printf("Enter the elements of the 2nd matrix\n");  // 2��° ����� ���� �Է�
    for (i = 0; i < m; i++)   
    {
        for (j = 0; j < n; j++)
        {
            scanf_s("%d", &mat2[i][j]);  //���� ������ �̿��Ͽ��� 2��° ��� ���� �����Ѵ�
        }
    }

    printf("The 1st matrix\n");   
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", mat1[i][j]);  //1��° ��� ���
        }
        printf("\n"); //new line
    }
    printf("The 2nd matrix\n");  
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", mat2[i][j]);  //2��° ��� ���
        }
        printf("\n"); //new line
    }
    sum(mat1, mat2, m, n); //2����� �� �Լ� ȣ��
    difference(mat1, mat2, m, n);  //2����� �� �Լ� ȣ��
    multiply(mat1, mat2, m, n); //2����� �� �Լ� ȣ�� 
}

//2����� �� �Լ� ����
//m,n���� ����.   m:2����� ���� ��, n: 2����� ���� �� 
void sum(int mat1[12][12], int mat2[12][12], int m, int n)
{
    int sum[12][12], i, j; //���� ����.sum[12][12]�� 2����� ���̴� 
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

            sum[i][j] = mat1[i][j] + mat2[i][j]; //2����� �� ����ϴ� ����

        }
    }

    printf("Sum of two matrices\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", sum[i][j]); //2����� ���� ���
        }
        printf("\n");
    }
}

//2����� �� �Լ� ����
//m,n���� ����.   m:2����� ���� ��, n: 2����� ���� ��
void difference(int mat1[12][12], int mat2[12][12], int m, int n)
{
    int diff[12][12], i, j; //���� ����. sum[12][12]�� 2����� ���̴� 
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

            diff[i][j] = mat1[i][j] - mat2[i][j]; //2����� ���� ����ϴ� ����

        }
    }

    printf("Difference of two matrices\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t",diff[i][j]); //2����� ���� ���
        }
        printf("\n");
    }
}


//2����� �� �Լ� ����
//m,n���� ����.   m:2����� ��, n: 2����� ��
void multiply(int mat1[12][12], int mat2[12][12], int m, int n) 
{
    int mul[12][12], i, j, k; //���� ����. mul[12][12]�� 2����� ����. 
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                mul[i][j] = mul[i][j] + mat1[i][k] * mat2[k][j]; //2����� �� ����ϴ� ����
            }
        }
    }

    printf("Multiplication of two matrices\n"); 
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", mul[i][j]); //2����� ���� ���
        }
        printf("\n");
    }
}









