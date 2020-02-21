#include<stdio.h>
#include<conio.h>
#include<math.h>
float xl,e,xu,xr,fxu,fxl,fxuxr,fxrxl,xa,xn,fxr;
int y=1;
float calculo()
{
    fxu=pow(xu,3)+(4*pow(xu,2))-10;
    fxl=pow(xl,3)+(4*pow(xl,2))-10;
    xr=xu-(((fxu)*(xu-xl))/(fxu-fxl));
    printf("\n\nLa interacion: %i\n\nDio como resultado: %.6f",y,xr);
    xa=xn;
    xn=xr;
    y=y+1;
}
float compara()
{
    fxr=pow(xr,3)+(4*pow(xr,2))-10;
    fxuxr=fxu*fxr;
    fxrxl=fxr*fxl;
    if(fxuxr>0)
    {
        xu=xr;
    }else if(fxuxr<0)
    {
        xl=xr;
    }else if(fxuxr==0 || fxrxl==0)
    {
        printf("\n\nEl valor de la raiz es: %.6f",xr);
    }
}
float error()
{

    e=fabs(xn-xa);
    if(y>2)
    {
    printf("\n\nEl error es de: %.6f",e);
}}
float ciclo()
{
    do
    {
        calculo();
        compara();
        error();
    }while(e>=0.0001);
    if(e<0.0001)
    {
        printf("\n\nEl valor de la raiz es: %.6f",xr);
    }
}
float main()
{
    printf("\n\nEste programa calcula ppor biseccion la raiz de la funcion: x^3+4x^2-10 ");
    printf("\n\nTenga en cuenta que el error en la primera interacion no se cuenta ya que no hay xa y xn con las cuales comparar para entonces");
    printf("\n\nInserte los valores de xu y xl por favor");
    printf("\n\nValor de xl: ");
    scanf("%f",&xl);
    printf("\n\nValor de xu: ");
    scanf("%f",&xu);
    ciclo();
    return 0;
}
