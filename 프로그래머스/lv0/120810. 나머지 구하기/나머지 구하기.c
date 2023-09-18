#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = -1;
    int result=0;
    result=num1%num2;
    printf("num1이 %d,num2가 %d이므로 %d을 %d로 나눈 나머지 %d을 return 합니다.",num1,num2,num1,num2,result);
    
    return result;
}