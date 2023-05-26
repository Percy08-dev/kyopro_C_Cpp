#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void){
    string str;
    
    for(int i=0; i<3; i++){
        cin >> str;
        cout << str.at(0);
    }

    cout << "\n";



    return 0;
}