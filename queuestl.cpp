#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string>q;

    q.push("priyanshu");
    q.push("jain");
    q.push("kekri");

    cout<<"Size before pop "<<q.size()<<endl;

    cout<<"first element "<<q.front()<<endl;
    q.pop();
    cout<<"first element "<<q.front()<<endl;

    cout<<"size after pop "<<q.size()<<endl;
    }