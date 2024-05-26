#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        // going to the right vala part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        { // key<arr[mid]
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{

    int even[6] = {4, 6, 9, 12, 15};
    int odd[4] = {6, 8, 14, 17};

    int index = binarySearch(even, 6, 15);

    cout << "index of 15 is " << index << endl;

    index = binarySearch(odd, 4, 17);

    cout << "index of 17 is " << index << endl;

    return 0;
}