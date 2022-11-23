#include <stdio.h>
#include <math.h>

#define HOCHZWEI(a) a * a
#define PYTHAGORAS(a,b) sqrt(HOCHZWEI((a)) + HOCHZWEI((b)))

int main() {
    double result = PYTHAGORAS(3, 4);
    double result2 = PYTHAGORAS(1+3, 2+1);

    printf("Pythagoras (3, 4): %f \n", result);
    printf("Pythagoras (1+3, 2+1): %f \n", result2);
}