#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    int i=1;
    
    for(i=1;i<n;i++)
    {
        if(i*10<=n)
            k--;
    }
    answer=(n*12000)+(k*2000);
    return answer;
}