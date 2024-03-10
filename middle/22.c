#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *strinv(const char *s) {
    char *inv = (char *)malloc((strlen(s) + 1) * sizeof(char));
    if (inv == NULL || inv == EOF) {
        free(inv);
        return NULL; 
    }
    for (int i = 0; i < strlen(s); i++) {
        inv[i] = s[strlen(s) - i - 1]; 
    }
    inv[strlen(s)] = '\0'; 
    return inv;
}

char *strconcat(const char *s, const char *t) {
    char con[strlen(s) + strlen(t) + 1]; 
    strcpy(con, s);
    strcat(con, t);
    return con;
}
