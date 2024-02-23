#include<iostream>
using namespace std;
#include<vector>

void print(vector<int>arr,int i,int n){
    if(i==n){
        return;
    }
    cout<<arr[i]<<" ";

    print(arr,i+1,n);
}

int main(){
    vector<int>arr={1,22,32,4,55,6};
    int n=arr.size();
    int i=0;

    print(arr,i,n);

    return 0;
}