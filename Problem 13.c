<<<<<<< HEAD
/*beecrowd | 1012 | Area*/
#include <stdio.h>
int main() {
    double A, B, C;
    scanf("%lf%lf%lf", &A, &B, &C);
    printf("TRIANGULO: %0.3lf\n", (A*C)/2);
    printf("CIRCULO: %0.3lf\n", 3.14159*(C*C));
    printf("TRAPEZIO: %0.3lf\n", ((A+B)/2)*C);
    printf("QUADRADO: %0.3lf\n", B*B);
    printf("RETANGULO: %0.3lf\n", A*B);
    return 0;
}
=======
#include <stdio.h>

    int main()
    {
     double a, b, c;

     scanf("%lf %lf %lf", &a, &b, &c);
     printf("TRIANGULO: %.3lf\n", (a * c) / 2);
     printf("CIRCULO: %.3lf\n", c * c * 3.14159);
     printf("TRAPEZIO: %.3lf\n", ((a + b) / 2) * c);
     printf("QUADRADO: %.3lf\n", b * b);
     printf("RETANGULO: %.3lf\n", a * b);

     return 0;
    }
>>>>>>> 4c48352711567a6279f398096a6cbf35da103498
