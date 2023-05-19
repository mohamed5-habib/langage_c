#include <stdlib.h>
#include <complex.h>

typedef struct
{
float real;
float imag;
}comple;

void main()
{
    comple nombre1,nombre2,res1,res2;
    printf("saisie la premier nombre complex ");
    scanf("%f %f",&nombre1.real,&nombre1.imag);
    printf("saisie la deuxieume nombre complex ");
    scanf("%f %f",&nombre2.real,&nombre2.imag);
    res1.real=nombre1.real+nombre2.real;
    res1.imag=nombre1.imag+nombre2.imag;
    printf("la somme est = %f %f i\n",res1.real,res1.imag);
    res2.real=(nombre1.real*nombre2.real)-(nombre1.imag*nombre2.imag);
    res2.imag=(nombre1.real*nombre2.imag)-(nombre1.imag*nombre2.real);
    printf("la produit est = %f %f i",res2.real,res2.imag);

}
