#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,3,2,8,9,4};
    int n = sizeof(arr)/sizeof(int);

    int s=0;
    int e=n-1;

    while(s<=e){
        swap(arr[s],arr[e]);
        s++,e--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
