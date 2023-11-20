#include<iostream>
using namespace std;
int main(){
    int k;
    cout<<"Enter numbers of points : ";
    cin>>k;
    int len=k*2;
    int arr[len];
    int res[k];
    int x=0;
    for(int i=0;i<len;i++){
        cout<<"Enter the points : ";
        cin>>arr[i];
    }
    for (int i=0;i<=len-2;i=i+2){
        res[x]=(arr[i]*arr[i])+(arr[i+1]*arr[i+1]);
        x++;
    }

    for (int j = 0; j < k-1; j++) { 
        if(res[j]<res[j+1]){
            int temp=res[j];
            res[j]=res[j+1];
            res[j+1]=temp;
        }
    } 

    for (int i=0;i<=len-2;i=i+2){
        if(res[k-1]==(arr[i]*arr[i])+(arr[i+1]*arr[i+1])){
            cout<<"The nearest points are "<<arr[i]<<" "<<arr[i+1];
        }
        
    }
    for (int i=0;i<=len-2;i=i+2){
        res[x]=(arr[i]*arr[i])+(arr[i+1]*arr[i+1]);
        x++;
    }
    
}