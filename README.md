# ⚠️ Importante!!!
Você pode escolher qualquer um dos desafios para desenvolver. Sinta-se à vontade para começar pelo desafio que mais lhe interessa.

# Desafio Super Trunfo - Países - Comparação das Cartas

Bem-vindo ao desafio "Super Trunfo - Países"! Neste projeto, você desenvolverá um sistema para comparar cartas baseadas em atributos de cidades. O desafio é dividido em três níveis: Novato, Aventureiro e Mestre. Cada nível adiciona novas funcionalidades e complexidades, permitindo um aprendizado progressivo.

## 🏅 Nível Novato

No nível Novato, você começará implementando a lógica básica de comparação entre cartas utilizando estruturas de decisão `if` e `if-else`.

### 🚩 Objetivos:
- **Cadastro de Cartas:** O sistema permitirá ao usuário cadastrar cartas de cidades, incluindo informações como estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos.
- **Comparação de Cartas:** O sistema comparará os atributos de duas cartas e determinará a vencedora com base em uma propriedade específica (população, área, PIB, etc.), escolhida no código.
- **Exibição de Resultados:** Após a comparação, o sistema exibirá qual carta venceu com base na regra: maior valor vence, exceto em densidade populacional, onde o menor valor é o vencedor.

### 📥 Entrada de Dados:
- Os dados das cartas serão inseridos manualmente via terminal.
- O sistema solicitará interativamente as informações de cada carta.

### 📤 Saída de Dados:
- Após o cadastro, as propriedades da cidade serão exibidas de forma organizada.
- O resultado da comparação será mostrado, indicando a carta vencedora.

---

## 🏅 Nível Aventureiro

No nível Aventureiro, você expandirá o sistema para incluir a comparação aninhada e a criação de um menu interativo usando `switch`.

### 🆕 Diferença em relação ao Nível Novato:
- **Menu Interativo:** O usuário poderá escolher diferentes atributos para comparação através de um menu.
- **Comparação Aninhada:** Implementação de lógica de comparação mais complexa, utilizando estruturas aninhadas para tomar decisões baseadas em múltiplos atributos.

### 🚩 Novas Funcionalidades:
- **Cadastro de Cartas:** Similar ao nível Novato, com a adição de comparação de múltiplos atributos.
- **Menu Interativo:** Uso de `switch` para criar um menu que permite ao jogador escolher os atributos a serem comparados.
- **Exibição de Resultados:** O sistema exibirá o resultado da comparação, indicando qual carta venceu e qual atributo foi utilizado.

---

## 🏅 Nível Mestre

No nível Mestre, o desafio se intensifica com a adição de funcionalidades avançadas, como menus dinâmicos e lógica de decisão complexa com operadores ternários.

### 🆕 Diferença em relação ao Nível Aventureiro:
- **Escolha de Dois Atributos:** O usuário poderá escolher dois atributos para comparação entre as cartas.
- **Lógica de Decisão Complexa:** Implementação de estruturas de decisão aninhadas e encadeadas, além do uso de operadores ternários para determinar a carta vencedora.
- **Menus Dinâmicos:** Os menus serão dinâmicos, permitindo uma navegação fluida entre as opções de comparação.

### 🚩 Novas Funcionalidades:
- **Comparação de Dois Atributos:** O sistema comparará dois atributos simultaneamente para determinar a carta vencedora.
- **Lógica Avançada:** Uso de operadores ternários e lógica aninhada para lidar com comparações complexas.
- **Empates:** O sistema será capaz de lidar com empates, exibindo mensagens apropriadas.
- **Exibição de Resultados:** Exibição dos resultados das comparações de forma clara e interativa.

---

## 📋 Requisitos Funcionais Comuns
- **Cadastro de Cartas:** O sistema deve permitir o cadastro de cartas com as informações necessárias.
- **Comparação:** O sistema deve comparar as cartas e determinar a vencedora com base nas regras estabelecidas.
- **Exibição de Resultados:** Os resultados devem ser exibidos de forma clara, indicando a carta vencedora.

## 📌 Requisitos Não Funcionais Comuns
- **Usabilidade:** A interface do usuário deve ser simples e intuitiva.
- **Performance:** O sistema deve executar operações sem atrasos perceptíveis.
- **Manutenibilidade:** O código deve ser bem estruturado e documentado.
- **Confiabilidade:** O sistema deve ser robusto e capaz de lidar com entradas inválidas de forma adequada.

---

Boa sorte no desenvolvimento deste desafio e aproveite para aprender e se divertir enquanto progride pelos níveis!

Equipe de Ensino - MateCheck

#include <stdio.h>
#include <stdlib.h>

