#include <iostream>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    int X1,Y1,X2,Y2;
    cout<<"Enter the values of first rectangle bottom-left corner :";
    cin>>x1>>y1;

    cout<<"Enter the values of first rectangle top-right corner:";
    cin>>x2>>y2;

    cout<<"Enter the values of second rectangle bottom-left corner :";
    cin>>X1>>Y1;

    cout<<"Enter the values of second rectangle top-right corner  :";
    cin>>X2>>Y2;
     
    if( x1==y1 && x2==y2 && X1==Y1 && X2==Y2){
        if(x1<X1 && X1<x2 || X1<x1 && x1<X2){
            cout<<"The triangle overlap";
        }
        else{
            cout<<"The triangle did not overlap";
        }
    }
    else{
        cout<<"The triangle did not overlap"<<endl;
    }
}
