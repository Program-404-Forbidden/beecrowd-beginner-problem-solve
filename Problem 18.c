/*beecrowd | 1017 | Fuel Spent*/
#include <stdio.h>
int main() {
    int Time, Speed;
    scanf("%d%d", &Time, &Speed);
    float Distance = Time * Speed;
    printf("%0.3lf\n", Distance/12);
    return 0;
}
