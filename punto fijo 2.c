#include<stdio.h>
#include<conio.h>
#include<math.h>
float x,xr,e,xn,xa;
int y=1;
float calculo()
{
     xr=exp(-x);
     printf("\n\nLa interacion %i\n\nHa dado como resultado: %.6f",y,xr);
     x=xr;
     xa=xn;
     xn=xr;
     y=y+1;

}
float error()
{
    e=fabs(xn-xa);
    printf("\n\nCon un error de: %.6f",e);
}
float ciclo()
{
    do
    {
    calculo();
    error();
}while(e>0.0001);
if(e<.0001)
{
    printf("\n\nEl valor de la raiz es: %.6f",xr);
}
}
float main()
{
    printf("\n\nEste programa resuelve la ecuacion: e^(-x)-x");
    printf("\n\nTenga en cuenta que en las primeras 2 interaciones el error no se cuenta debido a que aun no tenemos una xn y xa que comparar");
    printf("\n\nInserte el valor inicial: ");
    scanf("%f",&x);
    ciclo();
    return 0;
}
