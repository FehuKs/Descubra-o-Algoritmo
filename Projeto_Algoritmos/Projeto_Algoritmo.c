#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <locale.h>
#include <ctype.h>


typedef struct no{
    int valor;
    struct no *proximo;
}No;
typedef struct{
    No *inicio;
    int tam;
}Lista;


void criar_lista(Lista *lista){
    lista->inicio = NULL;
    lista->tam = 0;
}

void inserir_no_inicio(Lista *lista, int num){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        novo->proximo = lista->inicio;
        lista->inicio = novo;
        lista->tam++;
    }
    else
        printf("Erro ao alocar memoria!\n");
}
No* buscar(Lista *lista, int num){
    No *aux, *no = NULL;
    aux = lista->inicio;
    while(aux && aux->valor != num)
        aux = aux->proximo;
    if(aux)
        no = aux;
 return no;
}


void imprimir(Lista lista){
    No *no = lista.inicio;
    printf("\n                     **************************");
    printf("\n                     * Números já tentados %d  *", lista.tam);
    printf("\n                     **************************");
    printf("\n[|");
    while(no){
         printf("");
        printf("%d|",no->valor);
        no = no->proximo;
    }
    printf("]");
    printf("\n\n");
}




int main (){
setlocale(LC_ALL, "Portuguese");
Lista lista;
No *removido;
criar_lista(&lista);
printf ("O QUE SÃO OS ALGORITMOS?                                     \n\n");
printf ("Podemos  definir  os  algoritmos  como  uma  sequência  de  instruções  claras\n");
printf ("e  bem   definidas, com  o proposito de  solucionar  um determinado  objetivo.\n");
printf ("É essencial para uma aplicação ter algoritmos claros e bem definidos, evitando\n");
printf ("possíveis erros e para que os dispositivos executam de forma ágil a aplicação.\n\n");

system("pause");
system("cls");

printf ("Os algoritmos podem ser observados no dia-a-dia, como em receitas culinárias\n");
printf ("e manuais de  instruções.                                                   \n");
printf ("Os  programas,  aplicativos  e  softwares  que  usamos todos  os  dias,  são\n");
printf ("basicamente  algoritmos  escritos em  uma  linguagem de computação, e depois\n");
printf ("são interpretadas e executadas pelos dispositivos.                        \n\n");
system("pause");
system("cls");

printf ("EXEMPLO DE DIFERENTES ALGORITMOS PARA O MESMO PROBLEMA\n\n");
printf ("Duas pessoas têm os mesmos livros e resolvem colocá-los em ordem alfabética.\n\n\n");
printf ("             .--.           .---.        .-.               \n");
printf ("         .---|--|   .-.     |   |  .---. |~|    .--.       \n");
printf ("      .--|===|  |---|_|--.__|   |--|:::| |~|-==-|==|---.   \n");
printf ("      |  |   |  |===| |~~|  |   |--|   |_|~|    |  |___|-. \n");
printf ("      |A | F |  |===| |==|H |S  | B|:::|=| | T  |  |---|=| \n");
printf ("      |  |   |  |   |_|__|  |   |__|   | | |    |  |___| | \n");
printf ("      |~~|===|--|===|~|~~|  |~~~|--|:::|=|~|----|==|---|=| \n");
printf ("      ^--^---'--^---^-^--^--^---'--^---^-^-^-==-^--^---^-' \n\n\n");

system("pause");
system("cls");
printf ("A Primeira pessoa utiliza o método de ordenação “Insertion Sort”, que\n");
printf ("basicamente funciona da seguinte forma.                             \n");
printf ("Ela vai  selecionando  livros  do  primeiro  ao último,  e compara o\n");
printf ("livro selecionado com os livros que o antecedem, dessa forma achando\n");
printf ("seu lugar, e dessa forma colocando todos  em ordem.                 \n\n\n");

printf ("                   /////|       /////|               \n");
printf ("               __ ///// |   __ ///// |               \n");
printf ("              |  |===|  |  |  |===|  |               \n");
printf ("              |  |===|  |  |  |===|  |               \n");
printf ("              |  |   |  |  |  |   |  |               \n");
printf ("              |  | C |  |  |  | C |  |               \n");
printf ("              |  |   | /   |  |   | /                \n");
printf ("              |  |===|/    |  |===|/                 \n");
printf ("             \\ /\ '---'    \\ /\ '---'                  \n");
printf ("            .---.                  .-.               \n");
printf ("            |   |        .---.     |~|    .--.       \n");
printf ("            |   |        |:::|     |~|-==-|==|---.   \n");
printf ("            |   |        |   |     |~|    |  |___|-. \n");
printf ("            | B |        |:F:|     |G| T  |A |---|=| \n");
printf ("            |   |        |   |     | |    |  |___| | \n");
printf ("            |~~~|        |:::|     |~|----|==|---|=| \n");
printf ("            ^---'        ^---^     ^-^-==-^--^---^-' \n\n\n");
system("pause");
system("cls");

printf("    \n");
printf("              ________________________________________________\n");
printf("              /                                                \   \n");
printf("             |    _________________________________________     |\n");
printf("             |   |                                         |    |\n");
printf("             |   |               BEM-VINDO                 |    |\n");
printf("             |   |                                         |    |\n");
printf("             |   |                                         |    |\n");
printf("             |   |               AO JOGO                   |    |\n");
printf("             |   |                                         |    |\n");
printf("             |   |                                         |    |\n");
printf("             |   |             DA ADIVINHAÇÃO!!            |    |\n");
printf("             |   |                                         |    |\n");
printf("             |   |            \"INSERTION SORT\"             |    |\n");
printf("             |   |                                         |    |\n");
printf("             |   |   TENTE ACERTAR O NÚMERO DE 1 A 100     |    |\n");
printf("             |   |                                         |    |\n");
printf("             |   |_________________________________________|    |\n");
printf("             |                                                  |\n");
printf("              \_________________________________________________/\n");
printf("                     \___________________________________/\n");
printf("                  ___________________________________________\n");
printf("               _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_\n");
printf("            _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_\n");
printf("         _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_\n");
printf("      _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_\n");
printf("   _-'.-.-.-.-.-. .---.-. .-------------------------. .-.---. .---.-.-.-.`-\n");
printf("  :-------------------------------------------------------------------------:\n");
printf("  `---._.-------------------------------------------------------------._.---' \n");



    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    double pontos1 = 1000;
    int acertou = 0;
    int nivel;
    int escolha;

    int numerodetentativas;

    printf("                            Qual o nível de dificuldade?\n");
    printf("                         (1) Fácil (2) Médio (3) Difícil\n\n");


    escolha: printf("                          Escolha: ");
    scanf("%d", &nivel);
    switch (nivel){
        case 1:
            numerodetentativas = 12;
            break;

        case 2:
            numerodetentativas = 8;
            break;

        case 3:
            numerodetentativas = 5;
            break;

        default:
            printf("Erro!não Existe essa opção.");
            goto escolha;
    }



     for(int i = 1; i <= numerodetentativas; i++) {
        int escolha;

        printf("\n                         ******************");
        printf("\n                         *   Tentativa %d  *", tentativas);
        printf("\n                         ******************");
        imprimir(lista);




        loop: printf("\nQual é o seu chute? ");
        scanf("%d", &chute);
        removido = buscar(&lista, chute);
        if(removido){
                printf("Esse número ja foi tentado: %d\n", removido->valor);
                goto loop;
        }
            else{

        printf("Seu chute foi %d\n", chute);
            }
        int meiocerto,errou,proximo,chutemenor,chutemaior;
        acertou = (chute == numerosecreto);
        chutemaior = chute + 1;
        chutemenor = chute - 1;
        int chutemenor1 = chute - 2;
        int chutemaior1 = chute + 2;
        if(chute < 0 || chute > 100) {
            printf("\nVocê deve chutar números entre 0 e 100!\n");

            continue;
        }

        if(acertou){
            break;
        }

        if ((chutemaior == numerosecreto)||(chutemenor==numerosecreto)||(chutemaior1==numerosecreto)||(chutemenor1==numerosecreto)){
            system("cls");
            printf("\n          *Você descobriu o número secreto, ele estava ao lado do seu chute*\n");
            printf("            ******************************************************************\n");
                inserir_no_inicio(&lista,chutemenor1);
                inserir_no_inicio(&lista,chutemenor);
                inserir_no_inicio(&lista, chute);
                inserir_no_inicio(&lista, chutemaior);
                inserir_no_inicio(&lista, chutemaior1);
            goto acerto1;

        }
        else {
            system("cls");
            printf("\n          *Seu chute está errado, e não está ao lado número secreto*\n");
               printf("         ***********************************************************\n");
                inserir_no_inicio(&lista,chutemenor1);
                inserir_no_inicio(&lista,chutemenor);
                inserir_no_inicio(&lista, chute);
                inserir_no_inicio(&lista, chutemaior);
                inserir_no_inicio(&lista, chutemaior1);
 }
        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;

    }

    printf("\nFim de jogo!\n");

    if(acertou) {acerto1:
        printf("Você ganhou!\n");
        printf("Você acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
        printf("O número secreto era: %d\n\n",numerosecreto);
    } else {

        printf("Que pena, você não acertou!\n");
        printf("O número secreto era: %d\n\n",numerosecreto);

    }

system("pause");
system("cls");


printf (" A  Segunda  pessoa  prefere  utilizar  o método  de ordenação “Quicksort”  que\n");
printf ("basicamente funciona da seguinte forma.                                        \n");
printf ("Ele seleciona um livro aleatório, em  qualquer ponto da  sequência, e  passando\n");
printf ("para frente dele todos os outros livros com letra menor que o livro selecionado\n");
printf ("e  para trás dele todos  livros  com  a  letra  maior  que o livro selecionado.\n");
printf ("Isso será aplicado repetidas vezes até todos os livros estarem em ordem.       \n\n\n");

printf ("                                      /////|                    \n");
printf ("                                     ///// |------------>       \n ");
printf ("                                   |===|  |(maiores que ele)   \n");
printf ("                                    |===|  |                    \n");
printf ("                                    |   |  |                    \n");
printf ("                   (Menores que ele)| F |  | 		              \n");
printf ("                   <----------------|   | /		              \n");
printf ("                                    |===|/		              \n");
printf ("                                    '---'			              \n");
printf ("                .--.           .---.        .-.                 \n");
printf ("            .---|--|   .-.     |   |    .---. |~|    .--.       \n");
printf ("         .--|===|  |---|_|--.__|   |    |:::| |~|-==-|==|---.   \n");
printf ("         |  |   |  |===| |~~|  |   |    |   |_|~|    |  |___|-. \n");
printf ("         |E |   |A |===| |==|  |C  |    |:::|=| | R  |M |---|=| \n");
printf ("         |  |   |  |   |_|__|  |   |    |   | | |    |  |___| | \n");
printf ("         |~~|===|--|===|~|~~|  |~~~|    |:::|=|~|----|==|---|=| \n");
printf ("         ^--^---'--^---^-^--^--^---'    ^---^-^-^-==-^--^---^-' \n\n\n");

system("pause");
system("cls");

numerogrande = rand();
numerosecreto = numerogrande % 100;
    Lista lista1;
    No *coisa;
    criar_lista(&lista1);


printf("    \n");
printf("              ________________________________________________\n");
printf("              /                                                \   \n");
printf("             |    _________________________________________     |\n");
printf("             |   |                                         |    |\n");
printf("             |   |               BEM-VINDO                 |    |\n");
printf("             |   |                                         |    |\n");
printf("             |   |                                         |    |\n");
printf("             |   |                 AO JOGO                 |    |\n");
printf("             |   |                                         |    |\n");
printf("             |   |                                         |    |\n");
printf("             |   |             DA ADIVINHAÇÃO!!            |    |\n");
printf("             |   |                                         |    |\n");
printf("             |   |            \"  QUICKSORT  \"              |    |\n");
printf("             |   |                                         |    |\n");
printf("             |   |   TENTE ACERTAR O NÚMERO DE 1 A 100     |    |\n");
printf("             |   |                                         |    |\n");
printf("             |   |_________________________________________|    |\n");
printf("             |                                                  |\n");
printf("              \_________________________________________________/\n");
printf("                     \___________________________________/\n");
printf("                  ___________________________________________\n");
printf("               _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_\n");
printf("            _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_\n");
printf("         _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_\n");
printf("      _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_\n");
printf("   _-'.-.-.-.-.-. .---.-. .-------------------------. .-.---. .---.-.-.-.`-\n");
printf("  :-------------------------------------------------------------------------:\n");
printf("  `---._.-------------------------------------------------------------._.---' \n");

    printf("                            Qual o nível de dificuldade?\n");
    printf("                         (1) Fácil (2) Médio (3) Difícil\n\n");
    escolha1: printf("                          Escolha: ");
    scanf("%d", &nivel);

    switch (nivel){
        case 1:
            numerodetentativas = 12;
            break;

        case 2:
            numerodetentativas = 8;
            break;

        case 3:
            numerodetentativas = 5;
            break;

        default:
            printf("\nErro!não Existe essa opção.\n");
            goto escolha1;
    }

    tentativas = 1;
    for(int i = 1; i <= numerodetentativas; i++) {

        printf("\n                         ******************");
        printf("\n                         *   Tentativa %d  *", tentativas);
        printf("\n                         ******************");
        imprimir(lista1);

        loop1: printf("\n\nQual é o seu chute? ");
        scanf("%d",&chute);
        coisa = buscar(&lista1, chute);
        if(coisa){
                system("cls");
                printf("                    *Esse número ja foi tentado: %d*\n", coisa->valor);
                 printf("                   ********************************\n");
                goto loop1;
        }
            else{

        printf("Seu chute foi %d\n", chute);
            }

          if(chute < 0 || chute > 100) {
            system("cls");
            printf("\n                  *Você deve chutar números entre 0 e 100!*\n");
             printf("                   *****************************************\n");

            continue;

        }

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acertou){
            break;
        }

        else if(maior) {
                system("cls");
            printf("                   * Seu chute foi maior que o número secreto*\n");
             printf("                  *******************************************\n");
             inserir_no_inicio(&lista1, chute);
        }

        else {
                system("cls");
            printf("                    *Seu chute foi menor que o número secreto*\n");
             printf("                   ******************************************\n");
            inserir_no_inicio(&lista1, chute);
        }

        tentativas++;

        double pontosperdidos1 = abs(chute - numerosecreto) / (double)2;
        pontos1 = pontos1 - pontosperdidos1;

    }

    printf("Fim de jogo!\n");

    if(acertou) {

        printf("Você ganhou!\n");
        printf("Você acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos1);
        printf("O número secreto era: %d\n",numerosecreto);
    } else {
        printf("Que pena, você não acertou!\n");
        printf("O número secreto era: %d\n",numerosecreto);
    }

system("pause");
system("cls");

if (pontos>pontos1){

printf("Embora você tenha se saído melhor no primeiro jogo, é visível  que  os\n ");
printf("parâmetros para achar o número secreto no primeiro jogo são mais difícil\n ");
printf("que os parâmetros do segundo jogo.                                     \n ");
system("pause");
system("cls");

}
else{
printf("É visível  que  osparâmetros para achar o número secreto no primeiro jogo \n ");
printf("são mais difícil que os parâmetros do segundo jogo.\n ");
system("pause");
system("cls");

}
printf ("E assim como nesse exemplos entre os dois jogos.\n ");
printf ("Aplicações com o mesmo objetivo podem apresentar resultados diferentes, por \n");
printf ("possuir algoritmos diferentes ou por receberem dados diferentes.            \n");
printf ("Exemplo disso, são diferentes buscadores, feeds de redes sociais diferentes \n");
printf ("ou os anúncios diferentes  que cada pessoa recebe.                          \n");
    }










