#include<iostream>
using namespace std;

void printRowSum(int arr[3][3]) {
    cout<<"Printing sum of each row:\n";
    for(int row= 0; row<3; row++) {
        int rowSum=0;
        for(int col=0; col<3; col++) {
            rowSum += arr[row][col];
        }
        cout<<"Sum of row "<<row+1<<": "<< rowSum<< endl;
    }
}

int main() {
    //create 2d array
    int arr[3][3];

    cout << "Enter the elements:"<<endl;

    // taking input --> row wise input
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cin>>arr[row][col];
        }
    }

    //print
    cout<<"Entered elements:\n";
    for(int row =0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cout << arr[row][col] << " ";
        }
        cout<<endl;
    }
    printRowSum(arr); 

    return 0;
}
