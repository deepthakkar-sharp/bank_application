#include "headers.h"

int amount = 0;

void menu(){
  printf("\n\t\t Welcome To deep Bank PVT LTD\n");
  printf("\n\t\t \t MENU");
  printf("\n\t\t 1. Deposit" );
  printf("\n\t\t 2. Withdraw" );
  printf("\n\t\t 3. Avaiable Balance " );
  printf("\n\t\t 4. Exit " );
}

void deposit_menu(){
  int entered_amount;
  printf("\nEnter the Amount -> ");
  scanf("%d",&entered_amount);
  if(entered_amount < 0){
    printf("\n Entered Amount is Wrong\n");
    sleep(2);
    deposit_menu();
  }else{
    amount += entered_amount;
  }


}

void withdraw_menu(){
  int entered_amount;
  printf("\nEnter the Amount -> ");
  scanf("%d",&entered_amount);
  if(entered_amount < 0 || entered_amount > amount){
    printf("\n Entered Amount is Wrong\n");
    sleep(2);
    withdraw_menu();
  }else{
    amount -= entered_amount;
  }
}

void avail_balance_menu(){
  printf("\nYour Available Balance is %d\n",amount);
  sleep(3);
}

int main(){
  while(1){
    system("clear");
    menu();
    int choice;
    printf("\n\n\t\tEnter a Choice Number -> ");
    scanf("%d",&choice);
    switch(choice){
      case 1:
        deposit_menu();
        break;
      case 2:
        withdraw_menu();
        break;
      case 3:
        avail_balance_menu();
        break;
      case 4:
        printf("\nThanks For your Service\n");
        sleep(2);
        exit(0);
        break;
      default:
        printf("\n You Entered the wrong Number");
        break;
    }
  }
}
