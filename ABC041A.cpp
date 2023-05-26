#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void){
    string str;
    int i;

    cin >> str >> i;
    cout << str.at(i-1) << "\n";

    return 0;
}