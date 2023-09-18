#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int max=0;
    int index=0;
    int temp=0;
    for(int i=0;i<sides.size();i++)
    {
        if(max<sides[i])
        {
            max=sides[i];
            index=i;
        }
    }
    for(int i=0;i<sides.size();i++)
    {
        if(i!=index)
        {
            temp+=sides[i];
        }
    }
    
    if(max<temp)
        answer=1;
    else
        answer=2;
    
    return answer;
}