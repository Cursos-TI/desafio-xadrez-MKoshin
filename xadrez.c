#include <stdio.h>

int main()
{
    // bispo 5 casas diagonal
    // rainha 8 casas a esquerda
    // torre 5 casas a frente

    int opcao, movimento; // variavel pra receber as opções switch

    int b; // variavel bispo
    int i; // variavel torre

    // RECURSIVIDADE OBS: OS CÓDIGOS DA RAINHA FORAM REUTILIZADOS COM BASE NOS JA FEITOS

    // *1 TORRE ************************
    void moverTorreDireita(int casas) {
        if (casas > 0) {
            printf("Direita\n");
            moverTorreDireita(casas - 1);
        }
    }

    void moverTorreEsquerda(int casas) {
        if (casas > 0) {
            printf("Esquerda\n");
            moverTorreEsquerda(casas - 1);
        }
    }

    void moverTorreCima(int casas) {
        if (casas > 0) {
            printf("Cima\n");
            moverTorreCima(casas - 1);
        }
    }

    void moverTorreBaixo(int casas) {
        if (casas > 0) {
            printf("Baixo\n");
            moverTorreBaixo(casas - 1);
        }
    }

    // BISPO RECURSIVIDADE *****************************

    void moverBispoDiagonalSuperior(int casas) {

        for(int i = 1; i <= casas; i++){
            for(int j = 1; j <= 1; j++){
                printf("Direita \n");
            }
            printf("Cima \n");
        }
    }

    void moverBispoDiagonalSuperiorEsquerda(int casas) {
           
        for(int i = 1; i <= casas; i++){
            for(int j = 1; j <= 1; j++){
                printf("Esquerda \n");
            }
            printf("Cima \n");
        }
    }

    void moverBispoDiagonalInferior(int casas) {
           
        for(int i = 1; i <= casas; i++){
            for(int j = 1; j <= 1; j++){
                printf("Direita \n");
            }
            printf("Baixo \n");
        }
    }

    void moverBispoDiagonalInferiorEsquerda(int casas) {
           
        for(int i = 1; i <= casas; i++){
            for(int j = 1; j <= 1; j++){
                printf("Esquerda \n");
            }
            printf("Baixo \n");
        }
    }

    // CAVALO RECURSIVIDADE *************************************

    void moverCavaloCimaDireita(int casas) {
        int i = 1;
        do {
            int j = 1;
            do {
                printf("Cima\n");
                j++;
            } while (j <= 2);
            printf("Direita\n");
            i++;
        } while (i <= 1);   
    }

    void moverCavaloCimaEsquerda(int casas) {
        int i = 1;
        do {
            int j = 1;
            do {
                printf("Cima\n");
                j++;
            } while (j <= 2);
            printf("Esquerda\n");
            i++;
        } while (i <= 1);   
    }

    void moverCavaloBaixoDireita(int casas) {
        int i = 1;
        do {
            int j = 1;
            do {
                printf("Baixo\n");
                j++;
            } while (j <= 2);
            printf("Direita\n");
            i++;
        } while (i <= 1);   
    }

    void moverCavaloBaixoEsquerda(int casas) {
        int i = 1;
        do {
            int j = 1;
            do {
                printf("Baixo\n");
                j++;
            } while (j <= 2);
            printf("Esquerda\n");
            i++;
        } while (i <= 1);   
    }

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
            moverBispoDiagonalSuperior(5);

            break;

        case 2: // MOVIMENTO DIAGONAL BISPO SUPERIOR ESQUERDA
            moverBispoDiagonalSuperiorEsquerda(5);

            break;

        case 3: // MOVIMENTO DIAGONAL BISPO INFERIOR DIREITA
            moverBispoDiagonalInferior(5);

            break;

        case 4: // MOVIMENTO DIAGONAL BISPO INFERIOR ESQUERDA
            moverBispoDiagonalInferiorEsquerda(5);

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
            moverTorreDireita(8);
            
            break;

        case 2: // MOVIMENTO RAINHA ESQUERDA
            moverTorreEsquerda(8);

            break;

        case 3: // MOVIMENTO RAINHA CIMA
            moverTorreCima(8);

            break;

        case 4: // MOVIMENTO RAINHA BAIXO
            moverTorreBaixo(8);

            break;

        case 5: // MOVIMENTO DIAGONAL SUPERIOR DIREITA

            moverBispoDiagonalSuperior(8);

            break;

        case 6: // MOVIMENTO DIAGONAL SUPERIOR ESQUERDA

            moverBispoDiagonalSuperiorEsquerda(8);

            break;

        case 7: // MOVIMENTO DIAGONAL INFERIOR DIREITA

            moverBispoDiagonalInferior(8);

            break;

        case 8: // MOVIMENTO DIAGONAL INFERIOR ESQUERDA

            moverBispoDiagonalInferiorEsquerda(8);

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
            moverTorreDireita(5);

            break;

        case 2: // MOVIMENTO TORRE ESQUERDA
            moverTorreEsquerda(5);

            break;

        case 3: // MOVIMENTO TORRE SUPERIOR
            moverTorreCima(5);

            break;

        case 4: // MOVIMENTO TORRE INFERIOR
            moverTorreBaixo(5);
        
            break;
        
        default:
            printf("Opção inválida");
        }

        break;

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

            moverCavaloCimaDireita(1);

            break;

        case 2: // MOVIMENTO CAVALO CIMA CIMA ESQUERDA

            moverCavaloCimaEsquerda(1);

            break;

        case 3: // MOVIMENTO CAVALO BAIXO BAIXO DIREITA

            moverCavaloBaixoDireita(1);

            break;

        case 4: // MOVIMENTO CAVALO BAIXO BAIXO ESQUERDA
            moverCavaloBaixoEsquerda(1);
            
            break;

        default:
            printf("Opção inválida");
        }
    }

    return 0;
}
