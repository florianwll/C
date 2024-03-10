#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int countA = 0, countB = 0;
    char txt[160];
    char a[160];
    char b[160];
    int count = 0;


    // Lesen der Eingabezeichenkette txt
    while ((txt[count] = getchar()) != '\n') {
        count++;
        if (count >= 159) break; // Überprüfen Sie, ob die Länge der Eingabe den Grenzwert überschreitet
    }

    // Iterieren über txt und aufteilen in a und b
    for (int i = 0; i < count; i++) {
        if ('a' <= txt[i] && txt[i] <= 'z') {
            b[countB] = txt[i];
            countB++;
        } else if ('A' <= txt[i] && txt[i] <= 'Z') {
            a[countA] = txt[i];
            countA++;
        }
    }

    a[countA] = '\0'; // Nullzeichen am Ende von a
    b[countB] = '\0'; // Nullzeichen am Ende von b

    printf("Nachricht an Toni: %s\nNachricht an Tomke: %s\n", a, b);

    return 0;
}
