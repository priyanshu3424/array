#include <iostream>
#include <limits.h>
using namespace std;

int setmin(int a[], int n)
{
	int min = INT_MAX;
	for (int i=0; i<n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}
int setmax(int a[], int n)
{
	int max = INT_MIN;

	for (int i=0; i<n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}
int main()
{
	int a[] = { 4, 12, 8, 5, 2, 3 };
	int n = 4;
	cout <<"Minimum element is: " <<setmin(a, n) << endl;
	cout <<"Miximum element is: "<< setmax(a, n) << endl;
}
