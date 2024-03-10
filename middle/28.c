#include <stdio.h>

int main() {
    char *numbers[] = {
        "null", "eins", "zwei", "drei", "vier", "fünf", "sechs", "sieben", "acht", "neun",
        "zehn", "elf", "zwölf"
    };
    char *zehner[] = {
        "", "", "zwanzig", "dreißig", "vierzig", "fünfzig", "sechzig", "siebzig", "achtzig", "neunzig"
    };

    int input;
    scanf("%d", &input);
    
    if (input < 0 || input > 99) {
        printf("Nicht lesbar.");
    } else if (input < 13) {
        printf("%s", numbers[input]);
    } else if (input < 20) {
        if(input%10 == 6){
            printf("sechzehn");
        }
        else if(input%10 == 7){
            printf("siebzehn");
            }
        else{
            printf("%szehn", numbers[input % 10]); 
        }
    } else if (input % 10 == 0) {
        printf("%s", zehner[input / 10]);
    } else {
        if(input%10 == 1){
            printf("einund%s",  zehner[input / 10]);    
        }
        else{
            printf("%sund%s", numbers[input % 10], zehner[input / 10]); 
        }
    }

    return 0;
}
