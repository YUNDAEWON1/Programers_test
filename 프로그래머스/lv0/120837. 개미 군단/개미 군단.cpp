#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    
    answer=hp/5;
    int temp1=hp%5;
    answer+=temp1/3;
    int temp2=temp1%3;
    answer+=temp2/1;
    
    
    return answer;
}