#include <stdio.h>

/*
Função genérica que le inteiros(intervalos em que os valores têm que estar)
Função genérica que le vetores  de  caracteres  (na  sua  lista  de parâmetros pode ter o comprimento máximo).

Dar escolha ao utilizador daquilo que ele quer ver.

máx numero de cidadãos - 50

*/

/*

le_nss
 le_info_pessoal
 le_info_numer
 le_morada
 le_confidencial

 */

void main() {

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
    };

    struct cidadao {
      struct num_serv_sec nss;
      struct info_pessoal infp;
      struct info_numer infn;
      struct morada address;
      struct confid clubes;

    };
  }
  TIAGO;
}
