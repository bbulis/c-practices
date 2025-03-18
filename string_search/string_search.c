#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int *search(char *target, char *search_term) {
    int *target_index = malloc(sizeof(int));
    target_index = 0;
    int search_term_index = 0;

    int target_length = strlen(target);

    while (*target_index < target_length) {
        search_term_index = 0;
        while (target[*target_index + search_term_index] == search_term[search_term_index]) {
            search_term_index++;
            if (search_term_index == (search_term_index -1)) {
                return target_index;
            }
        }
    }
    return NULL;
}

int main() {
    FILE *target_file;
    char target_file_content[200];
    target_file = fopen("content.txt", "r");
    fgets(target_file_content, 200, target_file);

    char search_term[100];

    printf("Inhalt des Files\n\n%s\n\n", target_file_content);

    printf("Bitte geben sie eine Zeichenkette ein, nach welcher gesucht werden soll\n");
    scanf("%s", search_term);
    printf("Sie haben eingegeben: %s\n", search_term);

    int *index = search(target_file_content, search_term);
    printf("%p", index);

    if (index == NULL) {
        printf("Eingabe wurde nicht in Text gefunden");
        return 1;
    }

    printf("String gefunden an Stelle %d\n", *index);
    return 0;
}
