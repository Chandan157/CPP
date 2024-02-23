#include <iostream>
#include <string.h>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[mini]>arr[j]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}

void printArray(int arr[], int n) {

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}


int main(){
    int arr[50];
    int n;
    cout<<"Enter the size: ";
    cin>>n;

    cout<<"Enter the elements:- "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    printArray(arr,n)
    selectionSort(arr,n);
    printArray(arr,n);

    return 0;
}