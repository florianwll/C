char *substitute(const char *source, const char *target, const char *text) {
    char *translate = (char *)malloc((strlen(text) + 1) * sizeof(char));
    if (translate == NULL)
        return NULL; 

    for (int i = 0; i < strlen(text); i++) {
        int found = 0;
        for (int j = 0; j < strlen(source); j++) {
            if (text[i] == source[j]) {
                translate[i] = target[j];
                found = 1;
                break;
            }
        }
        if (!found) {
            free(translate);
            return NULL;
        }
    }
    translate[strlen(text)] = '\0'; 

    return translate;
}
