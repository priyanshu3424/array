#include <iostream> // Header file for input/output stream
using namespace std; // Using the standard namespace

int main() // Main function
{
    int array1[] = {1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6}; // Declaration and initialization of the array
    int s1 = sizeof(array1) / sizeof(array1[0]); // Calculate the size of the array

    cout << "Original array: "; // Output label for original array

    for (int i = 0; i < s1; i++) // Loop to output elements of the original array
        cout << array1[i] << " ";

    cout << "\nUnique elements of the said array: "; // Output label for unique elements

    for (int i = 0; i < s1; i++) // Loop to find and output unique elements
    {
        int j;
        for (j = 0; j < i; j++) // Inner loop to check for duplicates until the current index i
        {
            if (array1[i] == array1[j]) // If a duplicate is found
                break; // Break the loop
        }
        if (i == j) // If the index is equal to the inner loop's index j
            cout << array1[i] << " "; // Output the unique element at index i
    }
    return 0; // Return 0 to indicate successful execution
}
