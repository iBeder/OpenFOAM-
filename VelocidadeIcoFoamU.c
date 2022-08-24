//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//
//%%%%%%%%%%%%% Arquivo com velocidade e coordenada %%%%%%%%%%%//
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//
//%%%%%%%%%%% Simulação icoFoam - velocidade = (1 0 0) %%%%%%%%//
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//
//%%%%%%%%%%%%% Elaborado por: Igor Beder Burti R. %%%%%%%%%%%%//
//%%%%%%%%%%%%%%% Última modificação: 16/04/2022 %%%%%%%%%%%%%%//
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double x, y;
    double Ux, Uy, Uz, p, vtk, arc, z;
    FILE *arq, *arq2;

    arq = fopen("s2_U.dat", "w");
    arq2 = fopen("data.dat", "r");

    while(fscanf(arq2, "%lf %lf %lf %lf %lf %lf %lf %lf %lf", &Ux, &Uy, &Uz, &p, &vtk, &arc, &x, &y, &z) != EOF){

        fprintf(arq, "%.8g %.8g\n", y, Ux);

    }
    
    return 0;
}
