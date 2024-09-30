#include <stdio.h>

int main(){

    int opcao, bispo;   // A variavel peça vai armazenar qual peça o jogador irá mover, bispo ira indicar a direçao

    do{ //inserindo comando do-while para fazez com que o programa inicie sem precisar da condição
        printf ("Bem-vindo(a) ao jogo de xadrez! \n"); //Apresentação do jogo ao uauario
        printf ("Nesse desafio você poderá mover o bispo, a torre e a rainha. \n");
        printf ("Escolha a opção para a peça que você quer mover: \n"); // Dando instruções para que ele selecione movimento
        printf ("1. Bispo \n"); // Mostrandp ao usuario qual opção corresponde a qual peça
        printf ("2. Torre \n");
        printf ("3. Rainha \n");
        printf ("4. Sair do jogo \n");
        printf ("Escolha uma opção: \n"); // Solicitando que ele entre com a opção escolhida
        scanf ("%d", &opcao); // Comando para coletar a entrada de dados do usuario

        switch (opcao) // Irei inserir um menu para que o programa possa rodar a opção escolhida 
        {
        case 1: // Na opção do bispo farei outro menu para que possa indicar a direção
            printf ("Você escolheu o Bispo, agora indique qual direção ele deve seguir: \n");

        printf ("Escolha uma opção: \n");
        printf ("1. Direita, Cima \n");
        printf ("Qualquer outro número para ir para a Esquerda, Cima \n");
        scanf ("%d", &bispo);

    if (bispo == 1) //irei inserir um if para testar a condição e retorna o valor correspondente
    {
        printf ("Direita, Cima \n");
        printf ("Direita, Cima \n");
        printf ("Direita, Cima \n");
        printf ("Direita, Cima \n");
        printf ("Direita, Cima \n");
    } else // O else irá exibir ao usuario a resposta caso a condição não seja verdadeira, indicando a direção
    {
        printf ("Esquerda, Cima \n");
        printf ("Esquerda, Cima \n");
        printf ("Esquerda, Cima \n");
        printf ("Esquerda, Cima \n");
        printf ("Esquerda, Cima \n");
    }
            break; // O break irá impedir que as demais linhas do codigo sejam executadas além da condição correspondente 
        case 2: //O case 2 indicará a movimentação da torre
            printf ("Você escolheu a Torre, ela se moverá de acordo com as movimentações a seguir: \n");
            printf ("Direita \n");
            printf ("Direita \n");
            printf ("Direita \n");
            printf ("Direita \n");
            printf ("Direita \n");
            break; // Novamente break para parar na condição correspondente
        case 3: // Case 3 é a movimentação da rainha
            printf ("Você escolheu a Rainha, ela se moverá de acordo com as movimentações a seguir: \n");
            printf ("Esquerda \n");
            printf ("Esquerda \n");
            printf ("Esquerda \n");
            printf ("Esquerda \n");
            printf ("Esquerda \n");
            printf ("Esquerda \n");
            printf ("Esquerda \n");
            printf ("Esquerda \n");
            break; // break para não ultrapassar para a proxima linha de codigo
        case 4: // Case 4 é a opção selecionada para sair do jogo e parar o programa 
            printf ("Saindo do jogo... \n");
            break;              
        default:
            printf ("Opção inválida! \n"); // o default é exibido quando a opção selecionada não está válida
        }
    } while (opcao != 4); // Inserindo a condição para que o usuario possa sair do programa 


    return 0;
}