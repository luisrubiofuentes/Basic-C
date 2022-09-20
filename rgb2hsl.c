#include <stdio.h>
#include <math.h>


int main()
{

    int rojo=0,verde=0,azul=0;
    float r=0,g=0,b=0,cmax=0,cmin=0,delta=0,H=0,S=0,L=0;


    do
    {
        printf("\nRojo(0-255)?: ");
        scanf("%d",&rojo);

        if(rojo<0  || rojo>255)
        {
            printf("\nError en el valor. Debe estar en el intervalo [0-255]");
        }

    }
    while(rojo<0 || rojo>255 );

    do
    {
        printf("\nVerde(0-255)?: ");
        scanf("%d",&verde);

        if(verde<0 || verde>255)
        {
            printf("\nError en el valor. Debe estar en el intervalo [0-255]");
        }

    }
    while(verde<0 || verde>255 );

    do
    {
        printf("\nAzul(0-255)?: ");
        scanf("%d",&azul);

        if(azul<0 || azul>255)
        {
            printf("\nError en el valor. Debe estar en el intervalo [0-255]");
        }

    }
    while(azul<0 || azul>255 );


    r=(rojo/255.0);
    g=(verde/255.0);
    b=(azul/255.0);

    if (r>g && r>b)
    {
        cmax=r;
    }
    else if(g>r && g>b)
    {
        cmax=g;
    }
    else
    {
        cmax=b;
    }
    if (r<g && r<b)
    {
        cmin=r;
    }
    else if(g<r && g<b)
    {
        cmin=g;
    }
    else
    {
        cmin=b;
    }
    delta=cmax-cmin;

    if(delta==0)
    {
        H=0;
        S=0;
    }
    else if (cmax==r)
    {
        H=60*(fmod(((g-b)/delta),6));
    }
    else if (cmax==g)
    {
        H=60*((((b-r)+2)/delta));
    }
    else if(cmax==b)
    {
        H=60*((((r-g)+4)/delta));
    }

    L=(cmax+cmin)/2;

    if(delta!=0)
    {
        S=(delta/(1-fabsf((2*L)-1)));
    }

    printf("\n El color RGB (%d,%d,%d) en formato HSL es (%d ,%d ,%d )",rojo,verde,azul,(int)round(H),(int)round(S*100),(int)round(L*100));

}
