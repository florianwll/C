// #include <stdio.h>
// #include <stdlib.h>

// int permtest( const unsigned int* p, int laenge);
// int* array();

// int main(){
//     int laenge;
//     scanf("%d", &laenge);
//     int perm[laenge];
//     for (int i = 0; i < laenge; i++)
//         scanf("%d", &perm[i]);
    
//     printf("%d\n", permtest(perm,laenge));
//     return 0;
// }

int permtest( const unsigned int* p, int laenge){
    if (p == NULL || laenge == 0) {
        return 0;
    }
    int array[laenge];
    for (int i = 0; i < laenge; i++)
        array[i] = i+1;
    
    for (int i = 0; i < laenge; i++) {
        if (*(p+i) > laenge || *(p+i) < 1 || array[*(p+i)-1] == 0)
            return 0;
        array[*(p+i)-1] = 0;
    }

    return 1;
}

