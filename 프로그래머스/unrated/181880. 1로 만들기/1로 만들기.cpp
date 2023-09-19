#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int cnt=0;
    
    for(int i=0;i<num_list.size();i++)
    {
       while(num_list[i]!=1)
       {
           num_list[i]/=2;
           cnt++;
       }
        
    }
    return cnt;
}