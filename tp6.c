#include <stdlib.h>
#include <stdio.h>
#include <math.h>


struct list {
  int n;
  double c;
  struct list * next;
};

struct list * ajout (int n, double c, struct list * l);
void print_list(struct list *l) ;
struct list * supprime (struct list *l) ;
double eval(struct list *l, double x);
int main() {
  struct list * l = NULL;
  l = ajout(10,1,l);
  l = ajout(7,1,l);
  l = ajout(12,1,l);
  l = ajout(9,1,l);
  print_list(l);
  l=supprime(l);
  print_list(l);
  l = ajout(9,2,l);
  print_list(l);
  printf("val=%f\n",eval(l,1));
}

struct list * supprime (struct list *l) {
  struct list *mail = l;
  l = l->next;
  free(mail);
  return(l);
}

struct list * ajout (int n, double c, struct list * l) {
  struct list * crt = l;
  struct list * prec= NULL;
  while (crt != NULL && crt->n > n) {
    prec = crt ;
    crt = crt -> next ;
  }

  if (crt!=NULL && crt->n==n) {
    crt->c += c;
    return(l);
  }

  struct list *elem ;
  elem =(struct list*) malloc(sizeof(struct list));
  elem->n = n;
  elem->c = c;

  if (prec == NULL)
    l = elem ;
  else
    prec -> next= elem;
  
  elem -> next=crt ;
  return(l);
  
}

void print_list(struct list *l) {
  while (l!=NULL) {
    printf("%3.2fx^%d +",l->c,l->n);
    l=l->next;
  }
  printf("\n");
}

double eval(struct list *l, double x) {
  double val;
  while (l!=NULL) {
    val += l->c*pow(x,l->n);
    l=l->next;
  }
  return(val);
}
