#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string>m;

    m[1]="priyanshu";
    m[13]="jain";
    m[2]="kekri";

    m.insert({5,"bhola"});

    cout<<"Before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding -13 ->"<<m.count(-13)<<endl;

    m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl<<endl;

    auto it=m.find(5);

    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}