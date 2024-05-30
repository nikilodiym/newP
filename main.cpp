#include <iostream>
#include <string>

using namespace std;

int main() {
    const int ROWS1 = 5;
    const int COLS1 = 10;
    const int COLS2 = 5;

    int arr1[ROWS1][COLS1];
    int arr2[ROWS1][COLS2];

    srand(time(0));

    for (int i = 0; i < ROWS1; ++i) {
        for (int j = 0; j < COLS1; ++j) {
            arr1[i][j] = rand() % 51; 
        }
    }

    for (int i = 0; i < ROWS1; ++i) {
        for (int j = 0; j < COLS2; ++j) {
            arr2[i][j] = arr1[i][2 * j] + arr1[i][2 * j + 1];
        }
    }

    cout << "First array (5x10):" << endl;
    for (int i = 0; i < ROWS1; ++i) {
        for (int j = 0; j < COLS1; ++j) {
            cout << arr1[i][j];
        }
        cout << endl;
    }

    cout << "Second array (5x5):" << endl;
    for (int i = 0; i < ROWS1; ++i) {
        for (int j = 0; j < COLS2; ++j) {
            cout << arr2[i][j];
        }
        cout << endl;
    }


	system("pause");
	return 0;
}