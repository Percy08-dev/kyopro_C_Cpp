#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void){
    string a, b;
    cin >> a >> b;

    if(a.size() > b.size()){
        cout << a << "\n";
    }else{
        cout << b << "\n";
    }

    return 0;
}