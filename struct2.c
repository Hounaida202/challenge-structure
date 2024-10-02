#include <stdio.h>
#include <stdlib.h>

struct etudiant {
    char nom[15];
    char prenom[15];
    int note[5];
};
int main(){
struct etudiant s={"hounaida","etrichi",{12,15,10,1,17,}};
printf("le nom est %s\n",s.nom);
printf("le prenom est %s\n",s.prenom);
printf("les notes sont :\n");

for(int i=0;i<5;i++){
printf("%d\n",s.note[i]);
}
}