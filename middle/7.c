#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LIMIT 1000

void sieveOfEratosthenes(int limit) {
    // Erstellen Sie ein Array zum Markieren von Primzahlen. Initialisieren Sie alle Elemente als "true".
    // Ein "true"-Wert an der Indexposition i bedeutet, dass i eine Primzahl ist.
    // Ein "false"-Wert bedeutet, dass i keine Primzahl ist.
    bool *prime = (bool *)calloc(limit + 1, sizeof(bool));

    if (prime == NULL) {
        printf("Speicher konnte nicht allokiert werden.");
        return;
    }

    // Markieren Sie alle Zahlen als potenzielle Primzahlen.
    for (int i = 2; i <= limit; i++) {
        prime[i] = true;
    }

    // Durchlaufen Sie das Array und markieren Sie alle Vielfachen von Zahlen als keine Primzahlen.
    for (int p = 2; p * p <= limit; p++) {
        if (prime[p] == true) {
            // Markieren Sie alle Vielfachen von p als keine Primzahlen.
            for (int i = p * p; i <= limit; i += p)
                prime[i] = false;
        }
    }

    // Geben Sie die berechneten Primzahlen aus.
    for (int p = 2; p <= limit; p++) {
        if (prime[p])
            printf("%d ", p);
    }

    free(prime);
}

int main() {
    sieveOfEratosthenes(LIMIT);
    return 0;
}
