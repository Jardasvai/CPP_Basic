#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void DisplayStars(int width,int height,char a=' ')
{
    /*precondition:width>=1&&height>=1,if there is a, then a>0&&a<128
    * postcondition:output rectangle filled with a, default a is blank
    */
    //circulate to out print each line of the graph
    for(int i=0;i<height;i++)
        if(i>0&&i<height-1)
            cout<<"*"<<setfill(a)<<setw(width-1)<<"*"<<endl;
        //output the frame of rectangle
        else cout<<setfill('*')<<setw(width)<<""<<endl;
        //print the interior of rectangle
    return;
}
int main()
{
    int w,h;char a;
    cout<<"please input the width and height:"<<endl;
    cin>>w>>h;
    cout<<"please input the inner letter:"<<endl;
    cin>>a;
    DisplayStars(w,h,a);
    return 0;
}
