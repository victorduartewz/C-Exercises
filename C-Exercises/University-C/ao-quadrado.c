#include <stdio.h>
#include <math.h>

int main()
{
    double raio, area;
    const double pi = 3.14159;
    scanf("%lf", &raio);
    area = raio * raio * pi;
    printf("A=%.4lf\n", area);

    return 0;
}