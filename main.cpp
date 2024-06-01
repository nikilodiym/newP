#include <iostream>
#include <string>

using namespace std;

int main() {
    srand(time(0));
    const int max_row = 100;
    const int max_col = 100;
    int rows, cols, num;

    do {
        cout << "Enter the number of rows: ";
        cin >> rows;
    } while (rows < 1 || rows > max_row);

    do {
        cout << "Enter the number of columns: ";
    
        cin >> cols;
    } while (cols < 1 || cols > max_col);

    cout << "Enter the number you want to start with:" << endl;
    cin >> num;
    int arr[max_row][max_col];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = num;
            num *= 2;
        }
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

	system("pause");
	return 0;
}