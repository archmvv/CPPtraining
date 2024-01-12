#include <iostream>
using namespace std;

void swapPointers(int* ptr1, int* ptr2){
    *ptr1 = *ptr1 - *ptr2;
    *ptr2 = *ptr1 + *ptr2;
    *ptr1 = *ptr2 - *ptr1;
    return;
}

void swapPointersTempVar(int* ptr1, int* ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    return;
}

int main(){
    int a =5;
    int b = 10;

    int* ptrA = &a;
    int* ptrB = &b;

    cout << *ptrA << endl;
    cout << *ptrB << endl;

    swapPointers(ptrA, ptrB);

    cout << *ptrA << endl;
    cout << *ptrB << endl;

    swapPointersTempVar(ptrA, ptrB);

    cout << *ptrA << endl;
    cout << *ptrB << endl;

    return 0;

}