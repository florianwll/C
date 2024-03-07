# C
Vorlesung mit Übung: Grundlagen der C-Programmierung (Blockkurs) (WiSe 2023/24)


Notizen

%d == int or dezimal
%f == float
%lf == double
%c == char(for ASCI)
%o == oktal
%h == hexa
%ld == long int

always: #include <stdio.h>
maybe also always #include <math.h>

for limits in d: #include <limits.h>
for limits in f: #include <float.h>

multiple scanf = scanf("%d%d",&a,&b);
ASCI = for(int i = 'A'; i <= 'z'; i++){}
bis zur Eingabe von CTRL-d: while(scanf("%d",&i) != EOF)
multiplikation = printf("%d", i*j);
2³ = pow(2,3)

bei funktionen vor main funktion einmal schreiben: int quadrat(int n) ... int main(){} ... int quadrat(int n){}

switch case:
switch (choise){
    case 1:
        break;
    default:
        break;
}

rekursiv:
function(x, y){
    if(
        function(x,y)
    )
    else()
}


when casting (int) in front for example when using pow()

array = int array[n]
