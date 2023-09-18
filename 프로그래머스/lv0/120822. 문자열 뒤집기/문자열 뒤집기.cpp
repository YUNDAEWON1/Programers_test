#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(int i=0;i<my_string.size()/2;i++)
    {
        char temp;
        temp=my_string[(my_string.size()-1)-i];
        my_string[(my_string.size()-1)-i]=my_string[i];
        my_string[i]=temp; 
    }
    answer=my_string;
    return answer;
}