#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

typedef struct circulo Circulo;
Circulo *circ_cria(float x, float y, float r);
void circ_libera(Circulo *c);
float circ_area(Circulo *c);
float circ_raio(Circulo* c);

#endif // CIRCULO_H_INCLUDED
