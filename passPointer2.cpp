#include <iostream>
using namespace std;

void swapNumbers(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main(){
    int x = 200;
    int y = 100;

    cout << "x is: " << x << endl;
    cout << "y is: " << y << endl;

    swapNumbers(&x, &y);

    cout << "x is: " << x << endl;
    cout << "y is: " << y << endl;

    return 0;

}