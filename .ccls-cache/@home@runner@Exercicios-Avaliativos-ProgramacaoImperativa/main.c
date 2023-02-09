/*****************************************************************
PBL C1
******************************************************************/

#include <stdio.h> 

int main() {
  int p, r, n, result;
  printf("Progressão Aritmética\n");
  printf("Primerio termo: ");
  scanf("%d",&p);
  printf("Razão: ");
  scanf("%d",&r);
  printf("n: ");
  scanf("%d",&n);
  result = p+(n-1)*r;
  printf("O n-ésimo termo da P.A. é: %d", result);
  return 0;
}

/****************************************************************/

#include <stdio.h> 

int main(){
  int placa, estado, cidade, numero;
  printf("Consulta de Placa\n");
  printf("Insira o número da placa: ");
  scanf("%4d",&placa);
  estado=placa/1000;
  cidade=placa%1000/100;
  numero=placa%100;
  
  printf("Estado: %d\n", estado);
  printf("Cidade: %d\n", cidade);
  printf("Número: %d\n", numero);

  return(0);
}

/*****************************************************************
 PBL C2
******************************************************************/

#include <stdio.h>
#include <string.h>

int main(){
  int consoante=0;
  int vogal=0;
  int ascii;
  int i;

  while(i!='0'){
    puts("Insira um caracter: ");
    i=getchar();
    getchar();
    ascii=i;
    if ((ascii>=97 && ascii<123) || (ascii>=65 && ascii<91)){
      if(i=='a' || i=='e' || i=='i'|| i=='o' || i=='u' || i=='A' || i=='E' || i=='I'|| i=='O' || i=='U'){
        vogal++;
      }
      else{
        consoante++;
      }
    } 
  }
  printf("Vogais: %d\nConsoantes: %d",vogal,consoante);
  return 0;
}

/****************************************************************/

#include <stdio.h>

int main(){
  int inferior, superior, verificador, x, contador;
  for(contador=1; contador<=3 && superior<=inferior; contador=contador+1) {
    printf("Insira um número para o limite inferior do intervalo: ");
    scanf("%d",&inferior);
    printf("Insira um número para o limite superior do intervalo: ");
    scanf("%d",&superior);
  }
  if(superior>inferior){
    printf("Os multiplos de 3 são: \n");
    for(x=inferior; x<=superior; x=x+1){
        if(x%3==0){
          printf("%d\n",x);
          }
    } 
  }else{printf("Suas tentativas acabaram.");
  } 
  return 0;
}

/*****************************************************************
 PBL C3
******************************************************************/

#include <stdio.h> 
int main(){
  int a,b,n,i,sum;
  a=0;
  b=1;
  printf("Digite um número: ");
  scanf("%d",&n);
  if (n<1){
    printf("Valor inválido");
  }
  printf("\nSequência Fibonacci: \n");
  printf("%d\n%d\n",a,b);
  for (i=3;i<=n;i++){
    sum=a+b;
    a=b;
    b=sum;
    printf("%d\n",sum);
  }
  return 0;
}

/*****************************************************************/

#include <stdio.h> 
int main(){ 
  int n; 
  char a, b; 
  printf("Digite um número inteiro: "); 
  scanf("%d", &n); 
  getchar(); 
  printf("Digite um caracter: "); 
  a = getchar(); 
  if (n==1||n==2){
    b=a+2;
    printf("%c\n%c\n",a,b);
  }
  else if(n==3){
    a=a+5;
    b=a-2;
    printf("%c\n%c\n",a,b);
  }
  else if(n==4){
    b=a-2;
    printf("%c\n%c\n",a,b);
  }
  else{
    if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u')){
      printf("Vogal\n"); 
    }
    else{
      printf("Consoante\n");
    }
  }
  return 0; 
}

/*****************************************************************
 PBL C4
******************************************************************/

#include <stdio.h>
#include <string.h>
const int NUM_MESES = 12;
const int NUM_PINTORES = 20;

enum Mes { JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ };

const char *const mes_str[12] = {
    "Janeiro", "Fevereiro", "Março",    "Abril",   "Maio",     "Junho",
    "Julho",   "Agosto",    "Setembro", "Outubro", "Novembro", "Dezembro"};
struct Pessoa {
  char nome[50];
  enum Mes mes; // mês de aniversário
};

int selecao_mes() {
  int count, mes;

  puts("Seleção dos meses:");
  for (count = 0; count < 12; count++) {
    printf("(%2d) %s\n", count + 1, mes_str[count]);
  }
  puts("Selecione o mês para pesquisar: ");
  scanf("%d", &mes);
  mes -= 1;

  return mes;
}

