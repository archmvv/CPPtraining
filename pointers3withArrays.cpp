#include <iostream>
using namespace std;


int main(){
    int luckyNumbers[5] = {2, 3, 5, 7, 11};
    cout << luckyNumbers << endl;
    cout << &luckyNumbers[0] << endl;
    cout << luckyNumbers[2] << endl;
    cout << *(luckyNumbers + 2) << endl;

    int luckyNumbers2[5];
    int size = sizeof(luckyNumbers2) / sizeof(luckyNumbers2[0]);

    for (int i = 0; i < size; i++){
        cout << "Enter a number: ";
        cin >> luckyNumbers2[i];
    }

    for (int i = 0; i < size; i++){
        cout << *(luckyNumbers2 + i) << " ";
    }
    
    return 0;
}