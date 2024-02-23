#include<bits/stdc++.h>
using namespace std;

//Head Recursion

void counting(int n) {

    //Base case
    if(n == 0)
        return;

    //recursive relation
    counting(n-1);

    //Processing
    cout << n << " ";
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    counting(n);
    
    return 0;
}