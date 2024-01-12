#include <iostream>
using namespace std;

void doubleValue(int* ptr){
    *ptr *= 2;
}

int main(){
    int value = 10;
    int* intPtr {nullptr};

    cout << value << endl;
    doubleValue(&value);

    cout << value << endl;

    intPtr = &value;
    doubleValue(intPtr);
    cout << value << endl;

    return 0;
 }