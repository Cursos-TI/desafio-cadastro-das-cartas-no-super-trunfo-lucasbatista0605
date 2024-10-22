
#include<stdio.h>
int main(){
     int codigo;
     float area,Pib,densidadepopulacional,PIBpercapita,populacao;
     char nome[50];

     printf("digite código do país: \n");
     scanf("%d", &codigo);

     printf("digite a área: \n");
     scanf("%f", &area);

     printf("digite o pib: \n");
     scanf("%e", &Pib);

     printf("digite o nome: \n");
     scanf("%s", &nome);

     printf("digite sua população: \n");
     scanf("%f", &populacao);

     densidadepopulacional= (area/populacao);
 
     PIBpercapita= (Pib/populacao);   

     printf("código do país: %d - área: %f",codigo,area);
     printf("pib: %e - nome:%s", Pib,nome);
     printf("população: %f",populacao);
     printf("densidadepopulacional:%f - PIB per capita:%f", densidadepopulacional,PIBpercapita);
}