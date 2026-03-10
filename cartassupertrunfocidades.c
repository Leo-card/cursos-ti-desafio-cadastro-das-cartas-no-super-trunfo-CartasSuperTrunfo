#include <stdio.h>

//primeiras cartas do jogo super trunfo de cidades

int main(){

//Informações da carta 1 - Vienna (Austria)
char estado1 = 'A';
char código1[4] = "A01";
char cidade1[20]= "Vienna";
int população1 = 2028289;
float área1 = 414.6;
float pib1 = 166.0;
int PontosTurísticos1 = 70;
int idade1 = 2000;

//Informações da carta 2 - Bangkok (Tailândia)

char estado2 = 'B';
char código2[4] = "B01";
char cidade2[20] = "Bangkok";
int população2 = 11500000;
float área2 = 1568.0;
float pib2 = 164.0;
int PontosTurísticos2 = 90;
int idade2 = 242;

//Calculos do pib per capta e da densidade populacional

//carta 1 - pibpercapta e densidade populacional
float pibpercapta1 = (pib1 * 1000000000) / população1;
float densidade1 = população1 / área1;

//carta 2 - pibpercapta e densidade populacional
float pibpercapta2 = (pib2 * 1000000000) / população2;
float densidade2 = população2 / área2;

//Calculo do super poder da carta 1
float SuperPoder1 = população1 + área1 + pib1 + PontosTurísticos1 + idade1 + pibpercapta1 + (1 / densidade1);

//Calculo do super poder da carta 2
float SuperPoder2 = população2 + área2 + pib2 + PontosTurísticos2 + idade2 + pibpercapta2 + (1 / densidade2);


//mostrar carta 1
printf("Carta 1\n");
printf("estado: %c\n", estado1);
printf("código: %s\n", código1);
printf("cidade: %s\n", cidade1);
printf("população: %d\n", população1);
printf("área: %.1f km2\n",área1);
printf("pib: %.1f Bilhões\n", pib1);
printf("pontos turísticos: %d\n", PontosTurísticos1);
printf("idade da cidade: %d anos\n", idade1);
printf("pib per capta: %.2f\n", pibpercapta1);
printf("densidade populacional: %.2f hab/km2\n", densidade1);
printf("super poder: %d\n\n", SuperPoder1);


//mostrar carta 2
printf("Carta 2\n");
printf("estado: %c\n", estado2);
printf("código: %s\n", código2);
printf("cidade: %s\n", cidade2);
printf("população: %d\n", população2);
printf("área: %.1f km2\n",área2);
printf("pib: %.1f Bilhões\n", pib2);
printf("pontos turísticos: %d\n", PontosTurísticos2);
printf("idade da cidade: %d anos\n", idade2);
printf("pib per capta: %.2f\n", pibpercapta2);
printf("densidade populacional: %.2f hab/km2\n", densidade2);
printf("super poder: %d\n\n", SuperPoder2);


//Comparações das cartas 1 contra 2
printf("População: %d\n", população1 > população2);
printf("Área: %d\n", área1 > área2);
printf("PIB: %d\n", pib1 > pib2);
printf("Pontos Turísticos: %d\n", PontosTurísticos1 > PontosTurísticos2);
printf("Idade: %d\n", idade1 > idade2);
printf("PIB per capita: %d\n", pibpercapta1 > pibpercapta2);
printf("Densidade populacional: %d\n", densidade1 <  densidade2);
printf("Super Poder: %d\n\n", SuperPoder1 > SuperPoder2);

return 0;



}