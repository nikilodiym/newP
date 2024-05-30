#include <iostream>
#include <string>

using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 3;
    int arr[ROWS][COLS];
    int sum = 0;
    int count = 0;
    int minElement = numeric_limits<int>::max();
    int maxElement = numeric_limits<int>::min();

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cin >> arr[i][j];
        }
	}

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            int element = arr[i][j];
            sum += element;
            count++;
            if (element < minElement) {
                minElement = element;
            }
            if (element > maxElement) {
                maxElement = element;
            }
        }
    }

    double average = static_cast<double>(sum) / count;

    cout << "Sum of all elements: " << sum << endl;
    cout << "Average of all elements: " << average << endl;
    cout << "Minimum element: " << minElement << endl;
    cout << "Maximum element: " << maxElement << endl;


	system("pause");
	return 0;
}