 
 
 #include<stdio.h>
 int main(){

     //Declaration of array
    int num[3][2];

    // Definition of 2D Array
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("Enter value for position %d%d ---> ", i, j);
            scanf("%d", &num[i][j]);
        }
    } 
    
    // output the value from 2D Array
   for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("value for position %d%d ---> %d\n", i, j, num[i][j]);
        }
    } 
    return 0;
 }
