#include <stdio.h>
#include<string.h>
#include"operaciones.h"
//------------------------------------------------------------------------------------------
void salir(){
      printf("Joiddo su ejercicio vea");
}
//------------------------------------------------------------------------------------------
void red(){
      printf("ingrese los km q recorre\n");
}
//------------------------------------------------------------------------------------------
void opera(){
  int roots;
  printf("selecione el tipo de ruta\n1. Urbana: $0.10\n2. Interurbana: $0.15\n3. Internacional: $0.20\n");
  scanf("%d",&roots);
  switch(roots){
    case 1: 
      ur();
      break;
    case 2:
      in();
      break;
    case 3: 
      nal();
      break;
 }
}
//------------------------------------------------------------------------------------------
void menu(){
  int op;
  printf("Elija una opcion\n1. Operacion transporte\n2. interactuar con redes sociales\n3. salir\n");
  scanf("%d",&op);
   switch(op){
    case 1: 
      opera();
      break;
    case 2:
      red();
      break;
    case 3: 
      salir();
      break;
 }
}
//------------------------------------------------------------------------------------------
void ckratos(){
  int pin , z , x;
  z = 8520;
  x = 3;
  while((z!=pin)&&(x>0)){
  printf("Ingrese su clave\n");
  scanf("%d",&pin);
    if(z!=pin){
      x -= 1;
      printf("clave incorrecta intente nuevamente tiene %d intentos\n",x);
    }
    else{
      menu();
    }
  }
}
void cmessi(){
  int pin , z , x;
  z = 9630;
  x = 3;
  while((z!=pin)&&(x>0)){
  printf("Ingrese su clave\n");
  scanf("%d",&pin);
    if(z!=pin){
      x -= 1;
      printf("clave incorrecta intente nuevamente tiene %d intentos\n",x);
    }
    else{
      menu();
    }
  }
}
void cvaca(){
  int pin , z , x;
  z = 7410;
  x = 3;
  while((z!=pin)&&(x>0)){
  printf("Ingrese su clave\n");
  scanf("%d",&pin);
    if(z!=pin){
      x -= 1;
      printf("clave incorrecta intente nuevamente tiene %d intentos\n",x);
    }
    else{
      menu();
    }
  }
}
//------------------------------------------------------------------------------------------
void usu(){
  int x , pin;
  char nombre1 [20] = "vaca";
  char nombre2 [20] = "messi";
  char nombre3 [20] = "kratos";
  char nombrec [20];
  x = 3;
  while((strcmp(nombre1,nombrec)!=0)&&(strcmp(nombre2,nombrec)!=0)&&(strcmp(nombre3,nombrec)!=0)&&(x>0)){
  printf("Ingrese su nombre de Usuario\n");
  scanf("%s",&nombrec);
  if(strcmp(nombre1,nombrec)==0){
    cvaca();
  }
  else{
    if(strcmp(nombre2,nombrec)==0){
    cmessi();
  }
  else{
    if(strcmp(nombre3,nombrec)==0){
    ckratos();
  }
  else{
    x -=1;
  printf("usuario incorrecto ingrese nuevamente tiene hasta %d intentos\n",x);
  }
  }
  }
}
}