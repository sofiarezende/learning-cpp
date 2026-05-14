#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void esperar(int segundos){
        // clock() retorna o tempo de CPU usado pelo programa
        // CLOCKS_PER_SEC é uma constante que define quantos "ticks" existem em 1 segundo
        int limite = clock() + segundos * CLOCKS_PER_SEC;
    
        while (clock() < limite) {
        // Não faz nada, apenas espera o tempo passar
        }
    }

int main()
{
    int x, y, z, w;
    int num1[13]={0};
    int num2[13]={0};
    int num3[13]={0};
    int num4[13]={0};

    srand(time(NULL));
    
    printf("---------- # ------------------------------------------------------------------\n");
    printf("--------- ##= -------------------------------- Spades -------------------------\n");
    printf("-------- ##=== ----------------- Edição para quem não sabe de cartas ----------\n");
    printf("------ ###==#=== --------------------------------------------------------------\n");
    printf("---- ####===##==== -------- Não é apenas sorte. É estratégia.                --\n");
    printf("-- #####====###===== ------ Um jogo de mentes. Um baralho de possibilidades. --\n");
    printf("- #####=====####===== ----- Onde cada carta conta e cada lance é decisivo.   --\n");
    printf("- #####=====####===== ---------------------------------------------------------\n");
    printf("--- ####=  #  #==== ----------------------- Sofia Rezende ---------------------\n");
    printf("--------- ##= --------------------- sofia.rezende.089@ufrn.edu.br -------------\n");
    printf("------- ####=== ---------------------------------------------------------------\n");
    printf("\n");
    int n;
    int opcao = 1;
    int somadaequipe1 = 0;
    int somadaequipe1narodada = 0;
    int somadaequipe2 = 0;
    int somadaequipe2narodada = 0;
    int rodada = 0;
    int numeroJogado;

    while (opcao == 1){
        printf("Escolha a opção: \n");
        printf("\n");
        printf("1 - Jogar \n");
        printf("2 - Regras \n");
        printf("0 - Sair \n");
        printf("\n");
        scanf("%d",&n);

        //aqui temos gerando e mostrando as cartas geradas
        for (x=0; x<13; ++x){ 
            num1[x] = rand() % 11 +7;//gerando mão do jogador 1
            num2[x] = rand() % 11 +7;//gerando mão da jogador 2
            num3[x] = rand() % 11 +7;//gerando mão da jogador 3
            num4[x] = rand() % 11 +7;//gerando mão da jogador 4
        }
        switch(n){
            case 1:{
                int ordemdejogadaJogador = 0;
                ordemdejogadaJogador = rand() % 4 + 1;
                switch(ordemdejogadaJogador){
                    case 1: //primeiro a jogar 
                        fflush(stdout); 
                        esperar(4); // Pausa de 4 segundos                      
                        printf("partida iniciada! \n");
                        printf("você foi sorteado para ser o jogador 1\n");
                        printf("você será o primeiro a jogar\n");
                        fflush(stdout); 
                        esperar(2); // Pausa de 2 segundos
                        printf("você estará na EQUIPE 1\n");
                        fflush(stdout); 
                        esperar(4); // Pausa de 4 segundos

                        while (somadaequipe1 <200 && somadaequipe2 <200){
                            printf("iniciando nova rodada...\n");
                            fflush(stdout); 
                            esperar(10); // Pausa de 10 segundos
                            printf("\n");
                            printf("rodada #%d: \n",rodada+1);

                            printf("Suas cartas: \n");
                            for (y=0; y<13-rodada; ++y){
                                printf("%d, ",num1[y]);
                            }
                            printf("\n");
                            printf("Escolha o número que vai jogar: \n");
                            scanf("%d", &numeroJogado);

                            //tirando os numeros ja escolhidos do array num1
                            int encontrado = 0; 
                            for (y=0; y<13-rodada; ++y){
                                if (numeroJogado==num1[y]){
                                    encontrado = 1;
                                    for (z=y;z<13-rodada; ++z){
                                        num1[z] = num1[z+1];
                                    }
                                    break;
                                }
                            }
                            printf("O jogador 1 jogou: %d\n", numeroJogado);

                            fflush(stdout); 
                            esperar(2); // Pausa de 2 segundos
                            printf("O jogador 2 jogou: %d\n", num1[rodada]);

                            fflush(stdout); 
                            esperar(2); // Pausa de 2 segundos
                            printf("O jogador 3 jogou: %d\n", num3[rodada]);

                            fflush(stdout); 
                            esperar(2); // Pausa de 2 segundos
                            printf("O jogador 4 jogou: %d\n", num4[rodada]);

                            fflush(stdout); 
                            esperar(4); // Pausa de 4 segundos
                            somadaequipe1narodada = numeroJogado + num3[rodada];
                            somadaequipe2narodada = num2[rodada] + num4[rodada];
                            printf("\n");
                            printf("O resultado da rodada foi: \n");
                            printf("Nessa rodada, a equipe 1 ficou com %d pontos\n", somadaequipe1narodada);
                            printf("Nessa rodada, a equipe 2 ficou com %d pontos\n", somadaequipe2narodada);
                            printf("\n");

                            fflush(stdout); 
                            esperar(12); // Pausa de 12 segundos

                            if (somadaequipe1narodada>=somadaequipe2narodada){
                                printf("A equipe 1 venceu essa rodada!\n");
                                printf("+ 20 pontos para a equipe 1\n");
                                somadaequipe1narodada = somadaequipe1narodada + 20;
                                somadaequipe1 = somadaequipe1 + somadaequipe1narodada;
                                somadaequipe2 = somadaequipe2 + somadaequipe2narodada;
                                printf("\n");
                                printf("O total de pontos da equipe 1 é %d pontos\n", somadaequipe1);
                                printf("O total de pontos da equipe 2 é %d pontos\n", somadaequipe2);                             
                            }
                            else{
                                printf("A equipe 2 venceu essa rodada!\n");
                                printf("+ 20 pontos para a equipe 2\n");
                                somadaequipe2narodada = somadaequipe2narodada + 20;
                                somadaequipe1 = somadaequipe1 + somadaequipe1narodada;
                                somadaequipe2 = somadaequipe2 + somadaequipe2narodada;
                                printf("\n");
                                printf("O total de pontos da equipe 1 é %d pontos\n", somadaequipe1);
                                printf("O total de pontos da equipe 2 é %d pontos\n", somadaequipe2); 
                            }
                         
                            rodada = rodada + 1;
                            printf("\n");
                            printf("\n");
                        }
                        if (somadaequipe1>somadaequipe2){
                            printf("Parabéns, seu time venceu a partida!\n");
                            printf("\n");
                            fflush(stdout); 
                            esperar(6); // Pausa de 6 segundos
                            printf("Resultado final: \n");
                            printf("A equipe 1 conseguiu adquirir %d pontos\n", somadaequipe1);
                            printf("A equipe 2 conseguiu adquirir %d pontos\n", somadaequipe2); 
                            fflush(stdout); 
                            esperar(12); // Pausa de 12 segundos
                            printf("\n");
                            printf("===----===----===----===----===----===----===----===----===\n");
                            printf("\n");
                        }
                        else{
                            printf("O que importa é a participação. Talvez proxima vez seu time conseguirá!\n");
                            printf("\n");
                            fflush(stdout); 
                            esperar(6); // Pausa de 6 segundos
                            printf("Resultado final: \n");
                            printf("A equipe 1 conseguiu adquirir %d pontos\n", somadaequipe1);
                            printf("A equipe 2 conseguiu adquirir %d pontos\n", somadaequipe2); 
                            fflush(stdout); 
                            esperar(12); // Pausa de 12 segundos
                            printf("\n");
                            printf("===----===----===----===----===----===----===----===----===\n");
                            printf("\n");
                        }
                    break;
                    case 2:
                        fflush(stdout); 
                        esperar(4); // Pausa de 4 segundos                       
                        printf("partida iniciada! \n");
                        printf("você foi sorteado para ser o jogador 2\n");
                        printf("você será o segundo a jogar\n");
                        fflush(stdout); 
                        esperar(2); // Pausa de 2 segundos
                        printf("você estará na EQUIPE 2\n");
                        fflush(stdout); 
                        esperar(4); // Pausa de 4 segundos

                        while (somadaequipe1 < 200 && somadaequipe2 <200){
                            printf("iniciando nova rodada...\n");
                            fflush(stdout); 
                            esperar(10); // Pausa de 10 segundos
                            printf("\n");
                            printf("rodada #%d: \n",rodada+1);

                            fflush(stdout); 
                            esperar(2); // Pausa de 2 segundos
                            printf("O jogador 1 jogou: %d\n", num1[rodada]);

                            printf("Suas cartas: \n");
                            for (y=0; y<13-rodada; ++y){
                                printf("%d, ",num2[y]);
                            }
                            printf("\n");
                            printf("Escolha o número que vai jogar: \n");
                            scanf("%d", &numeroJogado);

                            //tirando os numeros ja escolhidos do array num2
                            int encontrado = 0; 
                            for (y=0; y<13-rodada; ++y){
                                if (numeroJogado==num2[y]){
                                    encontrado = 1;
                                    for (z=y;z<13-rodada; ++z){
                                        num2[z] = num2[z+1];
                                    }
                                    break;
                                }
                            } 
                            printf("O jogador 2 jogou: %d\n", numeroJogado);

                            fflush(stdout); 
                            esperar(2); // Pausa de 2 segundos
                            printf("O jogador 3 jogou: %d\n", num3[rodada]);

                            fflush(stdout); 
                            esperar(2); // Pausa de 2 segundos
                            printf("O jogador 4 jogou: %d\n", num4[rodada]);

                            fflush(stdout); 
                            esperar(4); // Pausa de 4 segundos

                            somadaequipe1narodada = num1[rodada] + num3[rodada];
                            somadaequipe2narodada = numeroJogado + num4[rodada];
                            printf("\n");
                            printf("O resultado da rodada foi: \n");
                            printf("Nessa rodada, a equipe 1 ficou com %d pontos\n", somadaequipe1narodada);
                            printf("Nessa rodada, a equipe 2 ficou com %d pontos\n", somadaequipe2narodada);
                            printf("\n");

                            fflush(stdout); 
                            esperar(12); // Pausa de 12 segundos

                            if (somadaequipe1narodada>=somadaequipe2narodada){
                                printf("A equipe 1 venceu essa rodada!\n");
                                printf("+ 20 pontos para a equipe 1\n");
                                somadaequipe1narodada = somadaequipe1narodada + 20;
                                somadaequipe1 = somadaequipe1 + somadaequipe1narodada;
                                somadaequipe2 = somadaequipe2 + somadaequipe2narodada;
                                printf("\n");
                                printf("O total de pontos da equipe 1 é %d pontos\n", somadaequipe1);
                                printf("O total de pontos da equipe 2 é %d pontos\n", somadaequipe2);                             
                            }
                            else{
                                printf("A equipe 2 venceu essa rodada!\n");
                                printf("+ 20 pontos para a equipe 2\n");
                                somadaequipe2narodada = somadaequipe2narodada + 20;
                                somadaequipe1 = somadaequipe1 + somadaequipe1narodada;
                                somadaequipe2 = somadaequipe2 + somadaequipe2narodada;
                                printf("\n");
                                printf("O total de pontos da equipe 1 é %d pontos\n", somadaequipe1);
                                printf("O total de pontos da equipe 2 é %d pontos\n", somadaequipe2); 
                            }
                            rodada = rodada + 1;
                            printf("\n");
                            printf("\n");
                        }
                        if (somadaequipe1<somadaequipe2){
                            printf("Parabéns, seu time venceu a partida!\n");
                            printf("\n");
                            fflush(stdout); 
                            esperar(6); // Pausa de 6 segundos
                            printf("Resultado final: \n");
                            printf("A equipe 1 conseguiu adquirir %d pontos\n", somadaequipe1);
                            printf("A equipe 2 conseguiu adquirir %d pontos\n", somadaequipe2); 
                            fflush(stdout); 
                            esperar(12); // Pausa de 12 segundos
                            printf("\n");
                            printf("===----===----===----===----===----===----===----===----===\n");
                            printf("\n");
                        }
                        else{
                            printf("O que importa é a participação. Talvez proxima vez seu time conseguirá!\n");
                            printf("\n");
                            fflush(stdout); 
                            esperar(6); // Pausa de 6 segundos
                            printf("Resultado final: \n");
                            printf("A equipe 1 conseguiu adquirir %d pontos\n", somadaequipe1);
                            printf("A equipe 2 conseguiu adquirir %d pontos\n", somadaequipe2); 
                            fflush(stdout); 
                            esperar(12); // Pausa de 12 segundos
                            printf("\n");
                            printf("===----===----===----===----===----===----===----===----===\n");
                            printf("\n");
                        }
                    break;
                    case 3:
                        fflush(stdout); 
                        esperar(4); // Pausa de 4 segundos
                        printf("partida iniciada! \n");
                        printf("você foi sorteado para ser o jogador 3\n");
                        printf("você será o terceiro a jogar\n");
                        fflush(stdout); 
                        esperar(2); // Pausa de 2 segundos
                        printf("você estará na EQUIPE 1\n");
                        fflush(stdout); 
                        esperar(4); // Pausa de 4 segundos

                        while (somadaequipe1 < 200 && somadaequipe2 <200){
                            printf("iniciando nova rodada...\n");
                            fflush(stdout); 
                            esperar(10); // Pausa de 10 segundos
                            printf("\n");
                            printf("rodada #%d: \n",rodada+1);

                            fflush(stdout); 
                            esperar(2); // Pausa de 2 segundos
                            printf("O jogador 1 jogou: %d\n", num1[rodada]);

                            fflush(stdout); 
                            esperar(2); // Pausa de 2 segundos
                            printf("O jogador 2 jogou: %d\n", num2[rodada]);

                            printf("Suas cartas: \n");
                            for (y=0; y<13-rodada; ++y){
                                printf("%d, ",num3[y]);
                            }
                            printf("\n");
                            printf("Escolha o número que vai jogar: \n");
                            scanf("%d", &numeroJogado);

                            //tirando os numeros ja escolhidos do array num3
                            int encontrado = 0; 
                            for (y=0; y<13-rodada; ++y){
                                if (numeroJogado==num3[y]){
                                    encontrado = 1;
                                    for (z=y;z<13-rodada; ++z){
                                        num3[z] = num3[z+1];
                                    }
                                    break;
                                }
                            }
                            printf("O jogador 3 jogou: %d\n", numeroJogado);

                            fflush(stdout); 
                            esperar(2); // Pausa de 2 segundos
                            printf("O jogador 4 jogou: %d\n", num4[rodada]);
                            
                            fflush(stdout); 
                            esperar(4); // Pausa de 4 segundos

                            somadaequipe1narodada = num1[rodada] + numeroJogado;
                            somadaequipe2narodada = num2[rodada] + num4[rodada];
                            printf("\n");
                            printf("O resultado da rodada foi: \n");
                            printf("Nessa rodada, a equipe 1 ficou com %d pontos\n", somadaequipe1narodada);
                            printf("Nessa rodada, a equipe 2 ficou com %d pontos\n", somadaequipe2narodada);
                            printf("\n");
                            fflush(stdout); 
                            esperar(12); // Pausa de 12 segundos

                            if (somadaequipe1narodada>=somadaequipe2narodada){
                                printf("A equipe 1 venceu essa rodada!\n");
                                printf("+ 20 pontos para a equipe 1\n");
                                somadaequipe1narodada = somadaequipe1narodada + 20;
                                somadaequipe1 = somadaequipe1 + somadaequipe1narodada;
                                somadaequipe2 = somadaequipe2 + somadaequipe2narodada;
                                printf("\n");
                                printf("O total de pontos da equipe 1 é %d pontos\n", somadaequipe1);
                                printf("O total de pontos da equipe 2 é %d pontos\n", somadaequipe2);                             
                            }
                            else{
                                printf("A equipe 2 venceu essa rodada!\n");
                                printf("+ 20 pontos para a equipe 2\n");
                                somadaequipe2narodada = somadaequipe2narodada + 20;
                                somadaequipe1 = somadaequipe1 + somadaequipe1narodada;
                                somadaequipe2 = somadaequipe2 + somadaequipe2narodada;
                                printf("\n");
                                printf("O total de pontos da equipe 1 é %d pontos\n", somadaequipe1);
                                printf("O total de pontos da equipe 2 é %d pontos\n", somadaequipe2); 
                            }
                            
                            rodada = rodada + 1;
                            printf("\n");
                            printf("\n");
                        }
                        if (somadaequipe1>somadaequipe2){
                            printf("Parabéns, seu time venceu a partida!\n");
                            printf("\n");
                            fflush(stdout); 
                            esperar(6); // Pausa de 6 segundos
                            printf("Resultado final: \n");
                            printf("A equipe 1 conseguiu adquirir %d pontos\n", somadaequipe1);
                            printf("A equipe 2 conseguiu adquirir %d pontos\n", somadaequipe2); 
                            fflush(stdout); 
                            esperar(12); // Pausa de 12 segundos
                            printf("\n");
                            printf("===----===----===----===----===----===----===----===----===\n");
                            printf("\n");
                        }
                        else{
                            printf("O que importa é a participação. Talvez proxima vez seu time conseguirá!\n");
                            printf("\n");
                            fflush(stdout); 
                            esperar(6); // Pausa de 6 segundos
                            printf("Resultado final: \n");
                            printf("A equipe 1 conseguiu adquirir %d pontos\n", somadaequipe1);
                            printf("A equipe 2 conseguiu adquirir %d pontos\n", somadaequipe2); 
                            fflush(stdout); 
                            esperar(12); // Pausa de 12 segundos
                            printf("\n");
                            printf("===----===----===----===----===----===----===----===----===\n");
                            printf("\n");
                        }
                    break;
                    case 4:
                        fflush(stdout); 
                        esperar(4); // Pausa de 4 segundos
                        printf("partida iniciada! \n");
                        printf("você foi sorteado para ser o jogador 4\n");
                        printf("você será o quarto a jogar\n");
                        fflush(stdout); 
                        esperar(2); // Pausa de 2 segundos
                        printf("você estará na EQUIPE 2\n");
                        fflush(stdout); 
                        esperar(4); // Pausa de 4 segundos

                        while (somadaequipe1 < 200 && somadaequipe2 <200){
                            printf("iniciando nova rodada...\n");
                            fflush(stdout); 
                            esperar(10); // Pausa de 10 segundos
                            printf("\n");
                            printf("rodada #%d: \n",rodada+1);

                            fflush(stdout); 
                            esperar(2); // Pausa de 2 segundos
                            printf("O jogador 1 jogou: %d\n", num1[rodada]);

                            fflush(stdout); 
                            esperar(2); // Pausa de 2 segundos
                            printf("O jogador 2 jogou: %d\n", num2[rodada]);

                            fflush(stdout); 
                            esperar(2); // Pausa de 2 segundos
                            printf("O jogador 3 jogou: %d\n", num3[rodada]);

                            printf("Suas cartas: \n");
                            for (y=0; y<13-rodada; ++y){
                                printf("%d, ",num4[y]);
                            }
                            printf("\n");
                            printf("Escolha o número que vai jogar: \n");
                            scanf("%d", &numeroJogado);

                            //tirando os numeros ja escolhidos do array num4
                            int encontrado = 0; 
                            for (y=0; y<13-rodada; ++y){
                                if (numeroJogado==num4[y]){
                                    encontrado = 1;
                                    for (z=y;z<13-rodada; ++z){
                                        num4[z] = num4[z+1];
                                    }
                                    break;
                                }
                            }
                            printf("O jogador 4 jogou: %d\n", numeroJogado);
                            
                            fflush(stdout); 
                            esperar(4); // Pausa de 4 segundos

                            somadaequipe1narodada = num1[rodada] + num3[rodada];
                            somadaequipe2narodada = num2[rodada] + numeroJogado;
                            printf("\n");
                            printf("O resultado da rodada foi: \n");
                            printf("Nessa rodada, a equipe 1 ficou com %d pontos\n", somadaequipe1narodada);
                            printf("Nessa rodada, a equipe 2 ficou com %d pontos\n", somadaequipe2narodada);
                            printf("\n");

                            fflush(stdout); 
                            esperar(12); // Pausa de 12 segundos

                            if (somadaequipe1narodada>=somadaequipe2narodada){
                                printf("A equipe 1 venceu essa rodada!\n");
                                printf("+ 20 pontos para a equipe 1\n");
                                somadaequipe1narodada = somadaequipe1narodada + 20;
                                somadaequipe1 = somadaequipe1 + somadaequipe1narodada;
                                somadaequipe2 = somadaequipe2 + somadaequipe2narodada;
                                printf("\n");
                                printf("O total de pontos da equipe 1 é %d pontos\n", somadaequipe1);
                                printf("O total de pontos da equipe 2 é %d pontos\n", somadaequipe2);                             
                            }
                            else{
                                printf("A equipe 2 venceu essa rodada!\n");
                                printf("+ 20 pontos para a equipe 2\n");
                                somadaequipe2narodada = somadaequipe2narodada + 20;
                                somadaequipe1 = somadaequipe1 + somadaequipe1narodada;
                                somadaequipe2 = somadaequipe2 + somadaequipe2narodada;
                                printf("\n");
                                printf("O total de pontos da equipe 1 é %d pontos\n", somadaequipe1);
                                printf("O total de pontos da equipe 2 é %d pontos\n", somadaequipe2); 
                            }
                            
                            rodada = rodada + 1;
                            printf("\n");
                            printf("\n");
                        }
                        if (somadaequipe1<somadaequipe2){
                            printf("Parabéns, seu time venceu a partida!\n");
                            printf("\n");
                            fflush(stdout); 
                            esperar(6); // Pausa de 6 segundos
                            printf("Resultado final: \n");
                            printf("A equipe 1 conseguiu adquirir %d pontos\n", somadaequipe1);
                            printf("A equipe 2 conseguiu adquirir %d pontos\n", somadaequipe2); 
                            fflush(stdout); 
                            esperar(12); // Pausa de 12 segundos
                            printf("\n");
                            printf("===----===----===----===----===----===----===----===----===\n");
                            printf("\n");
                        }
                        else{
                            printf("O que importa é a participação. Talvez proxima vez seu time conseguirá!\n");
                            printf("\n");
                            fflush(stdout); 
                            esperar(6); // Pausa de 6 segundos
                            printf("Resultado final: \n");
                            printf("A equipe 1 conseguiu adquirir %d pontos\n", somadaequipe1);
                            printf("A equipe 2 conseguiu adquirir %d pontos\n", somadaequipe2); 
                            fflush(stdout); 
                            esperar(12); // Pausa de 12 segundos
                            printf("\n");
                            printf("===----===----===----===----===----===----===----===----===\n");
                            printf("\n");
                        }
                    break;
                }
            }

            break;
            case 2:
                printf("===----===----===----===----===----===----===----===----===\n");
                printf("Essa é apenas uma variação do jogo de espadas original. \n");
                printf("As regras do jogo são essas: \n");
                printf("\n");
                printf("1 - Assim que o jogo começar, você irá ser sorteado para ser \n");
                printf("um dos jogadores: (jogador 1,jogador 2, jogador 3 ou jogador 4) \n");
                printf("2 - Você irá receber uma mão de 13 números semialeatórios. Essas \n");
                printf("serão suas cartas. Semelhantemente, os outros jogadores \n");
                printf("também irão receber 13 números semialeatorios cada.\n");
                printf("3 - Formam-se equipes de 2 parceiros cada\n");
                printf("4 - As equipes serão formadas de forma aleatória. De forma que o \n");
                printf("jogador 1 e o jogador 3 sempre ficarão na mesma equipe e o jogador 2 \n");
                printf("e jogador 4 sempre ficarão na mesma equipe \n");
                printf("5 - Toda rodada, você, sua dupla e a outra equipe jogarão um numero.\n");
                printf("6 - A equipe que obtiver o maior conjunto de numeros vence \n");
                printf("a rodada e ganha 20 pontos\n");
                printf("7 - A equipe que chegar a 200 pontos primeiro vence o jogo. \n");
                
                printf("\n");
                printf("===----===----===----===----===----===----===----===----===\n");
                printf("\n");
                
            break;
            case 0:
            opcao = -1;
            break;
            default:
            printf("Essa opção não existe. \n");
            break;
        }
    }
    return 0;
}