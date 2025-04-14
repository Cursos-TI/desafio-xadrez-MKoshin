#include <stdio.h>

int main()
{
    // bispo 5 casas diagonal
    // rainha 8 casas a esquerda
    // torre 5 casas a frente

    int opcao, movimento; // variavel pra receber as opções switch

    int b; // variavel bispo
    int i; // variavel torre

    printf("Opções\n");
    printf("1. Bispo\n");
    printf("2. Rainha\n");
    printf("3. Torre\n");
    printf("4. Cavalo\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {

    case 1: // MOVIMENTO BISPO

        printf("Escolha de movimentos\n");
        printf("1. Diagonal superior direita\n");
        printf("2. Diagonal superior esquerda\n");
        printf("3. Diagonal inferior direita\n");
        printf("4. Diagonal inferior esquerda\n");
        printf("Escolha o movimento: ");
        scanf("%d", &movimento);

        switch (movimento)
        {
        case 1: // MOVIMENTO DIAGONAL BISPO SUPERIOR DIREITA

            while (b < 5)
            {
                printf("Direita, ");
                printf("Cima\n");
                b++;
            }

            break;

        case 2: // MOVIMENTO DIAGONAL BISPO SUPERIOR ESQUERDA

            while (b < 5)
            {
                printf("Esquerda, ");
                printf("Cima\n");
                b++;
            }

            break;

        case 3: // MOVIMENTO DIAGONAL BISPO INFERIOR DIREITA

            while (b < 5)
            {
                printf("Direita, ");
                printf("Baixo\n");
                b++;
            }

            break;

        case 4: // MOVIMENTO DIAGONAL BISPO INFERIOR ESQUERDA

            while (b < 5)
            {
                printf("Esquerda, ");
                printf("Baixo\n");
                b++;
            }

            break;

        default:
            printf("Opção errada");
        }

        break;

    case 2: // MOVIMENTO DA RAINHA

        printf("Escolha de movimentos\n");
        printf("1. Direita\n");
        printf("2. Esquerda\n");
        printf("3. Superior\n");
        printf("4. Inferior\n");
        printf("5. Diagonal superior direita\n");
        printf("6. Diagonal superior esquerda\n");
        printf("7. Diagonal inferior direita\n");
        printf("8. Diagonal inferior esquerda\n");
        printf("Escolha o movimento: ");
        scanf("%d", &movimento);

        switch (movimento)
        {

        case 1: // MOVIMENTO RAINHA DIREITA

            for (int r = 0; r < 8; r++)
            {
                printf("Direita");
            }

            break;

        case 2: // MOVIMENTO RAINHA ESQUERDA

            for (int r = 0; r < 8; r++)
            {
                printf("Esquerda");
            }

            break;

        case 3: // MOVIMENTO RAINHA CIMA

            for (int r = 0; r < 8; r++)
            {
                printf("Cima");
            }

            break;

        case 4: // MOVIMENTO RAINHA BAIXO

            for (int r = 0; r < 8; r++)
            {
                printf("Baixo");
            }

            break;

        case 5: // MOVIMENTO DIAGONAL SUPERIOR DIREITA

            for (int r = 0; r < 8; r++)
            {
                printf("Direita");
                printf("Cima\n");
            }

            break;

        case 6: // MOVIMENTO DIAGONAL SUPERIOR ESQUERDA

            for (int r = 0; r < 8; r++)
            {
                printf("Esquerda");
                printf("Cima\n");
            }

            break;

        case 7: // MOVIMENTO DIAGONAL INFERIOR DIREITA

            for (int r = 0; r < 8; r++)
            {
                printf("Direita");
                printf("Baixo\n");
            }

            break;

        case 8: // MOVIMENTO DIAGONAL INFERIOR BAIXO

            for (int r = 0; r < 8; r++)
            {
                printf("Esquerda");
                printf("Baixo\n");
            }

            break;

        default:

            printf("Opção inválida");

        }

        break;

    case 3: // MOVIMENTO DA TORRE

        printf("Escolha de movimentos\n");
        printf("1. Direita\n");
        printf("2. Esquerda\n");
        printf("3. Superior\n");
        printf("4. Inferior\n");
        printf("Escolha o movimento: ");
        scanf("%d", &movimento);

        switch (movimento)
        {

        case 1: // MOVIMENTO TORRE DIREITA

            do
            {
                printf("Direita\n"); // imprime a direção do movimento
                i++;
            } while (i < 5);

            break;

        case 2: // MOVIMENTO TORRE ESQUERDA

            do
            {
                printf("Esquerda\n"); // imprime a direção do movimento
                i++;
            } while (i < 5);

            break;

        case 3: // MOVIMENTO TORRE SUPERIOR

            do
            {
                printf("Cima\n"); // imprime a direção do movimento
                i++;
            } while (i < 5);

            break;

        case 4: // MOVIMENTO TORRE INFERIOR

            do
            {
                printf("Baixo\n"); // imprime a direção do movimento
                i++;
            } while (i < 5);
            break;

        default:
            printf("Opção inválida");
        }

    case 4: // cavalo

        printf("Escolha movimento\n");
        printf("1. cima, direita\n");
        printf("2. cima, esquerda\n");
        printf("3. baixo, direita\n");
        printf("4. baixo, esquerda\n");
        scanf("%d", &movimento);

        switch (movimento)
        {

        case 1: // MOVIMENTO CAVALO CIMA CIMA DIREITA

            for (int c = 1; c <= 1; c++)
            {
                int a = 1;
                do
                {
                    printf("Cima, direita\n");
                    a++;
                } while (a <= 1);

                if (c >= 1)
                {
                    printf("Cima");
                }
            }

            break;

        case 2: // MOVIMENTO CAVALO CIMA CIMA ESQUERDA

            for (int c = 1; c <= 1; c++)
            {
                int a = 1;
                do
                {
                    printf("Esquerda Cima\n");
                    a++;
                } while (a <= 1);

                if (c >= 1)
                {
                    printf("         Cima ");
                }
            }

            break;

        case 3: // MOVIMENTO CAVALO BAIXO BAIXO DIREITA

            for (int c = 1; c <= 1; c++)
            {
                int a = 1;
                do
                {
                    printf("Baixo\n");
                    a++;
                } while (a <= 1);

                if (c >= 1)
                {
                    printf("Baixo, direita");
                }
            }

            break;

        case 4: // MOVIMENTO CAVALO BAIXO BAIXO ESQUERDA

            for (int c = 1; c <= 1; c++)
            {
                int a = 1;
                do
                {
                    printf("          Baixo\n");
                    a++;
                } while (a <= 1);

                if (c >= 1)
                {
                    printf("Esquerda, Baixo");
                }
            }
            
            break;

        default:
            printf("Opção inválida");
        }
    }

    return 0;
}