int main() {

  //MENU PRE JOGO
      int menuInterativo, opcao;
    printf("***JOGO DO SUPER-TRUNFO***\n");
    printf("escolha uma das opções de jogo:\n");
    printf("1.iniciar jogo\n");
    printf("2.regras do jogo\n");
    printf("3.como jogar\n");
    printf("escolha uma das opções:\n");
    scanf("%d", &opcao);

    switch (menuInterativo, opcao)
    {
          case 1:
      break;
          case 2:
      printf("Cada um escolhera um pais e ira colocar as identificações do dele, o que mais tiver maior lucro e movimento entre outros, vence!\n");
      break;
          case 3:
      printf("escolha a opção 1 (iniciar jogo), la voce ira colocar os dado da primeira carta, e depois os da segunda carta, e os jogo ira decidir o vencedor!\n");
      break;
    
    default:
      break;
    }


  // dados da carta 1
    char estado;//estado
    char codigoEstado[3];//codigo de estado
    char nomeCidade[50];// nome da cidade
    unsigned long int populaçao;//numero de populaçoes
    float area;//perimetro de area
    float pib;//pib variavel 
    float numerosPontosTuristicos;//numeros de pontos turisticos
    float densidadePopulacional;//densidade populacional
    float pibPercapita;// PIB-percapita
    int carta1;
    carta1 == populaçao, area, pib, numerosPontosTuristicos, densidadePopulacional,pibPercapita;


    printf("digite abaixo os dados da carta 1\n");

    // cadastramento da carta 1
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

    // daqui pra baixo mostra a pessoa os dados colocados na carta 1!
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
    



 // tudo sobre a carta 2
    char estado2;//estado
    char codigoEstado2[3];//codigo de estado
    char nomeCidade2[50];// nome da cidade
    unsigned long int populaçao2; //numero de populaçoes
    float area2; //perimetro de area
    float pib2; //pib variavel 
    float numerosPontosTuristicos2; //numeros de pontos turisticos
    float densidadePopulacional2;// densidade populacional da carta 2
    float pibPercapita2;//pib-percapita da carta 2
    int carta2;

    carta2 == populaçao2, area2, pib2, numerosPontosTuristicos2, densidadePopulacional2, pibPercapita2;


    printf(".---\n");//so par separar e ficar mais bonito!

    // cadrastamento de cartas 2
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




    // amostra dos dados inseridos da carta 2!
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
    


    printf("---\n");//Para pular linha e ficar mais bonito


//MENU PARA ESCOLHER ATRIBUTOS DE PREFERENCIA DE CADA JOGADOR
    int resultado1, resultado2;

    printf("qual elemento o jogador da carta 1 deseja escolher para fazer comparação?\n");
      printf("1.População\n" );
        printf("2.Area\n");
          printf("3.Pib\n");
            printf("4.Numero de Pontos Turisticos\n");
              printf("5.Densidade Populacional\n");
                printf("6.Pib-Percapita\n");
                scanf("%d" , &resultado1);
                printf("jogador 2 escolha um atributo para comparar\n");
                scanf("%d" , &resultado2);
    
    switch (resultado1,resultado2)
    {
        case 1:
      printf("População:" , &populaçao, &populaçao2);
      break;
        case 2:
      printf("Area", &area, &area2);
      break;
        case 3:
      printf("Pib", &pib, &pib2);
      break;
        case 4:
      printf("Numero de Pontos Turisticos", &numerosPontosTuristicos, &numerosPontosTuristicos2);
      break;
        case 5:
      printf("Densidade Populacional", &densidadePopulacional , &densidadePopulacional2);
              case 6:
      printf("Pib-Percapita", &pibPercapita, &pibPercapita2);
      break;
      default:
       }



    printf("---\n");// so par pular linha e fiicar mais bonito



    //RESULTADOS DOS JOGADORES:
    printf("***CARTA VENCEDORA!!!***\n");


     if (resultado1 >= resultado2) {
        printf("O estado de %s venceu!!\n" , &nomeCidade);
        printf("O atributo escolhido %d é maior que o do jogador 2:\n" , &resultado1);
        printf("jogador 1 venceu!\n");

       }else if (resultado1 <= resultado2) {
        printf("O estado de %s venceu!!\n" , &nomeCidade2);
        printf("o atributo escolhido %d é maior que do jogador 1:\n" , &resultado2);
        printf("jogador 2 venceu!!!\n");
       }

       else if(resultado1 == resultado2){
        printf("Parabens, os dois estados %s,%s empatara!", &nomeCidade, &nomeCidade2);
        printf("resultado do jogador 1 que é: %d, é igual ao do jogador 2 que é:%d", &resultado1, &resultado2);

       }else if((densidadePopulacional < densidadePopulacional2) || 
               (densidadePopulacional > densidadePopulacional2))
               {
        printf("O estado de %s venceu!!\n" , &nomeCidade);
        printf("jogador 1 venceu\n");
        printf("o atributo escolhido %d é maior que da carta 2\n", resultado1);
       }
       
       else {
        printf("O estado de %s venceu!!\n" , &nomeCidade2);
        printf("jogador 1 venceu\n");
        printf("o atributo escolhido %d é maior que da carta 2\n", resultado2);
       }

       
    
    
    return 0;
    }