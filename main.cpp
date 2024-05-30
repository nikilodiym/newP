#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 4;
    int arr[ROWS][COLS];
    int rowSums[ROWS] = { 0 };
    int colSums[COLS] = { 0 };
    int totalSum = 0;

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            rowSums[i] += arr[i][j];
            colSums[j] += arr[i][j];
            totalSum += arr[i][j];
        }
    }

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << setw(4) << arr[i][j];
        }
        cout << " | " << rowSums[i] << endl;
    }

    cout << "  " << string(COLS * 4, '-') << endl;

    for (int j = 0; j < COLS; ++j) {
        cout << setw(4) << colSums[j];
    }
    cout << " | " << totalSum << endl;
	
	system("pause");
	return 0;
}