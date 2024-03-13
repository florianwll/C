#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int sortieren(int *von, int *bis) {
    if (von >= bis - 1) {
        return 0;
    }

    int *min = von;
    int *aktuell = von + 1;
    int tausch = 0;

    while (aktuell < bis) {
        if (*aktuell < *min) {
            min = aktuell;
            tausch = 1;
        }
        aktuell++;
    }

    if (tausch) {
        swap(von, min);
    }

    return tausch + sortieren(von + 1, bis);
}


