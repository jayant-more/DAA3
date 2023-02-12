#include<iostream>
using namespace std;
int main(){
    int arr[9]={2,4,5,1,7,3,8,9,7};
    cout<<"Enter a number from 1 to 9:";
    int n;
    cin>>n;
    for(int i=0;i<9;i++){
        if(arr[i]==n){
            cout<<"Index of entered number is:"<<i<<endl;
            break;
        }
    }
}