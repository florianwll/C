// #include <stdio.h>

// int hauskauf(float sparen_emily, float sparen_sarah, int haus_kosten);

// int main(){
//     printf("%d", hauskauf(15000.0, 20000.42, 80000));
// }

int hauskauf(float sparen_emily, float sparen_sarah, int haus_kosten){
    int counter = 0;
    float zins = 1.015;
    while(sparen_emily + sparen_sarah < haus_kosten){
        if(counter % 36 == 0){
            zins+=0.001;
        }
        sparen_emily = sparen_emily * zins;
        sparen_sarah = sparen_sarah * zins;
        sparen_emily += 1000;
        sparen_sarah += 1000;
        counter++;
    }
    return counter;
}