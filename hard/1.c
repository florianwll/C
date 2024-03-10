#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int datum2int(int tag, int monat){
    int days_per_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;
    sum += tag;
    for(int i = 0; i < monat-1; i++){
        sum+= days_per_month[i];
    }
    return sum;
}

void int2datum(int tage, int* ergebnis){
    int days_per_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int count = 1;
    for(int i = 0; i < 12; i++){
        if(tage <= days_per_month[i]){
            ergebnis[0] = tage;
            ergebnis[1] = count;
            break;
        }
        else{
            tage -= days_per_month[i]; 
            count++;
        }
    }    
}