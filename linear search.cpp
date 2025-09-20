#include <iostream>
using namespace std;

int main() {
    int n, key;
    
    // Taking size of array
    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[n];
    
    // Taking array input
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Element to search
    cout << "Enter the element to search: ";
    cin >> key;
    
    // Linear Search
    int pos = -1;  
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            pos = i;
            break;
        }
    }
    
    // Output
    if(pos == -1) {
        cout << "Element not found!" << endl;
    } else {
        cout << "Element found at position " << pos + 1 << endl;
    }
    
    return 0;
}
