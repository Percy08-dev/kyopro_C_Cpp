#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void){
    char c;
    string str = "aiueo";
    bool f = false;

    cin >> c;

    for(int i=0; i<5; i++){
        if (c == str.at(i)){
            f = true;
            break;
        }
    }

    if(f){
        cout << "vowel \n"; 
    }else{
        cout << "consonant \n";
    }

    return 0;
}