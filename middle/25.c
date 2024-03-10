char* convert_message(const char *message, char receiver) {
    if (receiver != 'M' && receiver != 'L') {
        return "Mit dir schreib ich nicht!";
    }
    
    int length = strlen(message);
    char *txt = (char *)malloc((length + 1) * sizeof(char)); // +1 für das Nullzeichen am Ende
    if (txt == NULL) {
        return NULL; // Fehler bei der Speicherreservierung
    }

    int count = 0;
    for (int i = 0; i < length; i++) {
        if (message[i] == ' ') {
            txt[i] = ' ';
            continue; // Leerzeichen überspringen und mit der nächsten Iteration fortfahren
        }
        
        if (receiver == 'M') {
            if (count % 2 == 0) {
                txt[i] = tolower(message[i]);
            } else {
                txt[i] = toupper(message[i]);
            }
        } else { // receiver == 'L'
            if (count % 2 == 1) {
                txt[i] = tolower(message[i]);
            } else {
                txt[i] = toupper(message[i]);
            }
        }
        
        count++;
    }
    txt[length] = '\0'; // Nullzeichen am Ende der neuen Zeichenkette
    
    return txt;
}