int main() {
  int mes, count, num = 0;

  struct Pessoa pintor[NUM_PINTORES];
  pintor[0].mes = JAN;
  strcpy(pintor[0].nome, "Leonardo da Vinci");
  pintor[1].mes = ABR;
  strcpy(pintor[1].nome, "Sandro Botticelli");
  pintor[2].mes = AGO;
  strcpy(pintor[2].nome, "Georges Seurat");
  pintor[3].mes = ABR;
  strcpy(pintor[3].nome, "Vincent van Gogh");
  pintor[4].mes = SET;
  strcpy(pintor[4].nome, "Paul Gauguin");
  pintor[5].mes = JUN;
  strcpy(pintor[5].nome, "Edouard Manet");
  pintor[6].mes = OUT;
  strcpy(pintor[6].nome, "Paul Cezanne");
  pintor[7].mes = JUN;
  strcpy(pintor[7].nome, "Auguste Renoir");
  pintor[8].mes = JUN;
  strcpy(pintor[8].nome, "Claude Monet");
  pintor[9].mes = AGO;
  strcpy(pintor[9].nome, "Pablo Picasso");
  pintor[10].mes = DEZ;
  strcpy(pintor[10].nome, "Edgar Degas");
  pintor[11].mes = ABR;
  strcpy(pintor[11].nome, "Edvard Munch");
  pintor[12].mes = JAN;
  strcpy(pintor[12].nome, "Michelangelo Merisi Caravaggio");
  pintor[13].mes = JAN;
  strcpy(pintor[13].nome, "Michelangelo Buonarroti");
  pintor[14].mes = SET;
  strcpy(pintor[14].nome, "Tarsila do Amaral");
  pintor[15].mes = AGO;
  strcpy(pintor[15].nome, "Gustav Klimt");
  pintor[16].mes = NOV;
  strcpy(pintor[16].nome, "Rembrandt van Rijn");
  pintor[17].mes = MAI;
  strcpy(pintor[17].nome, "Amedeo Modigliani");
  pintor[18].mes = SET;
  strcpy(pintor[18].nome, "Caillebotte");
  pintor[19].mes = SET;
  strcpy(pintor[19].nome, "Joseph Turner");

  mes = selecao_mes();

  if (mes > 11 || mes < 0) {
    puts("Valor inválido!");
  } else {
    printf("Pintores nascidos no mês %s:\n", mes_str[mes]);
    for (count = 0; count <= 20; count++) {
      if (pintor[count].mes == mes) {
        num++;
        printf("(%d) %s\n", num, pintor[count].nome);
      }
    }
    if (num == 0) {
      puts("==> Nenhum pintor foi encontrado.");
    } else if (num == 1) {
      puts("==> Apenas um pintor foi encontrado.");
    } else {
      printf("==> %d pintores encontrados.", num);
    }
  }
}

/*****************************************************************
 PBL C5
******************************************************************/

/*#include <math.h>
#include <stdio.h>

double obter_coeficiente(char *, double *);
double calcular_delta(double, double, double);

double obter_coeficiente(char *par, double *coeficiente) {
  int i; 
  for (i = 0; i < 25; i++) {printf("%c", par[i]);}
  scanf("%lf", &*coeficiente);
  return *coeficiente;}

double calcular_delta(double coef_a, double coef_b, double coef_c) {
  double delta = pow(coef_b, 2) - 4 * coef_a * coef_c;
  return delta;}

int main() {
  double i;
  printf("Forma geral da equação do segundo grau: a x**2 + b x + c = 0\n");
  
  double coef_a = obter_coeficiente("Digite o coeficiente a: ", &coef_a);
    if (coef_a == 0) {printf("O coeficiente a não pode ser zero!\n"); return 0;}
  
  double coef_b = obter_coeficiente("Digite o coeficiente b: ", &coef_b);
  double coef_c = obter_coeficiente("Digite o coeficiente c: ", &coef_c);
  
  double delta = calcular_delta(coef_a, coef_b, coef_c);
  if (delta < 0) puts("A equação não possui raizes.");
  else if (delta == 0) printf("A equação possui somente uma raiz %lf.", (-coef_b / (2 * coef_a)));
  else{i = pow(delta, 0.5); printf("A equação possui  duas raizes %lf e %lf.",
           ((-coef_b + i) / (2 * coef_a)), ((-coef_b - i) / (2 * coef_a)));}
  
  return 0;
}*/

