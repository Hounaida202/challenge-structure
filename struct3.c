#include <stdio.h>
#include <stdlib.h>

struct rectangle {
float longueur;
float largeur;
float aire;
};

void affichersurface(struct rectangle R){
R.aire=R.longueur * R.largeur;
printf("l aire est %2.f",R.aire);
}

int main(){
struct rectangle s={4,5};
affichersurface(s);
}