//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//
//%%%%%%%%%%% Solução analítica de Hagen Poiseuille %%%%%%%%%%%//
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//
//%%%%%%%%%%% Simulação simpleFoam - velocidade = (1 0 0) %%%%%//
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//
//%%%%%%%%%%%%% Elaborado por: Igor Beder Burti R. %%%%%%%%%%%%//
//%%%%%%%%%%%%%%% Última modificação: 16/04/2022 %%%%%%%%%%%%%%//
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double x, y, dx;
    FILE *arq;
    arq = fopen("solution.dat", "w");

    dx = 0.001;
    for (x = -0.5; x <= 0.5; x += dx){

        y = 1.4678*(1-pow(x/0.5, 2.0));
        fprintf(arq, "%.8g %.8g\n", x, y);

    }

    return 0;
}
