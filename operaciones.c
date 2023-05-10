#include <stdio.h>
#include<string.h>

void des(int multi){
  float des;
   if (multi >= 500.0) {
        des = multi*0.20;
    } else if (multi >= 100.0) {
        des = multi*0.15;
    } else if (multi >= 50.0) {
        des = multi*0.10;
    }
  printf("la tarifa con el descuento aplicado es de: %f\n",des);
}
//------------------------------------------------------------------------------------------
void ur(){
  int km,multi;
  printf("ingrese los km q recorre\n");
  scanf("%d",&km);
  multi = km*0.10;
  des(multi);
}
void in(){
  int km,multi;
  printf("ingrese los km q recorre\n");
  scanf("%d",&km);
  multi = km*0.15;
  des(multi);
  
}
void nal(){
  int km,multi;
  printf("ingrese los km q recorre\n");
  scanf("%d",&km);
  multi = km*20;
  des(multi);
  
}
