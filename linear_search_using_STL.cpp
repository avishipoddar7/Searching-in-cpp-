
//linear search using STL 


#include <iostream>
#include <algorithm>   // for std::find
using namespace std;

class ArraySearch {
private:
    int arr[7] = {9, 8, 5, 1, 0, 3, 2};  // Fixed array
    int size = 7;  // Array size

public:
    // Function to search an element using STL find()
    void searchElement(int target) {
        // std::find returns an iterator to the element if found,
        // otherwise it returns the end iterator (arr+size).
        auto it = find(arr, arr + size, target);

        if (it != arr + size) {
            int index = it - arr;   // position = pointer arithmetic
            cout << "Element " << target << " found at index " << index << "." << endl;
        } else {
            cout << "Element " << target << " not found in the array." << endl;
        }
    }
};

int main() {
    ArraySearch obj;
    int target;

    cout << "Enter the element to search: ";
    cin >> target;

    obj.searchElement(target);

    return 0;
}

/*
Sample Output 1:
Enter the element to search: 3
Element 3 found at index 5.

Sample Output 2:
Enter the element to search: 7
Element 7 not found in the array.
*/
