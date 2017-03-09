#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"
#include "circulo.h"

int main()
{

   float d, area1, area2, raio1,raio2;


   d = pto_distancia(ponto_cria(10, 2),ponto_cria(8.56, 4.91));
   area1 = circ_area(circ_cria(10, 2, 8.78));
   area2 = circ_area(circ_cria(8.56, 4.91, 20.78));
   raio1 = circ_raio(circ_cria(10, 2, 8.78));
   raio2 = circ_raio(circ_cria(8.56, 4.91, 20.78));

   printf("a area 1 eh %.2f\n",area1);
   printf("a area 2 eh %.2f\n",area2);
   printf("A distancia eh: %.2f",d);

    if(area1 > area2)
        printf("\na area 1 eh maior que a area 2\n");
    else if(area1 < area2)
        printf("\na area 2 eh maior que a area 1\n");
    else
        printf("\nas areas sao iguais\n");
    if(d + raio1 >= raio2)
        printf("\circ1 nao esta contido em cir2\n");
    else
        printf("\circ1 esta contido em circ2\n");

    return 0;
}
