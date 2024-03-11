#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// int permatcheck(const int** p, int laenge);

// #define N 2

// int main() {
//   int inhalt[N*N] = {1,0,0,1};
//   int *matrix[N];
//   matrix[0] = &inhalt[0];
//   matrix[1] = &inhalt[N];
//   printf("%d\n",permatcheck((const int**)matrix,N));
// }

int permatcheck(const int** p, int laenge){
    int found = 0;
    for(int x = 0; x < laenge; x++){
        for(int y = 0; y < laenge; y++){
            if(p[x][y] != p[y][x] || !(p[x][y] == 1 || p[x][y] == 0)){
                return 0;
            } else found += p[x][y]; 
        }
    }

    if(found == laenge){
        return 1;
    }
    else{
        return 0;
    }

}