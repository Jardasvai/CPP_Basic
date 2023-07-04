#include <iostream>
#include <string>
using namespace std;

int main()
{
    const string s1="I and li4 and zhang3 and wang5 went to the land yesterday.\hello,world";
    const string s2="and";
    //print the positions of s2 in s1
    int pos=s1.find(s2);
    for(int i=1;pos>0;i++)
    {
        cout<<i<<". \"and\" is at position "<<pos<<endl;
        pos=s1.find(s2,pos+1);
    }
    return 0;
}
