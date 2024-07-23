#include<stdio.h>
void main()
{
    float population=1441981744,illiterate,men,women,lwomen,lmen,iwomen,imen;
    women= population*48.4/100;
    lwomen=women*62.84/100;
    iwomen=women-lwomen;
    printf("total illiterate women populaton= %.2f",iwomen);
    men=population-women;
    lmen=men*80.95/100;
    imen=men-lmen;
    printf("\ntotal illiterate men population = %.2f",imen);
     printf("\nNAME = Thummar Darshan ");
    printf("\n ID=24TCEVT0");
}
