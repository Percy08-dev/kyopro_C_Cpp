#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void){
    int n, k, res;
    cin >> n >> k;

    res = 1;

    for(int i=0;i<n;i++){
        if (res < k){
            res *= 2;
        }else{
            res += k;
        }
    }

    cout << res << "\n";

    return 0;
}