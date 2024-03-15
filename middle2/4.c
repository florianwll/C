#include <stdio.h>
#include <math.h>

int main(){
    int length, schritt, count = 1, bevor, counter;
    while(scanf("%d%d", &length, &schritt) != EOF){
        count = 1;
        counter = 0;
        bevor = 0;
        if(length == 1){
            printf("1\n");
            return 0;
        }
        int array[length];
        int arraycopy[length];
        for(int i = 0; i < length; i++){
            array[i] = i + 1; 
        }

        array[(schritt-1) % length] = 0;
        arraycopy[(schritt-1) % length] = 1;
        bevor=(schritt-1) % length;
        count++;

        while(count <= length){
            int step = 1;
            while(step <= schritt){
                if(array[(bevor + step + counter) % length] == 0){
                    counter++;
                }
                else{
                    step++;
                }   
            }
            
                array[(bevor + schritt + counter) % length] = 0;
                arraycopy[(bevor + schritt + counter)  % length] = count;
                count++;
                bevor = (bevor + schritt + counter) % length;
                counter = 0;
            
        }

        for(int i = 0; i < length; i++){
            printf("%d ", arraycopy[i]);
        }
        printf("\n");
    }
    return 0;
}