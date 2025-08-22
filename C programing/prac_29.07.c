//CH.SC.U4CSE25015
#include <stdio.h>
int main(){
    float temp[7][3],sum = 0;
    int highest=0;
    int i,j;
    float avg[7]; 
    for(i = 0; i < 7; i++){
        printf("Enter the temperature (morning, afternoon, night) for Day %d: ", i + 1);
        for(j = 0; j < 3; j++){
            scanf("%f", &temp[i][j]);
        }
    }
    printf("\nTemperatures for each day:\n");
    for(i = 0; i < 7; i++){
        printf("Day %d: ", i + 1);
        for(j = 0; j < 3; j++){ 
            printf("%.2f\t", temp[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 7; i++){ 
        sum = 0;
        for(j = 0; j < 3; j++){
            sum += temp[i][j];
        }
        avg[i] = sum / 3.0;
        if(avg[i] > avg[highest]){
            highest = i;
        }
    }
    printf("\nAverage temperatures for each day:\n");
    for(i = 0; i < 7; i++){
        printf("Day %d: %.2f\n", i + 1, avg[i]);
    }
    printf("\nDay %d has the highest average temperature of: %.2f\n", highest + 1, avg[highest]);
    return 0;
}
