#include<iostream>
using namespace std;

void printarray(int arr[], int size){

    cout<<"Printing the array"<<endl;

    for(int i=0;i<size;i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl << "Printing done"<<endl;

}

int main(){

    int third[15]={4,6};
    int n=15;
    printarray(third,15);
}