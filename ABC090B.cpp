#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void){
    int a, b, cnt = 0;
    int f;
    string str;
    cin >> a >> b;

    for(int i=a; i<=b; i++){
        str = to_string(i);
        f = 1;
        for(int j=0; j<2; j++){
            if(str[j] != str[4-j]){
                f = 0;
                break;
            }
        }
        if (f==1){
            cnt++;
        }
    }

    cout << cnt << "\n";

    return 0;
}