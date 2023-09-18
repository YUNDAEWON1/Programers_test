#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    
    vector<int> answer(2);
    
    
    if(money<5500)
    {
        answer[0]=0;
        answer[1]=money;
    }
    else
    {
        answer[0]=money/5500;
        answer[1]=money%5500;
    }
    
    return answer;
}