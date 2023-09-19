#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    
    
    for(int i=0;i<common.size();i++)
    {
      if(common[1]-common[0]==common[2]-common[1])
      {
          answer=common[common.size()-1]+(common[1]-common[0]);
      }
    else if(common[1]/common[0]==common[2]/common[1])
    {
        answer=common[common.size()-1]*(common[1]/common[0]);
    }
    }
    
    return answer;
}