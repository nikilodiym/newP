#include <iostream>
#include <string>

using namespace std;

int main() {
    srand(time(0));
    const int max_row = 100;
    const int max_col = 100;
    int rows, cols, choice, slides;
    int arr[max_row][max_col];

    do {
        cout << "Enter the number of rows: ";
        cin >> rows;
    } while (rows < 1 || rows > max_row);

    do {
        cout << "Enter the number of columns: ";
        cin >> cols;
    } while (cols < 1 || cols > max_col);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the number of shifts: ";
    cin >> slides;

    cout << "Enter the direction of shift:" << endl;
    cout << "1 - Up" << endl;
    cout << "2 - Down" << endl;
    cout << "3 - Left" << endl;
    cout << "4 - Right" << endl;
    cin >> choice;

    switch (choice) {
    case 1:
        for (int s = 0; s < slides; ++s) {
            for (int j = 0; j < cols; ++j) {
                int temp = arr[0][j];
                for (int i = 0; i < rows - 1; ++i) {
                    arr[i][j] = arr[i + 1][j];
                }
                arr[rows - 1][j] = temp;
            }
        }
        break;
    case 2:
        for (int s = 0; s < slides; ++s) {
            for (int j = 0; j < cols; ++j) {
                int temp = arr[rows - 1][j];
                for (int i = rows - 1; i > 0; --i) {
                    arr[i][j] = arr[i - 1][j];
                }
                arr[0][j] = temp;
            }
        }
        break;
    case 3:
        for (int s = 0; s < slides; ++s) {
            for (int i = 0; i < rows; ++i) {
                int temp = arr[i][0];
                for (int j = 0; j < cols - 1; ++j) {
                    arr[i][j] = arr[i][j + 1];
                }
                arr[i][cols - 1] = temp;
            }
        }
        break;
    case 4:
        for (int s = 0; s < slides; ++s) {
            for (int i = 0; i < rows; ++i) {
                int temp = arr[i][cols - 1];
                for (int j = cols - 1; j > 0; --j) {
                    arr[i][j] = arr[i][j - 1];
                }
                arr[i][0] = temp;
            }
        }
        break;
    }

    cout << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


	system("pause");
	return 0;
}