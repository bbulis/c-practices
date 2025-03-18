#include <stdio.h>
#include <string.h>

/*

1. Wir geben bestimmte Daten in eine Funktion rein
2. Wir erwarten Daten in einem bestimmten Format
3. Wir können Funktionen mittels eines bestimmten Namens aufrufen
4. Funktionen führen Prozesse aus mit den übergebenen Daten

<RUECKGABE-TYP> <FUNKTIONS-NAME> (<PARAMETER-TYP> <PARAMETER-NAME>) {

}

strlen = string length

for (<zählvariable>; <voraussetzung>; <hochzählung>)

*/


int is_alpha(char *str) {
    // Holen uns die Länge vom String 
    int len_str = strlen(str);
    
    for(int i=0; i < len_str-1; i++) {
        if ((str[i+1] < str[i]) && (str[i] != '\0')) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char arr[] = "";
    int erg = is_alpha(arr);
    if (erg == 1) {
        printf("Cool wir haben eine %d", erg);
    } else if(erg == 0) {
        printf("Leider haben wir %d", erg);
    } else {
        printf("Fehler in der Programmierung. Wert ist %d", erg);
    }
}

