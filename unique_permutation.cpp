#include<iostream>
using namespace std;
int main(){


    int k;
    cout<<"Enter numbers of points : ";
    cin>>k;
    int array[k];
    int res=1;
 for (int i = 0; i < k; i++) { 
        cout << "Enter a number: "; 
        cin >> array[i]; 
    }
for (int i = 0; i < k; i++) { 
        res=array[i]*res;
    }

    for(int i=0;i<k;i++){
        for (int j = 0; j < k-1; j++) { 
            int temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
         for (int q = 0; q < k; q++) {
            cout << array[q] << " ";
        }
            cout<<endl;
        }
    }
    

   

}