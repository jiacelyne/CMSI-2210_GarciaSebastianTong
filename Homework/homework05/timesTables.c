#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Using %s <N>\n", argv[0]);
        return 1;
    }

    int N = atoi(argv[1]);
    if (N < 2) {
        fprintf(stderr, "N must be at least 2.\n");
        return 1;
    }

    int max_product = N * N;
    int width = 0;
    for (int temp = max_product; temp > 0; temp /= 10) {
        width++;
    }
    width++;

    // header row
    printf("%*s", width, "");
    for (int i = 2; i <= N; i++) {
        printf("%*d", width, i);
    }
    printf("\n");

    // printing the rows
    for (int i = 2; i <= N; i++) {
        printf("%*d", width, i);
        for (int j = 2; j <= N; j++) {
            printf("%*d", width, i * j);
        }
        printf("\n");
    }

    return 0;
}