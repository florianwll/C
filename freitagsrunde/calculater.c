#include <stdio.h>
#include <math.h>

int main(){
    double first, second;
    char opt;

    printf("geben Sie die erste Zahl ein:   ");
    scanf("%lf", &first);
    printf("geben Sie ihren Operator aus + - * / %% ^ ein:   ");
    scanf(" %c", &opt);
    printf("geben Sie die zweite Zahl ein:   ");
    scanf("%lf", &second);

    switch(opt){
        case '+':
            printf("Das Ergebnis ist: %lf\n", first + second);
            break;
        case '-':
            printf("Das Ergebnis ist: %lf\n", first - second);
            break;
        case '*':
            printf("Das Ergebnis ist: %lf\n", first * second);
            break;
        case '/':
            printf("Das Ergebnis ist: %lf\n", first / second);
            break;
        case '%':
            printf("Das Ergebnis ist: %d\n", ((int)first % (int)second));
            break;
        case '^':
            printf("Das Ergebnis ist: %lf\n", pow(first, (int)second));
            break;
        default:
            printf("bitte wählen vorgegebenen Operator!");
            break;

    }
    return 0;

}