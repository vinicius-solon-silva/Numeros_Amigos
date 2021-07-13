#include <stdio.h>

int amigos(int a, int b){
  int z,soma1,soma2,i;

  for(i=1; i<a; i++){
    if((a%i)==0){
      soma1 += i;
    }
  }
  printf("\n\n");
  for(i=1; i<b; i++){
    if((b%i)==0){
      soma2 += i;
    }
  }
  
  if( (a==soma2) && (b==soma1)){
    z=1;
  }else{
    z=0;
  }

  return z;
}

int main(void) {

  int x,y,z;
  
  printf("\nDigite um numero: ");
  scanf("%d",&x);
  printf("\nDigite um numero: ");
  scanf("%d",&y);

  z = amigos(x,y);

  if(z==1){
    printf("\n\nSão amigos!");
  }else if(z==0){
    printf("\n\nNão são amigos...");
  }

  return 0;
}