int is_perm( const int perm[], int length){
    if (perm == NULL || length <= 0) {
        return -1;
    }
    //printf("%d \n", *perm);

    for(int i = 1; i <= length; i++){
        for(int j = 0; j < length; j++){
            if(perm[j] <= 0 || perm[j] >length)
                return 0;
            if(perm[j] == i){
                //printf("%d + %d ist: %d == %d \n", *perm,  j, perm[j], i);
                break;
            }
            if(j == length-1)
                return 0; 
        }
    }

    return 1;
}
