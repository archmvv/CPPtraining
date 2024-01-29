#include <iostream>
#include <string>
using namespace std;

int main(){
    string text {};
    cout << "Enter letters for the pyramid: ";
    getline(cin, text);

    int currentPos = 0;
    int currentPosReturn = currentPos;
    for (int i = 0; i < text.length(); i++){
        string print {};
        for (int j = text.length()- i - 1; j > 0; j--){
            print += " ";
        }
        for (int k = 0; k <= currentPos; k++){
            print += text.at(k);
        }
        currentPosReturn = currentPos;
        for (int p = currentPosReturn - 1; p >= 0; p--){
            print += text.at(p);
        }
        currentPos ++;

        cout << print << endl;

    }

    return 0;
}