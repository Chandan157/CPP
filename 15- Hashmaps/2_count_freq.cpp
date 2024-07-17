#include<iostream>
using namespace std;
#include<unordered_map>
#include<map>  //ordered map  - karne se sorted ayega

int main(){
    string str="Thiruvananthapuram";
    // unordered_map<char, int> freq;
    map<char, int> freq;

    for(int i=0; i<str.length();i++){
        char ch=str[i];
        freq[ch]++;
    }

    for(auto i: freq){
        cout<<i.first<<"-> "<<i.second<<endl;
    }
}