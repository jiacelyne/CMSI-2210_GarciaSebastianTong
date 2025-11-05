#include <stdio.h>
#include <time.h>

int main() {
    time_t start_time, end_time;
    double duration;
    int minutes, seconds;

    printf("This program will time how long you can hold your breath.\n");
    printf("Take a deep breath, then press the 'Enter' key.\n");
    printf("When you absolutely have to exhale, press the enter key again.\n");
    printf("The duration will be displayed in minutes and seconds.\n\n");

    printf("Ready? Press Ener to start holding your breath...");
    getchar();  // Wait for user to press Enter to start

    start_time = time(NULL);  // Record start time

    printf("\nHolding breath.. Press Enter when you need to exhale...");
    getchar();  // Wait for user to press Enter to stop

    end_time = time(NULL);  // Record end time
    duration = difftime(end_time, start_time);  // Calculate duration
    minutes = (int)duration / 60;  // Calculate minutes
    seconds = (int)duration % 60;  // Calculate seconds
    printf("\nYou held your breath for %d minutes and %d seconds.\n", minutes, seconds);
    return 0;
}