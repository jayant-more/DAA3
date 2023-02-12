#include<iostream>
using namespace std;
int main(){
    int arr[9]={2,4,6,1,5,3,8,9,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    cout<<"Sorted array is:";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}