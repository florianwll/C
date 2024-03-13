#include <stdio.h>


typedef struct {
  int zaehler;
  int nenner;
} bruch_t;

void bruchErweitern(bruch_t* bruch, int faktor);
void bruchKuerzen(bruch_t* bruch);
void bruchMultiplikation(bruch_t* bruch, bruch_t mult);
void bruchInverse(bruch_t* bruch);


void bruchAusgabe(bruch_t* bruch){
    printf("%d/%d", bruch->zaehler, bruch->nenner);
}

void bruchEingabe(bruch_t* bruch){
    scanf("%d%d", &bruch->zaehler, &bruch->nenner);
}

void bruchAddition(bruch_t* bruch, bruch_t add){
    if(bruch->nenner == add.nenner){
        bruch->zaehler += add.zaehler;
        bruchKuerzen(bruch);
    }
    else{
        int nenner = bruch->nenner;
        bruchErweitern(bruch, add.nenner);

        bruchErweitern(&add, nenner);
        bruch->zaehler += add.zaehler;
        bruchKuerzen(bruch);
    }
}

void bruchSubtraktion(bruch_t* bruch, bruch_t sub){
    if(bruch->nenner == sub.nenner){
        bruch->zaehler -= sub.zaehler;
        bruchKuerzen(bruch);
    }
    else{
        int nenner = bruch->nenner;
        bruchErweitern(bruch, sub.nenner);
        bruchErweitern(&sub, nenner);
        bruch->zaehler -= sub.zaehler;
        bruchKuerzen(bruch);
    }
}

void bruchMultiplikation(bruch_t* bruch, bruch_t mult){
    bruch->zaehler *= mult.zaehler;
    bruch->nenner *= mult.nenner;
    bruchKuerzen(bruch);
}

void bruchDivision(bruch_t* bruch, bruch_t div){
    bruchInverse(&div);
    bruchMultiplikation(bruch, div);
    bruchKuerzen(bruch);
}

float bruchQuotient(bruch_t bruch){
    float Quotient = (float)bruch.zaehler / (float)bruch.nenner;
    return Quotient;
}

void bruchErweitern(bruch_t* bruch, int faktor){
    bruch->zaehler *= faktor;
    bruch->nenner *= faktor;
}

void bruchKuerzen(bruch_t* bruch){
    for(int i = bruch->zaehler; i > 1 ; i--){
        if(bruch->zaehler % i == 0 && bruch->nenner % i == 0){
            bruch->zaehler /= i;
            bruch->nenner /= i;
        }
    }
}

void bruchInverse(bruch_t* bruch){
    int zahl = bruch->zaehler;
    bruch->zaehler = bruch->nenner;
    bruch->nenner = zahl;
}

// int main() {
//     // Ihre main-Funktion oder anderer Code hier
//     return 0;
// }
