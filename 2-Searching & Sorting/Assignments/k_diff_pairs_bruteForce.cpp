#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={2,3,4,5,6};
    int n=arr.size();
    int k = 2;

    for (int i = 0; i < n-1; i++)
    {
        int element = arr[i];
        int element2 = k + element;

        for(int j=i+1; j<n; j++) {
            if(arr[j] == element2) {
                cout << element << " " << element2 << endl;
            }
        }
    }
    
    
}