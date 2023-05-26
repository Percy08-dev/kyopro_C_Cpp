#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void){
    string str;
    cin >> str;

    if (str.at(str.size() - 1) == 'T'){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }

    return 0;
}