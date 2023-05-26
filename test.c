#include<stdio.h>
#include<stdlib.h>

#define L 5
#define Min(a,b) ( ((a)>(b)) ? (b):(a) )
#define Max(a,b) ( ((a)<(b)) ? (b):(a) )

// フラグ配列の和を求める
int flag_sum(int *x){
    int num = 0;
    for(int i = 0; i<L; i++){
        num += x[i];
    }
    return num; 
}

// minって書くとエラー出すVSCodeなんなん？ -> マクロと勘違いしてる説 -> マクロ書いた
int int_min(int a, int b){
    if (a <= b){
        return a;
    }else{
        return b;
    }
}

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
int* hit(int *ans, int *res){
    int *flag;
    flag = (int *)calloc(L, sizeof(int));

    for(int i = 0; i < L; i++){
        if(ans[i] == res[i]){
            flag[i] = 1;
        }
    }

    return flag;
}

/* blowの判定処理
引数: 正解の配列, 入力した配列, hitのフラグ配列
戻り値: blowの数(hitした部分は除く)
*/
int blow(int *ans, int *res, int *flag){
    int cnt = 0;
    int ans_nums[10] = {0}; // 数値の有無を管理する配列. 配列のインデックスに要素数を格納する. 出来ればPythonのdict型みたいなものを使いたい. 
    int res_nums[10] = {0};

    // ans
    for (int i=0; i<L; i++){
        if(flag[i] == 1) continue;
        ans_nums[ans[i]] += 1;
    }

    // res
    for (int i=0; i<L; i++){
        if(flag[i] == 1) continue;
        res_nums[res[i]] += 1;
    }
    
    // 重複の確認
    for (int i=0; i<10; i++){
        cnt += int_min(ans_nums[i], res_nums[i]);
    }


    return cnt;
}

int main(void){
    int ans[L] = {1, 2, 1, 4, 5}; //正解
    int *res; //入力
    int hit_cnt; //hit数のカウント
    int blow_cnt; 
    int *hit_flag; //hitした部分の管理

    hit_cnt = 0;
    while(hit_cnt != L){
        // 入力
        res = input();

        // 処理
        hit_flag = hit(ans, res);
        hit_cnt = flag_sum(hit_flag);
        blow_cnt = blow(ans, res, hit_flag);
        printf("hit: %d, blow: %d \n", hit_cnt, blow_cnt);
    }


}
