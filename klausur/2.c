typedef struct {
  int zaehler;
  int nenner;
} bruch_t;

void bruchErweitern(bruch_t* bruch, int faktor){
    bruch->zaehler *= faktor;
    bruch->nenner *= faktor;
}

int compare_rational( bruch_t x, bruch_t y ){
    if(y.nenner < 0){
        bruchErweitern(&y, -1);
    }
    if(x.nenner < 0){
        bruchErweitern(&x, -1);
    }
    if(x.zaehler*y.nenner == x.nenner*y.zaehler){
        return 0;
    }
    else if(x.zaehler*y.nenner < x.nenner*y.zaehler){
        return -1;
    }
    else{
        return 1;
    }
}



