#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    
    // for n-1 passes
    for(int i=1; i<=n-1; i++) {

        int swapped = 0;
        for(int j=0; j<=n-i-1; j++) {
            
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped++;
            }
        }

        if(swapped == 0) {
            cout << endl << "array is already sorted!";
            break;
        }
    }
}

void printArray(int arr[], int n) {

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[50];
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    printArray(arr, n);
    bubbleSort(arr, n);
    cout << endl;
    printArray(arr, n);

    return 0;
}