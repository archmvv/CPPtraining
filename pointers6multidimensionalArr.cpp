#include <iostream>
using namespace std;

int main(){
    int rows{};
    int cols{};
    cout << "Please enter the number of rows and cols: ";
    cin >> rows >> cols;

    int **table = new int*[rows];

    for (int i = 0; i < rows; i++){
        table[i] = new int[cols];
    }
    int count = 1;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            table[i][j] = count;
            count++;
        }
    }

    table[1][2] = 88;

    cout << "Printed matrix: \n";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << table[i][j] << "  ";
        }
        cout << "\n";
    }

    for (int i = 0; i < rows; i++){
        delete[] table[i];
    }
    delete[] table;
    table = NULL;

    return 0;
}