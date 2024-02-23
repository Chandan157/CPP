#include<iostream>
#include<vector>
using namespace std;

void search(string& str, char& key, int i, vector<int>& ans) {

    //base case
    if(i == str.length())
        return;

    //processing
    if(str[i] == key) {
        ans.push_back(i);
    }

    //R.R
    search(str, key, i+1, ans);
}

int main()
{
    string str = "chandan";
    char key = 'h';
    int i = 0;

    // int ans = search(str, key, i);
    // cout << "key found at index: " << ans << endl;

    vector<int> ans;
    search(str, key, i, ans);

    for(auto i: ans)
        cout << i << " ";

    return 0;
}