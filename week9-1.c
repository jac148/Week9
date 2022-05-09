#include<stdio.h>
void sum(int mat1[12][12], int mat2[12][12]);          //2행렬의 곱의 함수 선언
void difference(int mat1[12][12], int mat2[12][12]);  //2행렬의 차의 함수 선언
void multiply(int mat1[12][12], int mat2[12][12]);  //2행렬의 곱의 함수 선언

void main()
{
    int mat1[12][12], mat2[12][12]; //12개의 int형 값을 가지는 배열 mat1과 mat2
    int i, j, m, n; //변수 선언
    // 첫번째 행렬의 열의 수는 두번째 행렬의 행의 수가 같아야 곱센이 가능하고 2행렬의 행의 수과 열의 수가 같아야 덧셈&뺄셈이 가능하다.
    printf("Enter the number of rows and columns of 2 matrices\n"); //2행렬의 행과 열의 수를 입력
    scanf_s("%d%d", &m, &n);  //행과 열의 수는 변수m과 n에 저장한다
    printf("Enter the elements of the 1st matrix\n");  // 1번째 행렬의 성분 입력
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++)
        {
            scanf_s("%d", &mat1[i][j]);  //이중 루프를 이용하여서 1번째 행렬 값을 저장한다
        }
    }
    
    printf("Enter the elements of the 2nd matrix\n");  // 2번째 행렬의 성분 입력
    for (i = 0; i < m; i++)   
    {
        for (j = 0; j < n; j++)
        {
            scanf_s("%d", &mat2[i][j]);  //이중 루프를 이용하여서 2번째 행렬 값을 저장한다
        }
    }

    printf("The 1st matrix\n");   
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", mat1[i][j]);  //1번째 행렬 출력
        }
        printf("\n"); //new line
    }
    printf("The 2nd matrix\n");  
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", mat2[i][j]);  //2번째 행렬 출력
        }
        printf("\n"); //new line
    }
    sum(mat1, mat2, m, n); //2행렬의 합 함수 호출
    difference(mat1, mat2, m, n);  //2행렬의 차 함수 호출
    multiply(mat1, mat2, m, n); //2행렬의 곱 함수 호출 
}

//2행렬의 합 함수 정의
//m,n변수 선연.   m:2행렬의 행의 수, n: 2행렬의 열의 수 
void sum(int mat1[12][12], int mat2[12][12], int m, int n)
{
    int sum[12][12], i, j; //변수 선언.sum[12][12]는 2행렬의 합이다 
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

            sum[i][j] = mat1[i][j] + mat2[i][j]; //2행렬의 합 계산하는 공식

        }
    }

    printf("Sum of two matrices\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", sum[i][j]); //2행렬의 합을 출력
        }
        printf("\n");
    }
}

//2행렬의 차 함수 정의
//m,n변수 선연.   m:2행렬의 행의 수, n: 2행렬의 열의 수
void difference(int mat1[12][12], int mat2[12][12], int m, int n)
{
    int diff[12][12], i, j; //변수 선언. sum[12][12]는 2행렬의 차이다 
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

            diff[i][j] = mat1[i][j] - mat2[i][j]; //2행렬의 차를 계산하는 공식

        }
    }

    printf("Difference of two matrices\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t",diff[i][j]); //2행렬의 차를 출력
        }
        printf("\n");
    }
}


//2행렬의 곱 함수 정의
//m,n변수 선언.   m:2행렬의 행, n: 2행렬의 열
void multiply(int mat1[12][12], int mat2[12][12], int m, int n) 
{
    int mul[12][12], i, j, k; //변수 선언. mul[12][12]는 2행렬의 곱이. 
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                mul[i][j] = mul[i][j] + mat1[i][k] * mat2[k][j]; //2행렬의 곱 계산하는 공식
            }
        }
    }

    printf("Multiplication of two matrices\n"); 
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", mul[i][j]); //2행렬의 곱을 출력
        }
        printf("\n");
    }
}









