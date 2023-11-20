#include<iostream>
using namespace std;
int main(){

    int k;
    cout<<"Enter the number of evenlopes : ";
    cin>>k;
    int len=k*2;
    int arr[len];
    int i=0;
    int count=0;
    for(int i=0;i<len;i++){
        cout<<"Enter the values : ";
        cin>>arr[i];
    }


        for(int j=0;j<len;j=j+2){
            if(arr[j]!=arr[j+2] && arr[j+1]!=arr[j+3]){
                count=count+1;
            }
        }

    cout<<count;

    








}