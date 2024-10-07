#include<stdio.h>
int main(){
     int código;
     float área,Pib;
     char nome[50];

     printf("digite código do país: \n");
     scanf("%d", &código);

     printf("digite a área: \n");
     scanf("%e", &área);

     printf("digite o pib: \n");
     scanf("%e", &Pib);

     printf("digite o nome: \n");
     sacnf("%s", &nome);

     printf("código do país: %d - área: %e",código,área);
     printf("pib: %e - nome:%s", Pib,nome);
}