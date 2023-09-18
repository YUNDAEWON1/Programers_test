#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    int answer =1;
    int a=0;
    for(int i=0;i<answer;i++)
    {
    if(a<n)
    {
        a+=slice;
    answer++;
    }
    }
    return answer-1;
}