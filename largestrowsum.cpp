#include<iostream>
using namespace std;

int findMaxRowSum(int arr[3][3]) {
    int maxSum=0; // Initialize maximum sum to 0
    int maxRow= -1; // Initialize the index of the row with the maximum sum

    for(int row=0; row<3; row++) {
        int rowSum =0;
        for(int col=0; col<3; col++) {
            rowSum += arr[row][col];
        }
        if(rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = row;
        }
    }
    return maxRow;
}

int main() {
    //create 2d array
    int arr[3][3];

    cout<<"Enter the elements:"<<endl;

    // taking input --> row wise input
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cin>>arr[row][col];
        }
    }

    //print
    cout <<"Entered elements:" <<endl;
    for(int row= 0; row<3; row++) {
        for(int col= 0; col<3; col++) {
            cout<<arr[row][col] << " ";
        }
        cout<<endl;
    }

    int maxRowIndex = findMaxRowSum(arr);
    if(maxRowIndex != -1) {
        cout<<"Row with the largest sum is row "<<maxRowIndex + 1 <<endl;
    } else {
        cout<<"Array is empty." <<endl;
    }
    return 0;
}
