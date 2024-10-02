#include <stdio.h>
#include <stdlib.h>

struct personne {
char nom[15] ;
char prenom[15] ;
int age;

};
int main (){
struct personne person={"hounaida","etrichi",22};
printf("le nom est %s\n",person.nom);
printf("le prenom est %s\n",person.prenom);
printf("le age est %d\n",person.age);
}