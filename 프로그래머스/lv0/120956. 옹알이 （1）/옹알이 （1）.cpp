#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    int count=0;
    
    for(int i=0;i<babbling.size();i++)
    {
        count=0;
        if(babbling[i].find("aya")!=string::npos)
        {
            count+=3;
        }
        cout<<"1 :" <<count<<endl;
        
        if(babbling[i].find("ye")!=string::npos)
        {
            count+=2;
        }
        cout<<"2 :" <<count<<endl;
        if(babbling[i].find("woo")!=string::npos)
        {
            count+=3;
           
            
        }
        cout<<"3 :" <<count<<endl;
        if(babbling[i].find("ma")!=string::npos)
        {
            count+=2;
         
        }
        cout<<"4 :" <<count<<endl;
        if(count==babbling[i].size())
        {
            answer++;
        }
        cout<<endl<<endl;
    }
    
        
    return answer;
}