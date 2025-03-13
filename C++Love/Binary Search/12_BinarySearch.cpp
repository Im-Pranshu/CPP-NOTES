#include <iostream>
using namespace std;

int binarySearch(int arr[], int size)
{
    int start = 0, end = size - 1;

    // calculating mid.
    int mid = start + ((end - start) / 2);

    // Inputting key from user to search.
    int key;
    cout << "Enter the element to be Searched :- ";
    cin >> key;

    // run loop till start is on left and end is on right or both are in same place.
    while (start <= end)
    {
        // if found
        if (arr[mid] == key)
        {
            return mid;
        }
        // if key is greater than mid
        if (key > arr[mid])
        {
            start = mid + 1; // goto right part of the array.
        }
        // if key is not found at right part then go to left part which means key is smaller than mid.
        else
        {
            end = mid - 1;
        }
        // find mid after changing start or end.
        mid = start + ((end - start) / 2);
    }
    // if key not found
    return -1;
}

int main()
{
    // even no. of elements in array.
    int even[] = {2, 4, 5, 7, 8, 9};
    int esize = sizeof(even) / sizeof(even[0]);

    // odd no. of elements in array.
    int odd[] = {10, 12, 15, 17, 18};
    int osize = sizeof(odd) / sizeof(odd[0]);

    // storing the index of the element.
    int index = binarySearch(odd, osize);

    // if element not found print.
    if (index == -1)
    {
        cout << endl
             << "Element is not Found." << endl;
    }
    // if found print.
    else
    {
        cout << "Element is at index " << index << endl;
    }

    return 0;
}