#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD

int random_int(int max) {
=======
#include <time.h>

int random_int(int max)
{
>>>>>>> bc316a72be35bde1ca005b033b79fe6403e5cb33
    return rand() % max;
}

void init_rand(void) {
    srand(time(NULL));
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
    fprintf(stderr, "Usage: %s <number>\n", argv[0]);
    return EXIT_FAILURE;
    }
    int max = atoi(argv[1]);
    int result = random_int(max);
    printf("%d\n", result);
    return EXIT_SUCCESS;
}