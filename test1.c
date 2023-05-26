#include<stdio.h>
#include<stdlib.h>

#define L 5

// データ入力
int* input(void){
    int *n;
    n = (int *)calloc(L, sizeof(int));

    for (int i=0; i<L; i++){
        scanf("%d", &n[i]);
    }

    return n;
}

/* hitの判定処理 
引数: 正解の配列, 入力した配列
戻り値: bool配列(hitしたインデックスは1しなかった物は0)
*/
int hit(int *ans, int *res){
    int cnt = 0;

    for(int i = 0; i < L; i++){
        if(ans[i] == res[i]){
            cnt++;
        }
    }

    return cnt;
}

/* blowの判定処理
引数: 正解の配列, 入力した配列, hitのフラグ配列
戻り値: blowの数(hitした部分は除く)
*/
int blow(int *ans, int *res){
    int cnt = 0;
    
    for (int i=0; i<L; i++){
        for (int j=0; j<L; j++){
            if (ans[i] == res[j]){
                cnt++;
                break;
            }
        }
    }

    return cnt;
}

int main(void){
    int ans[L] = {1, 2, 1, 4, 5}; //正解
    int *res; //入力
    int hit_cnt; //hit数のカウント
    int blow_cnt; 

    hit_cnt = 0;
    while(hit_cnt != L){
        // 入力
        res = input();

        // 処理
        hit_cnt = hit(ans, res);
        blow_cnt = blow(ans, res);
        printf("hit: %d, blow: %d \n", hit_cnt, blow_cnt - hit_cnt);
    }


}