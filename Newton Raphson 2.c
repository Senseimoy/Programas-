#include<stdio.h>
#include<conio.h>
#include<math.h>
float x,fx,dfx,X,e,xn,xa;
int y=1;
float calculo()
{
    fx=exp(-x)-x;
    dfx=-exp(-x)-1;
    X=x-(fx/dfx);
    printf("\n\nLa interacion: %i\n\nDio como resultado: %.6f",y,X);
    xa=xn;
    xn=X;
    y=y+1;
    x=X;
}
float error()
{
    e=fabs(xn-xa);
    if(y>2)
    {
        printf("\n\nCon un error de: %.6f",e);
    }
}
float ciclo()
{
    do
    {
        calculo();
        error();
    }while (e>0.0001);
    if(e<0.0001)
    {
        printf("\n\nEl valor de la raiz es: %.6f",X);
    }
}
float main()
{
    printf("\n\nEste programa calcula por el metodo de Newton Raphson la raiz de la siguiente ecuacion: e^(-x)-x");
    printf("\n\nInserte el valor inicial: ");
    scanf("%f",&x);
    ciclo();
    return 0;
}
