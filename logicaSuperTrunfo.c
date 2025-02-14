#include <stdio.h>
int main(){

unsigned int populacao, pontos;
 unsigned int populacao2, pontos2;
 double area, pib, densidade, pib2;
 double area2, pib02, densidade2, pib3;
 char nome[50], nome2[50], cdc[50], cdc2[50];

 
 printf("Insira os dados da primeira carta\n");

printf("Digite o codigo da carta\n");
scanf("%s" , &cdc);

printf("Digite o nome da cidade\n");
scanf("%s" , &nome);

printf("Digite o numero da populacao\n");
scanf("%d" , &populacao);

printf("Digite a area da cidade\n");
scanf("%f" , &area);

printf("Didite o numero de pontos turisticos\n");
scanf("%d" , &pontos);

printf("DIgite o pib total:\n");
scanf("%f", &pib);

//Agora vamos inserir os dados da segunda carta
//Agora as variaveis tem o mesmo nome + o numero 2
//Exeto pela variavel "pib" ela sea adicionada 02 "pib02" e o pib per capita "pib3"
printf("Agora insira os dados da segunda carta\n");
printf("Digite o codigo da cidade\n");
scanf("%s" , &cdc2);

printf("Digite o nome da cidade\n");
scanf("%s" , &nome2);

printf("Digite o numero da populacao\n");
scanf("%d" , &populacao2);

printf("Digite a area da cidade\n");
scanf("%f" , &area2);

printf("Didite o numero de pontos turisticos\n");
scanf("%d" , &pontos2);

printf("DIgite o pib total:\n");
scanf("%f", &pib2);

densidade = populacao / area;
densidade2 = populacao2 / area2;
pib2 = pib / populacao;
pib3 = pib02 / pontos2;

printf("Comparacoes de cartas\n");

printf("Carta 1 - Cidade: %s, Codigo: %s, Populacao: %d\n", nome, cdc, populacao);
printf("Carta 2 - Cidade: %s, Codigo: %s, Populacao: %d\n", nome2, cdc2, populacao2);
if (populacao > populacao2){
    printf("Resultado: Carta 1 venceu!\n");
}else{
    printf("Resuntado: Carta 2 venceu!\n");
}
printf("Carta 1 - Cidade: %s, Codigo: %s, Area: %f\n", nome, cdc, area);
printf("Carta 2 - Cidade: %s, Codigo: %s, Area: %f\n", nome2, cdc2, area2);
if (area > area2){
    printf("Resultado: Carta 1 venceu!\n");
}else{
    printf("Resuntado: Carta 2 venceu!\n");
}
printf("Carta 1 - Cidade: %s, Codigo: %s, Pontos turisticos: %d\n", nome, cdc, pontos);
printf("Carta 2 - Cidade: %s, Codigo: %s, Pontos turisticos: %d\n", nome2, cdc2, pontos2);
if (pontos > pontos2){
    printf("Resultado: Carta 1 venceu!\n");
}else{
    printf("Resuntado: Carta 2 venceu!\n");
}
printf("Carta 1 - Cidade: %s, Codigo: %s, Pib: %f\n", nome, cdc, pib);
printf("Carta 2 - Cidade: %s, Codigo: %s, Pib: turisticos: %f\n", nome2, cdc2, pib02);
if (pib > pib02){
    printf("Resultado: Carta 1 venceu!\n");
}else{
    printf("Resuntado: Carta 2 venceu!\n");
}
printf("Carta 1 - Cidade: %s, Codigo: %s, Densidade: %f\n", nome, cdc, densidade);
printf("Carta 2 - Cidade: %s, Codigo: %s, Densidade: %f\n", nome2, cdc2, densidade2);
if (densidade < densidade2){
    printf("Resultado: Carta 1 venceu!\n");
}else{
    printf("Resuntado: Carta 2 venceu!\n");
}
printf("Carta 1 - Cidade: %s, Codigo: %s, Pib Per Capita: %f\n", nome, cdc, pib2);
printf("Carta 2 - Cidade: %s, Codigo: %s, Pib Per Capita: %f\n", nome2, cdc2, pib3);
if (pib2 > pib3){
    printf("Resultado: Carta 1 venceu!\n");
}else{
    printf("Resuntado: Carta 2 venceu!\n");
}

  

    return 0;
}