#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    int count[1000] = {0};

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    cout << "Sorted array: ";
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            cout << i << " ";
            count[i]--;
        }
    }

    cout << endl;
    return 0;
}
