#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string message;
string encry_message;
int key;


int main(){
cout << "Enter your text: ";
cin >> message;
cout << "Enter key(only numbers): ";
cin >> key;
for(int i = 0; i != message.length(); i++){
    // cout << message.at(i) << endl;
    if(key < alphabet.length()){
        int k = i + key;
        encry_message = encry_message + message.at(k);
    }else{
        key = key - alphabet.length();
        int k = i + key;
        encry_message = encry_message + message.at(k);
}}}
