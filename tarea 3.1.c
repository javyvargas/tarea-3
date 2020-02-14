#include <stdio.h>
#include <conio.h>
#include<math.h>>
float funcion(float);
int main()
{
int it_max,it_min,xi=2;
float gx,error_aprox,error_min,test,xr;
printf("\n METODO PUNTO FIJO \n\n");
printf ("\n Programa que calcula la raíz de la función 2x*x-x-5 \n " );
printf("\n Introduce el numero de iteraciones maximas\n");
scanf("%f",&it_max);
printf("Introduce el error minimo del calculo\n");
scanf("%f",&error_min);
do{
it_min=0;
it_min++;
gx=sqrt((xi+5)/2);
xi=gx;
xr=gx;
error_aprox=fabs(xr-gx);
}
while(error_aprox>error_min && it_min<it_max);
printf("\n Iteracion    Raiz     Error aprox\n");
printf("\n%i    %f    %f",it_min,xr,error_aprox);
    return 0;
}
float funcion(float x)
{
    return 2*x*x-x-5;
}
