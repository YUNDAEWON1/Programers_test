#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    scanf("%d",n);
    
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d,", n / i);
            answer += n / i;
        }

    }
    printf("\n%d의 약수를 모두 더하면 %d 입니다.", n, answer);
    return answer;
}