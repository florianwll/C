#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double horn(double *speicher, int anzahl, double number);

int main(){
    int anzahl;
    scanf("%d", &anzahl);
    double *speicher = (double*) malloc((anzahl+1) * sizeof(double));

    if(speicher == NULL){
        return -1;
    }
    for(int i = 0; i <= anzahl;i++){
        scanf("%lf", &speicher[i]);
    }
    double number;
    while(scanf("%lf", &number) != EOF){
        printf("%lf\n", horn(speicher, anzahl, number));
    }

    free(speicher);
    return 0;
}


double horn(double *speicher, int anzahl, double number) {
    if (anzahl == 0) {
        return speicher[0]; 
    } else {
        return speicher[anzahl] + number * horn(speicher, anzahl - 1, number);
    }
}


