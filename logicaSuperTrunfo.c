#include <stdio.h>

int main() {
  //Daqui pra baixo dados da carta 1
    char estado;//estado
    char codigoEstado[3];//codigo de estado
    char nomeCidade[50];// nome da cidade
    unsigned long int populaçao;//numero de populaçoes
    float area;//perimetro de area
    float pib;//pib variavel 
    float numerosPontosTuristicos;//numeros de pontos turisticos
    float densidadePopulacional;//densidade populacional
    float pibPercapita;// PIB-percapita
    printf("Jogo do super-trunfo!\n");
    printf("digite abaixo os dados da carta 1!\n");

    //daqui pra baixo cadastramento da carta 1
    printf("Estado:\n");
    scanf(" %c" , &estado);


    printf("Codigo de estado:\n");
    scanf("%s" , codigoEstado);


    printf("nome da cidade:\n");
    scanf("%s" , &nomeCidade);

    printf("numero de população:\n");
    scanf("%d" , &populaçao);


    printf("area (em km²):\n");
    scanf("%f" , &area);


    printf("informe o PIB:\n");
    scanf("%f" , &pib);


    printf("Numero de pontos turisticos:\n");
    scanf("%f" , &numerosPontosTuristicos);

    densidadePopulacional = (float) populaçao / area;
    pibPercapita = (float) pib / populaçao;
    
    printf(".---\n");//para pular linha e separar melhor

    // daqui pra baixo mostra a pessoa os dados colocados nas cartas!
    printf("\nDados da carta 1:\n");
    printf("Estado: %c\n" , estado);
    printf("codigo de estado: %s\n" , codigoEstado);
    printf("nomde da cidade: %s\n" , nomeCidade);
    printf("numero de população: %i\n" , populaçao);
    printf("area (em km²) %f\n" , area);
    printf("numero do PIB: %e\n" , pib);
    printf("numeros de pontos turisticos: %e\n" , numerosPontosTuristicos);
    printf("Densidade Populacional: %f\n" , densidadePopulacional);
    printf("PIB per Capita: %f\n" , pibPercapita);
    



 //* daqui pra baixo e tudo sobre a carta 2
    char estado2;//estado
    char codigoEstado2[3];//codigo de estado
    char nomeCidade2[50];// nome da cidade
    unsigned long int populaçao2; //numero de populaçoes
    float area2; //perimetro de area
    float pib2; //pib variavel 
    float numerosPontosTuristicos2; //numeros de pontos turisticos
    float densidadePopulacional2;// densidade populacional da carta 2
    float pibPercapita2;//pib-percapita da carta 2

    printf(".---\n");//so par separar e ficar mais bonito!

    //daqui pra baixo cadrastamento de cartas 2
    printf("Proximo jogador!\n");
    printf("digite abaixo os dados da carta 2!\n");

    printf("Estado:\n");
    scanf(" %c" , &estado2);


    printf("Codigo de estado:\n");
    scanf("%s" , codigoEstado2);


    printf("nome da cidade:\n");
    scanf("%s" , &nomeCidade2);

    printf("numero de população:\n");
    scanf("%d" , &populaçao2);


    printf("area (em km²):\n");
    scanf("%f" , &area2);


    printf("informe o PIB:\n");
    scanf("%e" , &pib2);


    printf("Numero de pontos turisticos:\n");
    scanf("%e" , &numerosPontosTuristicos);

    //conta para calcular a densidade populacionar e o PIB-percapita!
     densidadePopulacional2 = (float) populaçao / area;
    pibPercapita2 = (float) pib / populaçao;


    printf(".---\n");//par pular linha e ficar mais bonito!

    // amostra dos dados inseridos da carta 2
    printf("\nDados da carta 2:\n");
    printf("Estado: %c\n" , estado2);
    printf("codigo de estado: %s\n" , codigoEstado2);
    printf("nomde da cidade: %s\n" , nomeCidade2);
    printf("numero de população: %i\n" , populaçao2);
    printf("area (em km²) %f\n" , area2);
    printf("numero do PIB: %e\n" , pib2);
    printf("numeros de pontos turisticos: %e\n" , numerosPontosTuristicos2);
    printf("Densidade Populacional: %f\n" , densidadePopulacional2);
    printf("PIB per Capita: %f\n" , pibPercapita2);
    
    printf(".---\n");//Para pular linha e ficar mais bonito

    //resultado das duas cartas:
    printf("***CARTA VENCEDORA!!!***\n");

    if(populaçao > populaçao2){
      printf("Em população: a carta 1 venceu!\n");
    } else{
      printf("EMpopulação: a carta 2 venceu!\n");
    }

        if(area > area2){
      printf("Em area: a carta 1 venceu!\n");
    } else{
      printf("Em area: a carta 2 venceu!\n");
    }


        if(pib > pib2){
      printf("Em PIB: a carta 1 venceu!\n");
    } else{
      printf("Em PIB: a carta 2 venceu!\n");
    }

        if(numerosPontosTuristicos > numerosPontosTuristicos2){
      printf("Em numero de pontos turisticos: a carta 1 venceu!\n");
    } else{
      printf("Em numero de pontos turisticos: a carta 2 venceu!\n");
    }

        if(densidadePopulacional > densidadePopulacional2){
      printf("Em densidade populacional: a carta 2 venceu!\n");
    } else{
      printf("Em densidade populacional: a carta 1 venceu!\n");
    }

        if(pibPercapita > pibPercapita2){
      printf("Em PIB-percapita: a carta 1 venceu!\n");
    } else{
      printf("Em PIB-percapita: a carta 2 venceu!\n");
    }

    printf("---\n");// so par pular linha e fiicar mais bonito
    if (populaçao , area, pib, numerosPontosTuristicos, densidadePopulacional,pibPercapita > populaçao2,area2, pib2, numerosPontosTuristicos2,densidadePopulacional2,pibPercapita) {

      printf("CARTA 1 VENCEU!!!!\n");
    } else{
       printf("CARTA 2 VENCEU!!!!!!!\n");
    }
    
    
    return 0;
    }