#include <iostream>
#include <vector>
using namespace std;

bool compareAsc(int a, int b){
    return a < b;
}

bool compareDesc(int a, int b){
    return a > b;
}

void customSort(vector<int>& numbersVector, bool(*compareFuncPtr)(int,int)){
    for (int i = 0; i < numbersVector.size(); i++){
        int bestIndex = i;
        for (int j = i + 1; j < numbersVector.size(); j++){
            if(compareFuncPtr(numbersVector[j],numbersVector[bestIndex])){
                bestIndex = j;
            }
        }
        swap(numbersVector[i], numbersVector[bestIndex]);
    }
}

void printNumbers(vector<int>& numbersVector){
    for (int i = 0; i < numbersVector.size(); i++){
        cout << numbersVector[i] << " ";
    }
}

int main(){
    vector<int>numbers = { 4, 11, 1, 25, 33, 7};
    bool(*funcPtr)(int, int) = compareAsc;
    //bool(*funcPtr)(int, int) = compareDesc;
    customSort(numbers, funcPtr);
    printNumbers(numbers);

    return 0;
}