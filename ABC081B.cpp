#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void){
    int n, a;
    int cnt, cnt_min = 1000;

    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> a;
        cnt = 0;
        while(a%2==0){
            cnt++;
            a /= 2;
        }

        if(cnt_min > cnt){
            cnt_min = cnt;
        }
    }

    cout << cnt_min << "\n";


    return 0;
}