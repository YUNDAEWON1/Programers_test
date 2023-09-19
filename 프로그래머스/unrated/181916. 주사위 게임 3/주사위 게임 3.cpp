#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    //첫번째 조건
    if(a==b&&b==c&&c==d&&d==a)
    {
        answer=1111*a;
    }
    //두번째 조건
    else if(a==b&&b==c&&d!=a)
    {
        answer=(10*a+d)*(10*a+d);
    }
    else if(a==b&&b==d&&c!=a)
    {
        answer=(10*a+c)*(10*a+c);
    }
    else if(b==c&&c==d&&a!=b)
    {
        answer=(10*b+a)*(10*b+a);
    }
    else if(a==c&&c==d&&b!=a)
    {
        answer=(10*a+b)*(10*a+b);
    }
    //세번째 조건
    else if(a==b&&c==d&&a!=c)
    {
        answer=(a+c)*abs(a-c);
    }
    else if(a==c&&b==d&&c!=b)
    {
        answer=(a+b)*abs(a-b);
    }
    else if(a==d&&b==c&&d!=b)
    {
        answer=(a+c)*abs(a-c);
    }
    //네번째 조건
    else if(a==b&&c!=d&&b!=c)
    {
        answer=c*d;
    }
    else if(a==c&&b!=d&&c!=b)
    {
        answer=b*d;
    }
    else if(a==d&&b!=c&&d!=b)
    {
        answer=b*c;
    }
    else if(b==c&&a!=d&&c!=a)
    {
        answer=a*d;
    }
    else if(b==d&&a!=c&&d!=a)
    {
        answer=a*c;
    }
    else if(c==d&&a!=b&&d!=a)
    {
        answer=a*b;
    }
    //다섯번째 조건
    else if(a!=b&&b!=c&&c!=d&&d!=a)
    {
        int temp[4]={a,b,c,d};
        int num=6;
        for(int i=0;i<4;i++)
        {
            if(temp[i]<num)
            {
                num=temp[i];
            }
        }
        answer=num;
    }
    return answer;
}