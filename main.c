#include <stdio.h>

// menu de entrada
void bem_vindo(){
    printf("********** BEM VINDO A MAROMBIME **********\n\n\n");
    printf("********** O QUE DESEJAS? *****************\n 0 - CADASTRAR;\n 1 - MONTAR TREINO.\n\n");
}

int main(){
    int i;
    bem_vindo();
    scanf("%d", &i);
        switch (i)
        {
        case 1:
            printf("Vamos precisar dos seus dados:\n");
            break;
        case 0:
            printf("Qual seu objetivo\n");
            break;
        default:
            printf("Digite 0 para cadastrar e 1 para montar o treino\n");
            break;
        }
    return 0;
}