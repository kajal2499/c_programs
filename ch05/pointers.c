#include<stdio.h>

int main(){
    int i;
    int *j;
    int **k;
    i = 3;
    j = &i;
    k = &j;

    printf("%u\n", &i);
    printf("%u\n", &j);
    printf("%u\n", *j);
    printf("%d\n", *(&i));

    printf("-------------------------\n");
    
    printf("%u\n", &k);
    printf("%u\n", *k);
    printf("%d\n", **k);
    return 0;
}