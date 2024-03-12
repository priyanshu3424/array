#include<iostream>
using namespace std;

void printarray(){
}

int main(){

    //declare
    int third[15] = {3,7};

    int n=15;

    //accessing an array
    cout<<endl <<"Printing the array"<<endl;
    //print the array
    
    for(int i=0;i<n;i++){
        cout<<third[i]<<" ";
    }

    return 0;
}