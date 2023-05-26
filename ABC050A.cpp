#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int  main(void){
    int a, b;
    char op;

    cin >> a >> op >> b;

    if(op == '+'){
        cout << a+b << "\n";
    }else{
        cout << a-b << "\n";
    }

    return 0;
}