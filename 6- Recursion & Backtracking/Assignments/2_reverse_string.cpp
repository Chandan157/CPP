#include<bits/stdc++.h>
using namespace std;

void reverse(string& str, int s, int e) {

    //base case
    if(s > e) {
        return;
    }

    //ek case
    swap(str[s], str[e]);

    //baki recursion sambhal lega
    reverse(str, s+1, e-1);
}

int main()
{
    string str = "abcd";
    int s = 0;
    int e = str.length()-1;

    reverse(str, s, e);
    cout << str << endl;
    
    return 0;
}