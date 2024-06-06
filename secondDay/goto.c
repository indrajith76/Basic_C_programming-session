#include<stdio.h>

int main(){
    int i = 10;

    start:
        printf("%d\n", i);
        i--; 
        if(i != 0) goto start;

    
}