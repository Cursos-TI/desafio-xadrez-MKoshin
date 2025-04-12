#include <stdio.h>

int main(){
    // bispo 5 casas diagonal
    // rainha 8 casas a esquerda
    // torre 5 casas a frente

    int opcao, movimento; // variavel pra receber as opções switch

    int b = 0; // variavel bispo
    int i = 0; // variavel torre

    printf("Opções\n");
    printf("1. Bispo\n");
    printf("2. Rainha\n");
    printf("3. Torre\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch(opcao){
    
    case 1:
        printf("Escolha de movimentos\n");
        printf("1. Diagonal superior direita\n");
        printf("2. Diagonal superior esquerda\n");
        printf("3. Diagonal inferior direita\n");
        printf("4. Diagonal inferior esquerda\n");
        printf("Escolha o movimento: ");
        scanf("%d", &movimento);

        switch (movimento)
        {
        case 1:

            while(b < 5){
            printf("Direita, ");
            printf("Cima\n");
            b++;
            }

            break;
        case 2:

            while (b < 5){
            printf("Esquerda, ");
            printf("Cima\n");
            b++;
            }
            

            break;
        case 3:

            while (b < 5){
            printf("Direita, ");
            printf("Baixo\n");
            b++;
            }
            
            break;

        case 4:

            while (b < 5){
            printf("Esquerda, ");
            printf("Baixo\n");
            b++;
            } 
            break;
        
        default:
        printf("Opção errada");

        }
        break;

    case 2:
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

        switch(movimento){

            case 1:
                for (int r = 0; r < 8; r++){
                    printf("Direita");
                }
            break;

            case 2:
                for (int r = 0; r < 8; r++){
                    printf("Esquerda");
                }
            break;

            case 3:
                for (int r = 0; r < 8; r++){
                    printf("Cima");
                }
            break;

            case 4:
                for (int r = 0; r < 8; r++){
                    printf("Baixo");
                }
            break;

            case 5:
                for (int r = 0; r < 8; r++){
                    printf("Direita");
                    printf("Cima\n");
                }
            break;

            case 6:
                for (int r = 0; r < 8; r++){
                    printf("Esquerda");
                    printf("Cima\n");
                }
            break;

            case 7:
                for (int r = 0; r < 8; r++){
                    printf("Direita");
                    printf("Baixo\n");
                }
            break;

            case 8:
                for (int r = 0; r < 8; r++){
                    printf("Esquerda");
                    printf("Baixo\n");
                }
            break;
            default:
            printf("Opção inválida");
        }

        break;

    case 3: // movimento da torre

        printf("Escolha de movimentos\n");
        printf("1. Direita\n");
        printf("2. Esquerda\n");
        printf("3. Superior\n");
        printf("4. Inferior\n");
        printf("Escolha o movimento: ");
        scanf("%d", &movimento);

        switch(movimento){

        case 1:
            do{
                printf("Direita\n"); // imprime a direção do movimento
                i++;
            } while (i < 5);

            break;
        case 2:
            do{
                printf("Esquerda\n"); // imprime a direção do movimento
                i++;
            } while (i < 5);

            break;

        case 3:
            do{
                printf("Cima\n"); // imprime a direção do movimento
                i++;
            } while (i < 5);

            break;

        case 4:
            do{
                printf("Baixo\n"); // imprime a direção do movimento
                i++;
            } while (i < 5);
            break;

        default:
        printf("Opção inválida");
}
        break;

        default:
        printf("Opção inválida");
}
return 0;
}
