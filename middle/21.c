#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int strendX(const char *s, const char *t) {
    int length1 = strlen(s);
    int length2 = strlen(t);
    if (length2 > length1) {
        return 0; // t ist länger als s, also kann es nicht am Ende von s stehen
    }
    // Vergleichen Sie die letzten 'length2' Zeichen von s mit t
    return strcmp(s + length1 - length2, t) == 0;
}


char *strchrX(const char *s, int c) {
    for (int i = strlen(s) - 1; i >= 0; i--) {
        if (s[i] == c) {
            return (char *)&s[i]; // Rückgabe des Zeigers auf das gefundene Zeichen
        }
    }
    return NULL;
}

char *strstrX(const char *s, const char *t) {
    if (*t == '\0') {
        return (char *)s; // Wenn t leer ist, geben Sie s zurück
    }

    while (*s != '\0') {
        if (strncmp(s, t, strlen(t)) == 0) {
            return (char *)s; // Rückgabe des Zeigers auf den gefundenen Teilstring
        }
        s++; // Verschieben des Zeigers zum nächsten Zeichen in s
    }

    return NULL; // Wenn t nicht in s gefunden wird, geben Sie NULL zurück
}

