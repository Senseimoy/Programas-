#include<stdio.h>
#include<conio.h>
#include<math.h>
float x,xr,e,xn,xa;
int y=1;
float Calculo()
{
    xr=sqrt((x+5)/2);
    printf("\n\nLa interacion: %i \n\nArrojo: %.4f \n\nCon  un error de: %.4f",y,xr,e);
    x=xr;
    xa=xn;
    xn=xr;
    y=y+1;
}
float error()
{
    e=fabs(xn-xa);
    if(e>1 && y>2)
    {
    printf("\n\nEl programa ha fallado");
    }
    if(y>20)
    {
    printf("\n\nEl programa no funciono");
    }
    if(e<0.01)
    {
    printf("\n\nEl valor de la raiz es: %.4f",xr);
    }
}
float ciclo(xr)
{
    do
    {
    Calculo();
    error();
    }while (e>.0001);

}
int main ()
{
    printf("\n\nEste programa resuelve la ecuacion: 2X^2-x-5");
    printf("\n\nTenga en cuenta que en las primeras 2 interaciones el error no se cuenta debido a que aun no tenemos una xn y xa que comparar");
    printf("\n\nInserte el valor inicial: ");
    scanf("%f",&x);
    ciclo();
    return 0;
}
