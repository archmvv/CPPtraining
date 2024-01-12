#include <iostream>
#include <vector>
using namespace std;

void display(const vector<string>* const a){
    for(auto str : *a){
        cout << str << " ";
    }
    return;
}

void displayArr(int* arr, int sentinel){
    while (*arr != sentinel){
        cout << *arr++ << " ";
    }
    return;
}

int main(){
    cout << "----------------------------------" << endl;
    vector<string> people {"Larry", "Moe", "Curly"};

    display(&people);

    cout << "\n";

    int nums[] {100, 98, 97, 79, 85, -1};
    displayArr(nums, -1);

    return 0;
}