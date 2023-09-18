#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int max=0;
    int index=0;
    
    for(int i=0;i<numbers_len;i++)
    {
        if(max<numbers[i])
        {
            max=numbers[i];
            index=i;
        }
    }
    
    for(int i=0;i<numbers_len;i++)
    {
        if(i!=index&&answer<max*numbers[i])
        {
            answer=max*numbers[i];
        }
    }
    return answer;
    
    
}