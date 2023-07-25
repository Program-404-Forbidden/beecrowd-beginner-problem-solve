/*beecrowd | 1011 | Sphere*/
#include <stdio.h>
#include <math.h>
int main() {
    int R;
    scanf("%i", &R);
    printf("VOLUME = %0.3lf\n", ((4.0 * 3.14159 * pow(R,3))/3));
    return 0;
}
