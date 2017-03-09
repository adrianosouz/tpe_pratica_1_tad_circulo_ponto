#include <stdlib.h>
#include "ponto.h"

struct ponto
{
    float x;
    float y;
};

Ponto *ponto_cria(float x, float y)
{
    Ponto *p;
    p = (Ponto *)malloc(sizeof(Ponto));
        if(p == NULL)
        {
        printf("memoria insuficiente");
        exit(1);
    }
    p->x = x;
    p->y = y;
    return p;
}

void pto_libera(Ponto *p)
{
    free(p);
}

void pto_atribui(Ponto *p,float x, float y)
{
    x = p->x;
    y = p->y;
}

void pto_acessa(Ponto *p,float *x, float *y)
{
    *x = p->x;
    *y = p->y;
}

float pto_distancia(Ponto *p1, Ponto *p2)
{
    float dx = (p2->x) - (p1->x);
    float dy = (p2->y) - (p1->y);

    return sqrt(dx *dx + dy*dy);

}
