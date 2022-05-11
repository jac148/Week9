#include<stdio.h>


int sequence(int n)  //sequence함수 정의

{
  
       if (n < 3)  // if number is less than 3
       {               
        return n;           //n값 반환
       }

       return sequence(n - 1) + sequence(n - 2) + sequence(n - 3); //재귀함수
}

int main() {   //main함수

    int n;   // 변수 선언

    printf("몇 번째까지 수열을 구할까요? ");   //n번째 항을 입력
    scanf_s("%d", &n);    // 변수 n에 저장

    for (int i = 0; i < n; i++) {    // i를 0부터 입력된 n이전까지 반복한다
        printf(" %d ", sequence(i));   // 수열 출력
    }

    return 0;  //0값 반환
}