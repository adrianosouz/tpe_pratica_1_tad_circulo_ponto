#include <stdlib.h>
#include "ponto.h"
#include "circulo.h"
#define PI 3.14159
struct circulo
{
    Ponto *p;
    float r;
};

Circulo *circ_cria(float x, float y, float r)
{
    Circulo *c;
    c = (Circulo *)malloc(sizeof(Circulo));
    c->p = ponto_cria(x,y);
    c->r = r;
    return c;
}

void circ_libera(Circulo *c)
{
    pto_libera(c->p);
    free(c);
}

float circ_area(Circulo *c)
{
    return (PI*c->r*c->r);
}

float circ_raio(Circulo* c)
{
    return(c->r);
}



