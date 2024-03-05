#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int* abb;
unsigned int versuche = 0;

void generate(void);
int test(unsigned int);
char * toBin(unsigned int);

int main (void){
    generate();
    unsigned int key = 0000000000000000000000000000000;
    for (int i = 0; i < 32; i++) {
        // Flip the i-th bit of the key
        unsigned int modified_key = key ^ (1 << i);
    }






    return 0;
}


/* Diese Funktion liefert die Anzahl der richtigen Bits des übergebenen Schlüssels zurück.
Falls 32 zurückgeliefert wird, war der Schlüssel richtig und die Tür öffnet sich.
*/
int test(unsigned int toTest)
{
int rightBits = 0;
int i = 0;
for(; i< 32 ; i++){
 unsigned int x = 1 << i;
 if(! ~((toTest & x) ^ (*abb| ~x))){
  rightBits++;
 }
}
if(rightBits == 32){
 printf ("\nGratulation !\n\n");
 printf ("Die Tuer ist offen.\n");
 printf ("So sahen Schluessel und Schloss aus \n");
 printf ("Schloss    : %32s \n", toBin(*abb));
 printf ("Schluessel : %32s \n", toBin(~*abb));
 exit(0);
}else{
 printf ("%d . Versuch, %d richtige Bits \n", ++versuche, rightBits);
 return rightBits;
}
}

/*Hier wird das zufällige Schloss generiert. Bitte nicht veraendern sonst geht der Spaß verloren. */
void generate(void)
{
 printf ("\nSchloss wurde erstellt.\nViel Spass beim probieren.\n\n");
 unsigned int secret;
 abb = (unsigned int*) malloc (sizeof(unsigned int));
 srand ( time(NULL) );
 secret = rand();
 *abb = secret;
}

/*Konvertierungsfunktion zur Ausgabe der Binaerrepraesentation einer Zahl*/
char * toBin(unsigned int num)
{
 static char retbuf[33];
 int i =0;
 for(; i<33 ; i++){
  retbuf[i]='0';
 }
 char *p;
 p = &retbuf[sizeof(retbuf)-1];
 *p = '\0';
 do {
  *--p = "0123456789abcdef"[num % 2];
  num /= 2;
 } while(num != 0);
 return retbuf;
}