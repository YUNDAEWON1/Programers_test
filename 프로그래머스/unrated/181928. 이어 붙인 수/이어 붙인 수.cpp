#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int Even=0;
    int Odd=0;
    
    for(int i=0;i<num_list.size();i++)
    {
        if(num_list[i]%2==0)
        {
            Even*=10;
            Even+=num_list[i];
        }
        else
        {
            Odd*=10;
            Odd+=num_list[i];
        }
    }
    answer=Even+Odd;
    
    return answer;
}