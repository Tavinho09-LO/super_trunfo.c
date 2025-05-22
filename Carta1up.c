#include <stdio.h>

int main(){
    char estado = 'A';
    char código[5];
    char cidade[20];
    int população;
    int pontosturísticos;
    float área;
    float PIB;
    float densidadepopulacional;
    float PIBpercapita;
    //informações da carta1//

     printf("Digite o estado: \n");
     scanf("%c", &estado);

     printf("Código: \n");
     scanf("%s",&código);

     printf("Nome da cidade:\n");
     scanf("%s",&cidade);

     printf("Total de habitantes:\n");
     scanf("%d",&população);

     printf("Área em km2:\n");
     scanf("%f",&área);

     printf("PIB:\n");
     scanf("%f",&PIB);

     printf("Quantidade de pontos turísticos:\n");
     scanf("%d",&pontosturísticos);
     
     //entrada e saida de dados//

     printf("Carta 1!\n");
     printf("Estado:%c\n",estado);
     printf("Código da carta:%s\n",código);
     printf("Cidade:%s\n",cidade);
     printf("Habitantes:%d\n",população);
     printf("Área em km2:%2.f\n",área);
     printf("PIB:%2.f\n",PIB);
     printf("Pontos turísticos:%d\n",pontosturísticos);
     densidadepopulacional = população / área;
     PIBpercapita = PIB / população;
     printf("Densidade populacional:%3.f\n",densidadepopulacional);
     printf("PIB per Capita:%3.f\n",PIBpercapita);
     //imprimindo as variaveis//



     return 0;


}