#include<bits/stdc++.h>
using namespace std;

void transpose(int arr[][3],int row,int col,int brr[][3]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            brr[j][i]=arr[i][j];
        }
    }
}

void printArray(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,4,5}
    };