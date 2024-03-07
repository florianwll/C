#include <stdio.h>
#include <math.h>

double horn(double list[], int anzahl, double x, int counter);

int main(){
    int anzahl, counter;
    double x;
    scanf("%d",&anzahl);
    double zahlen[anzahl];
    for(int i = 0; i <= anzahl; i++){
        double number;
        scanf("%lf", &number);
        zahlen[i] = number;
    }

    while(scanf("%lf", &x) != EOF){
        printf("%lf\n", horn(zahlen, anzahl, x, anzahl));

    }
    return 0;
}

double horn(double list[],int anzahl, double x, int counter){
    // printf("\nCounter: %d\n", counter);
    // printf("Element: %lf\n", list[counter]);
    // printf("Anzahl: %d\n", anzahl);
    // printf("x: %lf\n", x);
    if(counter == 0){
        return list[counter];
    }
    else{
        return list[counter] + (x * horn(list, anzahl, x, counter-1));
    }

}