#include <math.h>
#include <stdio.h>

double obter_coeficiente(char *, double *);
double calcular_delta(double, double, double);
void responder_sem_raiz();
void responder_uma_raiz(double, double);
void responder_duas_raizes(double, double, double);

double obter_coeficiente(char *par, double *coeficiente) {
  int i;
  for (i = 0; i < 25; i++) {printf("%c", par[i]);}
  scanf("%lf", &*coeficiente);
  return *coeficiente;}

double calcular_delta(double coefa, double coefb, double coefc) {
  double delta; 
  delta = pow(coefb, 2) - 4 * coefa * coefc; 
  return delta;}


void responder_sem_raiz() {puts("A equação não possui raizes.");}

void responder_uma_raiz(double coefa, double coefb) {
  printf("A equação possui somente uma raiz %lf.", (-coefb / (2 * coefa)));}

void responder_duas_raizes(double coefa, double coefb, double delta) {
  double i;i = pow(delta, 0.5);
  printf("A equação possui  duas raizes %lf e %lf.",((-coefb + i) / (2 * coefa)), ((-coefb - i) / (2 * coefa)));
}


int main() {
  printf("Forma geral da equação do segundo grau: a x**2 + b x + c = 0\n");
  double coef_a = obter_coeficiente("Digite o coeficiente a: ", &coef_a);
  if (coef_a == 0) {
    printf("O coeficiente a não pode ser zero!\n");
    return 0;
  }
  double coef_b = obter_coeficiente("Digite o coeficiente b: ", &coef_b);
  double coef_c = obter_coeficiente("Digite o coeficiente c: ", &coef_c);
  double delta = calcular_delta(coef_a, coef_b, coef_c);
  if (delta < 0)
    responder_sem_raiz();
  else if (delta == 0)
    responder_uma_raiz(coef_a, coef_b);
  else
    responder_duas_raizes(coef_a, coef_b, delta);
  return 0;
}

