int* rt(int *n){
    *n++;
    return n;
}

int* ch0(int *m, int *n){
    
}

int* ch1(){

}

int ack(int *m , int *n){
    if (*m == 0){
        n = rt(n);
    }else if (n == 0){
        n = ch1(m ,n)
    }
}

int main(void){
    int m = 2;
    int n = 2;
    printf("%d \n", ack(m, n));
}