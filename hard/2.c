#include <stdio.h>
#include <stdlib.h>

int schaltjahr(int jahr) {
    return ((jahr % 4 == 0 && jahr % 100 != 0) || (jahr % 400 == 0));
}

int datum2int(int tag, int monat, int schalt) {
    int days_per_month[] = {31, 28 + schalt, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = tag;
    for (int i = 0; i < monat - 1; i++) {
        sum += days_per_month[i];
    }
    return sum;
}

int main() {
    const char *wochentage[] = {"Samstag", "Sonntag", "Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag"};

    int day, month, year;
    scanf("%d.%d.%d", &day, &month, &year);

    int sum = 0;
    for (int i = 1600; i < year; i++) {
        sum += 365 + schaltjahr(i);
    }

    sum += datum2int(day, month, schaltjahr(year));

    printf("%s\n", wochentage[sum % 7 -1]);
    return 0;
}
