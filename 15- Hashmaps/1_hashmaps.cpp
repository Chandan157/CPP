#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    // creation
    unordered_map<string,int> m;

    // insertion

    // technique- 1 for insertion
    pair<string,int> p= make_pair("Scorpio", 9);
    m.insert(p);

    // technique- 2
    pair<string,int> p2("alto", 2);
    m.insert(p2);

    // technique- 3
    m["fortuner"]=10;

    //access
    cout<<m.at("alto")<<endl;
    cout<<m.at("Scorpio")<<endl;
    cout<<m["fortuner"]<<endl;

    // Search
    cout<<m.count("Innova")<<endl;
    cout<<m.count("fortuner")<<endl;

    if(m.find("fortuner")!=m.end()){
        cout<<"Found fortuner!"<<endl;
    }
    else{
        cout<<"Fortuner not found!"<<endl;
    }

    // size
    cout<<"Size of map is: "<<m.size()<<endl;

    // printing all entries
    cout<<"............All entries are............"<<endl;
    for(auto i:m){
        cout<<i.first<<"-> "<<i.second<<endl;
    }

    return 0;
}