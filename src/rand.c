#include <stdio.h>
#include <stdlib.h>
#include <time.h>

<<<<<<< HEAD
int random_int(int max) {
    return rand()*max / RAND_MAX;
}

=======
void init_rand(void)
{
    srand(time(NULL));
>>>>>>> 88e5683ac0f2e93cd553f8c8c0d5191b75935dbd
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