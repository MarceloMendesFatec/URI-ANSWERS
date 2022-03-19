#include <stdio.h>
#include <math.h>
/*fórmula para calcular o volume é: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159.*/
int main()
{
 double r;

 scanf("%lf", &r);
 printf("VOLUME = %.3lf\n", (4 * 3.14159 * pow(r, 3)) / 3);

 return 0;
}
