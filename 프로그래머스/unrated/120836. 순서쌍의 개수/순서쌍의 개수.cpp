#include <string>
#include <vector>

using namespace std;

int solution(int n) {
   
     if( n == 1 )
    	return 1;
    
     int answer = 2;
    
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            answer++;
        }
    }
    
    return answer;
}