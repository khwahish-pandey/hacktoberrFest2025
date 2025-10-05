#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"the no of elements in the array are"<<endl;
    cin>>n;
    int a[n];
    cout<<"the elements of the array are"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            cout<<max;
            max=a[i];
        }
        else {
            cout<<a[i];
            max=a[i];
        }
        }
        return 0;
    }
