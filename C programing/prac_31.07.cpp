//CH.SC.U4CSE25015
#include <stdio.h>
int main(){
    int book[5][4],sum = 0;
    int highest=0;
    int i,j;
    int avg[7]; 
    for(i = 0; i < 5; i++){
        printf("Enter the book in shelf %d: ", i + 1);
        for(j = 0; j < 4; j++){
            scanf("%d", &book[i][j]);
        }
    }
    printf("\nBooks in each shelf : \n");
    for(i = 0; i < 5; i++){
        printf("Shelf %d: ", i + 1);
        for(j = 0; j < 4; j++){ 
            printf("%d\t", book[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 5; i++){ 
        sum = 0;
        for(j = 0; j < 4; j++){
            sum += book[i][j];
        }
        avg[i] = sum / 4.0;
        if(avg[i] > avg[highest]){
            highest = i;
        }
    }
    return 0;
}
