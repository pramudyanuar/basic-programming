#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
  char NIP[10];
  char NAMA[25];
  struct data *uhuy;
}data;

int main() {
  data *a, *b, *c;

  a = (data *)malloc(sizeof(data));
  b = (data *)malloc(sizeof(data));
  c = (data *)malloc(sizeof(data));

  strcpy(a->NIP, "1234");
  strcpy(a->NAMA, "Hanip");

  strcpy(b->NIP, "1823");
  strcpy(b->NAMA, "Maghribi");

  strcpy(c->NIP, "1827");
  strcpy(c->NAMA, "Jumatan");

  a->uhuy=b;

}