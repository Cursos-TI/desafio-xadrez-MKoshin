#include <stdio.h>

int main(){
    // bispo 5 casas diagonal
    // rainha 8 casas a esquerda
    // torre 5 casas a frente
    int opcao, movimento;
    
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
        case 1: // DIAGONAL DIREITA BISPO
            for(int b = 0; b < 5; b++){
            printf("Direita, ");
            printf("Cima\n");
            }
            break;
            
        case 2: // DIAGONAL ESQUERDA BISPO
        for(int b = 0; b < 5; b++){
            printf("Esquerda, ");
            printf("Cima\n");
            }
            break;
            
        case 3: // DIAGONAL DIREITO BAIXO BISPO
        for(int b = 0; b < 5; b++){
            printf("Direita, ");
            printf("Baixo\n");
            }
            break;
            
        case 4: // DIAGONAL ESQUERDO BAIXO BISPO
        for(int b = 0; b < 5; b++){
            printf("Esquerda, ");
            printf("Baixo\n");
            }
        
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

            case 1: // DIREITA RAINHA
                for (int r = 0; r < 8; r++){
                    printf("Direita");
                }
            break;

            case 2: // ESQUERDA RAINHA 
                for (int r = 0; r < 8; r++){
                    printf("Esquerda");
                }
            break;

            case 3: // SUPERIOR RAINHA
                for (int r = 0; r < 8; r++){
                    printf("Cima");
                }
            break;

            case 4: // INFERIOR RAINHA
                for (int r = 0; r < 8; r++){
                    printf("Baixo");
                }
            break;

            case 5: // DIAGONAL SUPERIOR DIREITA RAINHA
                for (int r = 0; r < 8; r++){
                    printf("Direita");
                    printf("Cima\n");
                }
            break;

            case 6: // DIAGONAL SUPERIOR ESQUERDA RAINHA
                for (int r = 0; r < 8; r++){
                    printf("Esquerda");
                    printf("Cima\n");
                }
            break;

            case 7: // DIAGONAL INFERIOR DIREITA RAINHA
                for (int r = 0; r < 8; r++){
                    printf("Direita");
                    printf("Baixo\n");
                }
            break;

            case 8: // DIAGONAL INFERIOR ESQUERDA RAINHA
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
            for (int i = 0; i < 5; i++) {
                printf("Direita\n"); // imprime a direção do movimento
            }

            break;
        case 2:
        for (int i = 0; i < 5; i++) {
            printf("Esquerda\n"); // imprime a direção do movimento
        }

            break;

        case 3:
        for (int i = 0; i < 5; i++) {
            printf("Cima\n"); // imprime a direção do movimento
        }

            break;

        case 4:
        for (int i = 0; i < 5; i++) {
            printf("Baixo\n"); // imprime a direção do movimento
        }
            break;

        default:
        printf("Opção inválida");
}
        break;

        default:
        printf("Opção inválida");
}
}
