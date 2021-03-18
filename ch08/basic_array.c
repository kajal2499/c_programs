 
 
 #include<stdio.h>
 int main(){
    int num[5];
    // Insert Value in Array
    for(int i = 0; i < 5; i++){
        printf("Enter value for position %d th ---> " , i+1);
        scanf("%d", &num[i]);
    } 

    // output the value from Array
    for(int i = 0; i < 5; i++){
        printf("value in num[%d] is %d" , i, num[i]);
        
    } 
    return 0;
 }
