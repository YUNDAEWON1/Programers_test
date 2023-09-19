#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2,0);
    
 
    
    for(int i=0;i<keyinput.size();i++)
    {
        if(keyinput[i]=="left")
        {
            if(answer[0]<=(board[0]/2)*-1)
                continue;
            else
            answer[0]-=1;
        }
        else if(keyinput[i]=="right")
        {
            if(answer[0]>=(board[0]/2))
                continue;
            else
            answer[0]+=1;
        }
        else if(keyinput[i]=="up")
        {
            if(answer[1]>=(board[1]/2))
                continue;
            else
            answer[1]+=1;
        }
        else if(keyinput[i]=="down")
        {
            if(answer[1]<=(board[1]/2)*-1)
                continue;
            else
            answer[1]-=1;
        }
    }
  
    return answer;
}