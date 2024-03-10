#include <stdio.h>
#include <stdlib.h>

int main() {
    int input, base;
    scanf("%d %d", &input, &base);
    
    int inputC = input, count = 0;
    while (inputC > 0) {
        inputC /= base;
        count++;
    }
    
    char *length = (char*)malloc((count + 1) * sizeof(char));
    
    for (int i = count - 1; i >= 0; i--) {
        int value = input % base;
        if (value > 9) {
            length[i] = 'a' + value - 10; 
        } else {
            length[i] = '0' + value; 
        }
        input /= base;
    }
    length[count] = '\0';
    
    printf("%s\n", length);
    
    free(length); 
    return 0;
}