/*****************************************************************
 PBL C6
******************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_PRODUCTS 4
#define MAX_DESCRIPTION 30
enum Operations_e {Listar,Inserir,Remover,Atualizar,Aumentar,Diminuir,Fechar};
char* operations[] = {"Listar catalogo","Inserir produto","Remover produto","Atualizar estoque","Aumentar estoque","Diminuir estoque","Fechar programa"};

struct Product{
    int     id;
    char    description[MAX_DESCRIPTION];
    int     stock;
    enum    {ELETRODOMESTICO,FERRAMENTA,VESTUARIO} category;
};

struct Product tabela[MAX_PRODUCTS];

void listar_catalogo(struct Product tabela[MAX_PRODUCTS],int id_produto){
    puts("\nCatalogo:");
    for(int i = 0;i <= id_produto;i++){
        char categoria[20];

        switch(tabela[i].category){
            case 0:
                strcpy(categoria,"ELETRODOMESTICO");
                break;
            case 1:
                strcpy(categoria,"FERRAMENTA");
                break;
            case 2:
                strcpy(categoria,"VESTUARIO");
                break;
        }

        printf("\nID => %d\nDESCRICAO => %s\nESTOQUE => %d\nCATEGORIA => %s\n",tabela[i].id,tabela[i].description,tabela[i].stock,categoria);
    }
}

bool IHC_inserir_produto(struct Product tabela[MAX_PRODUCTS],int id_produto){
    char description[MAX_DESCRIPTION];
    int category = 0;

    printf("\nDigite a descrição do seu produto: ");
    scanf("%s",&description);

    puts("\n0 => Eletrodomestico | 1 => Ferramenta | 2 => Vestuario");
    printf("Digite a categoria do seu produto com base na tabela acima: ");
    scanf("%d",&category);

    if(category < 0 || category > 2){
        return false;
    }

    tabela[id_produto].id = id_produto;
    strcpy(tabela[id_produto].description,description);
    tabela[id_produto].stock = 0;
    tabela[id_produto].category = category;

    return true;
}

bool IHC_remover_produto(int id_produto){
    int id_selecionado;

    printf("Digite o codigo do produto desejado: ");
    scanf("%d",&id_selecionado);

    if(id_selecionado > id_produto){
        return false;
    }

    for(int i = id_selecionado;i < id_produto;i++){
        tabela[i].id = i;
        strcpy(tabela[i].description,tabela[i+1].description);
        tabela[i].stock = tabela[i+1].stock;
        tabela[i].category = tabela[i+1].category;
    }
  return true;
}

bool IHC_atualizar_estoque(int id_produto){
    int id_selecionado,new_stock;

    printf("Digite o codigo do produto desejado: ");
    scanf("%d",&id_selecionado);

    if(id_selecionado > id_produto){
        return false;
    }

    printf("Digite a quantidade desejada do produto: ");
    scanf("%d",&new_stock);

    if(new_stock < 0){
        return false;
    }

    tabela[id_selecionado].stock = new_stock;
    return true;
}

bool IHC_aumentar_estoque(int id_produto){
    int id_selecionado,new_stock;

    printf("Digite o codigo do produto desejado: ");
    scanf("%d",&id_selecionado);

    if(id_selecionado > id_produto){
        return false;
    }

    printf("Digite a quantidade que deseja aumentar do produto: ");
    scanf("%d",&new_stock);

    tabela[id_selecionado].stock += new_stock;
    return true;
}

bool IHC_diminuir_estoque(int id_produto){
    int id_selecionado,new_stock;

    printf("Digite o codigo do produto desejado: ");
    scanf("%d",&id_selecionado);

    if(id_selecionado > id_produto){
        return false;
    }

    printf("Digite a quantidade que deseja diminuir do produto: ");
    scanf("%d",&new_stock);

    if((tabela[id_selecionado].stock -= new_stock) < 0){
        tabela[id_selecionado].stock += new_stock;
        return false;
    }else{
        return true;
    }
}

int main(){
    int id_produto = 0;
    int choice;

    tabela[id_produto].id = id_produto;
    strcpy(tabela[id_produto].description,"Camiseta Preta");
    tabela[id_produto].stock = 2;
    tabela[id_produto].category = 2;

    id_produto++;

    tabela[id_produto].id = id_produto;
    strcpy(tabela[id_produto].description,"Micro-ondas");
    tabela[id_produto].stock = 1;
    tabela[id_produto].category = 0;

    while(choice != 7){
        puts("\nTabela de operacoes possiveis:");
        for(enum Operations_e op = Listar;op <= Fechar;op++){
            printf("%d => %s\n",op+1,operations[op]);
        }

        printf("Escolha uma dentre as operacoes acima: ");
        scanf("%d",&choice);

        while((choice < 1) || (choice > 7)){
            printf("VALOR INVALIDO! Insira novamente o codigo: ");
            scanf("%d",&choice);
        }

        switch(choice){
            case 1:
                listar_catalogo(tabela,id_produto);
                break;
            case 2:
                id_produto++; //aumenta o número total de produtos
                if(IHC_inserir_produto(tabela,id_produto) == true){
                    puts("\nProduto adicionado!");
                }else{
                    puts("\nOcorreu algum erro no processo.");
                }
                break;
            case 3:
                if(IHC_remover_produto(id_produto) == true){
                    puts("\nProduto removido!");
                }else{
                    puts("\nOcorreu algum erro no processo.");
                }
                id_produto--;
                break;
            case 4:
                if(IHC_atualizar_estoque(id_produto) == true){
                    puts("\nEstoque atualizado!");
                }else{
                    puts("\nOcorreu algum erro no processo.");
                }
                break;
            case 5:
                if(IHC_aumentar_estoque(id_produto) == true){
                    puts("\nEstoque aumentado!");
                }else{
                    puts("\nOcorreu algum erro no processo.");
                }
                break;
            case 6:
                if(IHC_diminuir_estoque(id_produto) == true){
                    puts("\nEstoque diminuido!");
                }else{
                    puts("\nOcorreu algum erro no processo.");
                }
                break;
        }
    }
    puts("Programa finalizado com sucesso.");

    return 0;
}

/*****************************************************************
 TDE 2
******************************************************************/ 

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) {
  if (argc < 2) {
    fprintf(stderr,"Forneca o caminho completo do arquivo por meio do parametro: \n");
    exit(EXIT_SUCCESS);
  }
  int x,y,i;
  FILE*fp= fopen(argv[1], "r"); 
  if (fp == NULL) {
    fprintf(stderr, "Arquivo nao encontrado. \n");
    exit(EXIT_FAILURE);
  }
  printf("\n");
  int count[256] = {0};
  while((y=fgetc(fp))) {
    if(y == EOF) break;
    count[y]+=1;
  }
  for(x=0; x<256; x++) {
    if(count[x] > 0) {
      printf("Letra %c: %d vezes\n", x, count[x]);
    }
  }
  fclose(fp);
  printf("\nSucesso \n");
  return EXIT_SUCCESS;
  }