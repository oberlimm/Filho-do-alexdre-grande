#include <stdio.h>

typedef struct{
    int peso; // peso em quilogramas
    int altura; // altura em centimetros

}PesoAltura;
    


int main(){
    PesoAltura pessoa;
    pessoa.peso =950;
    pessoa.altura =180;
    int i = 1;
    printf("Peso: %i,Altura: %i\n", pessoa.peso, pessoa.altura);
    return 0;
}
