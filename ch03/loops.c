/**********************************
 * while
 * do..while
 * for
 * 
 * Structure
 * 1. initialization
 * 2. condition check
 * 3. perform operation
 * 4. increment or decrement variable
 * 5. repeat from 2nd step
 * 
 * 
 * ********************************/
#include<stdio.h>
int main(){
    //int i;
    //while()
    // while(i < 0){ // i = 0 , 1 ,2, 3, 4, 5 
    //     printf("\n%d", i);
    //     //i =  i + 1; 
    //     i++;
    // }

    //do...while
    // do{
    //     printf("\n%d", i);
    //     //i = i + 1;
    //     i++;
    // }while(i < 5);

    //for
    // for(i = 0 ; i < 5; i++){
    //     printf("\n%d", i);
    // }

    // i = 0;
    // for(;;){
    //     printf("\n%d", i);
    //     i = i + 2;
    // }

    for(int i = 0; i < 5; i++){ // i = 0 1 2 3 4 5

        for(int j = 0; j < 5; j++){ // j when i = 0 = 0 1 2 3 4 5
                                   // j when i = 1 = 0 1 2 3 4 5
                                   // j when i = 2 = 0 1 2 3 4 5
                                   // j when i = 3 = 0 1 2 3 4 5
                                   // j when i = 4 = 0 1 2 3 4 5

            printf("Ganesh");   // 5 * 5 = 25 // n * n = n^2 (Complexity Time )
        }
            
    }


    for(int i = 0; i < 5; i++){ // i = 0 1 2 3 4 5

        for(int j = 0; j < 5; j++){ // j = 0 1 2 3 4 5

            for(int k = 0; k < 5; k++){ 
               //i = 0  // j = 0 --> 5 times
                        // j = 1 --> 5 times
                        // j = 2 --> 5 times
                        // j = 3 --> 5 times
                        // j = 4 --> 5 times

            
                // i = 1 // j = 0 --> 5 times
                        // j = 1 --> 5 times
                        // j = 2 --> 5 times
                        // j = 3 --> 5 times
                        // j = 4 --> 5 times
                                                                  
                
                printf("Ganesh");   // 5 * 5 * 5= 125 // n * n * n = n^3 (Complexity Time )
            }
            
        }

    }

    return 0;
}