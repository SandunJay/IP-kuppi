#include <stdio.h>

int main(void) {

  char opt,size,choice;
  int qty,top;
  float price,top_cost;
  
  printf("INput pizza option: ");
  scanf("%c",&opt);

  switch(opt){
    case '1':
      {
        printf("Enter pizza size: ");
        scanf("%*c%c",&size);

        printf("ENter the quantity: ");
        scanf("%d",&qty);
          
        if(size=='P'){
          
          price = qty*560;
        }
        if(size=='M'){
          price= qty*920;
        }
        if(size=='L'){
          price= qty*1800;
        }
      }
      break;
    case '2':
      {
        printf("Enter pizza size: ");
        scanf("%*c%c",&size);

        printf("ENter the quantity: ");
        scanf("%d",&qty);
          
        if(size=='P'){
          
          price = qty*340;
        }
        if(size=='M'){
          price= qty*660;
        }
        if(size=='L'){
          price= qty*1300;
        }
      }
    break;
    case '3':
      {
        printf("Enter pizza size: ");
        scanf("%*c%c",&size);

        printf("ENter the quantity: ");
        scanf("%d",&qty);
          
        if(size=='P'){
          
          price = qty*760;
        }
        if(size=='M'){
          price= qty*1100;
        }
        if(size=='L'){
          price= qty*2100;
        }
      }
    break;
    default:
      {
        printf("Invalid option");
        return 0;
      }
  }

choice='Y';
  while(choice!='N')
    {
      if(choice=='Y')
      {
      printf("Input your topping option");
      scanf("%i",&top);
      if(top==1){
        top_cost= 320*qty;
      }
      else if(top==2){
        top_cost=140*qty;
      }
      else if(top==3){
        top_cost=130*qty;
      }
      else if(top==4){
        top_cost=110*qty;
      }
      else
        printf("Invalid T option");
      }
      printf("Do you need to add more toppings: ");
      scanf("%*c%c",&choice);
    }

  price= price+top_cost;
  printf("Total charge : %.2f",price);
  return 0;
}
