#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Using %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        perror("Error when opening file");
        return 1;
    }

    int word_count = 0;
    int if_word = 0;
    int c;

    // reads each char in file
    while ((c = fgetc(file)) != EOF) {
        if (isspace(c)) {
            if (if_word) {
                word_count++;
                if_word = 0;
            }
        } else {
            if_word = 1;
        }
    }

    // checks if it should end while still inside a words
    if (if_word) {
        word_count++;
    }

    if (ferror(file)) {
        perror("Error reading file");
        fclose(file);
        return 1;
    }

    if (fclose(file) == EOF) {
        perror("Error closing file");
        return 1;
    }

    printf("Number of words: %d\n", word_count);

    return 0;
}