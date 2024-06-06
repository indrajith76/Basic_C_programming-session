#include<stdio.h>

int main(){
    int weekTemp[7];
    int avg, sum = 0;

    for(int i = 0; i < 7; i++){
        printf("Enter the Temp of Day %d: ", i+1);
        scanf("%d", &weekTemp[i]);
    }



    for(int i = 0; i < 7; i++){
        sum += weekTemp[i];
    }
    avg = sum / 7;
    printf("Average Temp: %d", avg);

}