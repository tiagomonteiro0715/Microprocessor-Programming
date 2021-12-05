#include <stdio.h>

#include <stdlib.h>

typedef struct dataBase {
  struct num_serv_sec {
    int num_serie;
  };

  struct info_pessoal {
    char nome[100];
    int dia_nasc;
    int mes_nasc;
    int ano_nasc;
    int altura;
    char olhos[100];
    char cabelo[100];
  };

  struct info_numer {
    int bi;
    int contribuinte;
    int seg_social;
    int carta_cond;
  };

  struct morada {
    char rua[100];
    int cod_postal1;
    int cod_postal2;
    char cod_postal3[100];
  };

  struct confid {
    char partido[100];
    char clube[100];
  }; // até aqui, as estruturas ainda não foram criadas

  struct cidadao { //aqui, elas são criadas
    struct num_serv_sec nss;
    struct info_pessoal infp;
    struct info_numer infn;
    struct morada address;
    struct confid clubes;

  };
}
CITIZEN;

//lista ou estrutura com cidadão e seu numero em série
//função para criar outro cidadão
  //função para adicionar cidadão a lista
  /*
struct list{
    CITIZEN nome[20];
    int ptr -> num_serie;
};
*/
//------------------------------------------------------------------------------

CITIZEN pedro = {
  { //nss
    344532 //numero serviço secreto
  },
  { //info pessoal
    "pedro",
    12, //dia
    03, //mes
    2003, //ano
    130, //altura em cm
    "azuis", //cor dos olhos
    "castanho" //cor do cabelo
  },
  { //info numero
    103892723, //bi
    320392173, //contribuinte
    734394017, //seg_social
    434455917 //carta_cond
  },
  { //morada
    "Rua do porto",
    4184730,
    6748027,
    "rrtree"
  },
  { //confidencial
    "Partido dos mentirosos",
    "benfica"
  }
};

CITIZEN susana = {
  { //nss
    739827 //numero serviço secreto
  },
  { //info pessoal
    "susana",
    04, //dia
    11, //mes
    2000, //ano
    160, //altura em cm
    "verdes", //cor dos olhos
    "castanho" //cor do cabelo
  },
  { //info numero
    310007434 , //bi
    932761912 , //contribuinte
    197696000 , //seg_social
    561109608  //carta_cond
  },
  { //morada
    "Rua do sporting",
    2847049  ,
    9233099 ,
    "qwertyuiop"
  },
  { //confidencial
    "Partido dos mentirosos",
    "porto"
  }
};



//------------------------------------------------------------------------------

// st_name is the name of the structure
void le_nss(CITIZEN * ptr) {
  printf("\n===Conteudos nss===\n num_serie: %d\n\n", ptr -> num_serie); // =  (*ptr).num_seire
}

void le_info_pessoal(CITIZEN * ptr) {
  printf("\n===Conteudos info pessoal===\n nome:%s\n dia_nasc:%d\n mes_nasc:%d\n ano_nasc:%d\n altura:%d\n olhos:%s\n cabelo:%s\n\n",
    ptr -> nome, ptr -> dia_nasc,
    ptr -> mes_nasc, ptr -> ano_nasc, ptr -> altura, ptr -> olhos, ptr -> cabelo);
}

void le_info_numer(CITIZEN * ptr) {
  printf("\n===Conteudos info numero===\n bi:%d\n contribuinte:%d\n seg_social:%d\n carta_cond:%d\n\n",
    ptr -> bi, ptr -> contribuinte,
    ptr -> seg_social, ptr -> carta_cond);
}

void le_morada(CITIZEN * ptr) {
  printf("\n===Conteudos morada===\n rua:%s\n cod_postal1:%d\n cod_postal2:%d\n cod_postal3:%s\n\n",
    ptr -> rua, ptr -> cod_postal1,
    ptr -> cod_postal2, ptr -> cod_postal3);
}

void le_confidencial(CITIZEN * ptr) {
  printf("\n===Conteudos confidencial===\n partido:%s\n clube:%s\n\n",
    ptr -> partido, ptr -> clube
  );
}

void le_tudo(CITIZEN *person) {
  le_nss(person);
  le_info_pessoal(person);
  le_info_numer(person);
  le_morada(person);
  le_confidencial(person);
}

void menuChoices() {
  printf("\n/***********   PROGRAMA SIRP – Registo dos cidadaos **********/ \n\n");
  printf("a - Mostrar os numero de serie de todos os elementos da base de dados\n");
  printf("b - Mostrar toda a informacao do cidadao com um certo numero (a pedir)\n");
  printf("c - Modificar a informacao do cidadao com um certo numero (a pedir)\n");
  printf("d - Criar um novo registo para um novo cidadao\n");
  printf("e - Apagar o registo com um certo numero (a pedir)\n");
  printf("s - Sair do programa\n");
}


void menu() {
  char userMenuChoiceInput;
  int userMenuChoiceInputSucess = 0;
  char getWhiteSpace;

  menuChoices();

  while (!userMenuChoiceInputSucess) {
    printf("Por favor escolha uma destas opcoes:");
    scanf("%c", & userMenuChoiceInput);

    getWhiteSpace = getchar();

    switch (userMenuChoiceInput) {
    case 'a':
      break;
    case 'b':
      break;
    case 'c':
      break;
    case 'd':
      break;
    case 'e':
      break;
    case 's':
      exit(1);
    }
  }
}

void main() {
  menu();

}
