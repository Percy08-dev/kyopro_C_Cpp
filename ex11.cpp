#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, o;
    char op;
    cin >> n >> a;


    for(int i = 0; i<n; i++){
        cin >> op >> b;
        o = static_cast<int>(op);
        switch(o){
            case '+':
                a += b;
                break;
            case '-':
                a -=b;
                break;
            case '*':
                a *= b;
                break;
            case '/':
                if(b == 0){
                    cout << "error" << endl;
                    return 0;
                }
                a /= b;
                break;
        }
        cout << i+1 << ":" << a << endl;
    }
}
