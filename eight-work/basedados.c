#include <stdio.h>

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

void le_tudo(CITIZEN * person) {
  le_nss(person);
  le_info_pessoal(person);
  le_info_numer(person);
  le_morada(person);
  le_confidencial(person);
}

void main() {

  CITIZEN tiago = {
    { //nss
      344532
    },
    { //info pessoal
      "Tiago",
      23,
      234,
      2345,
      213,
      "iiuy",
      "tdisj"
    },
    { //info numero
      1,
      23,
      234,
      2345
    },
    { //morada
      "eerrw",
      564,
      345,
      "rrtree"
    },
    { //confidencial
      "wert",
      "dfty"
    }
  };
  le_tudo( & tiago);

}
