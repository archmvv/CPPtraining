#include <iostream>
using namespace std;

void printNumber(int* numPtr){
    cout << *numPtr << endl;
}

void printLetter(char* letterPtr){
    cout << *letterPtr << endl;
}

void print(void* ptr, char type){
    switch (type){
    case 'i':
        cout << *((int*)ptr) << endl;
        break;
    case 'c':
        cout << *((char*)ptr) << endl;
        break;
    case 'd':
        cout << *((double*)ptr) << endl;
        break;    
    case 'b':
        cout << *((bool*)ptr) << endl;
        break;
    }
}

int main(){
    int number = 5;
    char letter = 'a';
    printNumber(&number);
    print(&number, 'i');

    printLetter(&letter);
    print(&letter, 'c');    

    return 0;
}