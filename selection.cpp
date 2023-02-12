#include<iostream>
using namespace std;
int main(){
    int arr[9]={2,4,6,1,5,3,8,9,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Sorted array is:";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}