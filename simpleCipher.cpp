#include <iostream>
#include <string>
using namespace std;

int main(){

    string alphabet {"[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {" [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string original;
    cout << "Enter original message: ";
    getline(cin, original);

    cout << "Encoding message... " << endl;
    string cipheredMessage = {};
    string decipheredMessage = {};

    for (int i = 0; i < original.length(); i++){
        size_t position = alphabet.find(original.at(i));
        if(position != string::npos){
        cipheredMessage += key.at(position); 
        }else{
            cipheredMessage += original.at(i);
        }
    }

    cout << cipheredMessage << endl;

    cout << "Decoding message... " << endl;

    for (int i = 0; i < cipheredMessage.length(); i++){
        size_t position = key.find(cipheredMessage.at(i));
        if(position != string::npos){
        decipheredMessage += alphabet.at(position); 
        }else{
            decipheredMessage += cipheredMessage.at(i);
        }
    }

    cout << decipheredMessage << endl;

    return 0;
}