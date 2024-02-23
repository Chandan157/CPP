#include<iostream>
using namespace std;
#include<vector>

void printSubsequences(string&str,int i,string output){
    if(i==str.length()){
        cout<<output<<endl;
        return;
    }

    printSubsequences(str,i+1,output);

    output.push_back(str[i]);
    printSubsequences(str,i+1,output);
}