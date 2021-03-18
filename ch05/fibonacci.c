#include<stdio.h>

// 0 1 1 2 3 5 8 13 ...

int main(){
    int m, i;
    for(int i = 0; i < 20; i++){
        printf("%d ", fabSeriesByRecurssion(i));
    }
    return 0;
}

void fabSeries(int n){
    int i = 0, j = 1, k, p = 3;
    printf(" %d", i);
    printf(" %d", j);

    while(p<=n){
        k = i + j;
        printf(" %d", k);
        i = j;
        j = k;
        p++;
    }
}

int fabSeriesByRecurssion(int n){
    if(n == 0 || n == 1){
        return n;
    } else{
        return fabSeriesByRecurssion(n - 1) + fabSeriesByRecurssion(n - 2);
    }
}