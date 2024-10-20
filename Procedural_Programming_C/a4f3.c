#include <stdio.h>
int main (){

int kwdikos,atoma;
long kostos,kerdos,total=0;


printf("Dwse kwdiko: ",kwdikos);
kwdikos=GetInteger();


while (kwdikos==1  ){
 printf("Dwse arithmo atomwn: ",atoma);
 atoma=GetInteger();

 if (atoma>10)
    kostos=(350*atoma)-(350*0.18*atoma);
  else kostos=350*atoma;
  printf("Kostos: %ld \n",kostos);
  total+=kostos;
  printf("Dwse kwdiko: ",kwdikos);
kwdikos=GetInteger();
}

while (kwdikos==2){
    kerdos=total-20000;
    printf("Kerdos %ld: ",kerdos);
    return 0;
}









while (kwdikos!=1 && kwdikos!=2){
    printf("Lathos! \n");


    printf("Dwse kwdiko: ",kwdikos);
   kwdikos=GetInteger();
   while (kwdikos==1  ){
 printf("Dwse arithmo atomwn: ",atoma);
 atoma=GetInteger();

 if (atoma>10)
    kostos=(350*atoma)-(350*0.18*atoma);
  else kostos=350*atoma;
  printf("Kostos: %ld \n",kostos);
  total+=kostos;
  printf("Dwse kwdiko: ",kwdikos);
kwdikos=GetInteger();
}
while (kwdikos==2){
    kerdos=total-20000;
    printf("Kerdos %ld: ",kerdos);
    return 0;
}

}
}




























