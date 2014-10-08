#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>



double logaritmo(double x)
{
    double c0 = 1.0;
    double c1 = 1.0/3.0;
    double c2 = 1.0/5.0;
    double c3 = 1.0/7.0;
    double c4 = 1.0/9.0;
    double c5 = 1.0/11.0;
    double c6 = 1.0/13.0;

    double c = (x-1)/(x+1);

    return 2 * (
                       c0*(c)
                       + c1*((c)*(c)*(c))
                       + c2*((c)*(c)*(c)*(c)*(c))
                       + c3*((c)*(c)*(c)*(c)*(c)*(c)*(c))
                       + c4*((c)*(c)*(c)*(c)*(c)*(c)*(c)*(c)*(c))
                       + c5*((c)*(c)*(c)*(c)*(c)*(c)*(c)*(c)*(c)*(c)*(c))
                       + c6*((c)*(c)*(c)*(c)*(c)*(c)*(c)*(c)*(c)*(c)*(c)*(c)*(c))
                   );




}


int main(int argc, char **argv)
{

    int iteraciones;
    double entero;
    double final = 0;

    int opcion;
    while((opcion = getopt(argc, argv, "i:n:")) != -1)
    {
        switch(opcion)
        {
        case 'i':
            iteraciones = atoi(optarg);
            break;

        case 'n':
            entero = atof(optarg);
            break;

        default:
            printf("Error");
            break;

        }
    }

    for(unsigned int i = 0; i<iteraciones; i++)
    {
        final = logaritmo(entero);
    }

    printf("%f\n",final);
    return 0;

}
