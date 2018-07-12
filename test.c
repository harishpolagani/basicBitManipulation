#include<stdio.h>
#include<stdlib.h>
#define print(x) printf("0X%X \n",x)

int setBit(int *,int);
int cleatBit(int *,int);
int toggleBit(int *,int);
int chooseOption();
int readPosition();


 int fgi=0XFFFF;
 int position=0;


int main()
{

 while(1){
 
  printf("current fgi=0X%X\n",fgi);
  chooseOption();
  printf("new fgi: 0X%X \n",fgi);
 }
 return 0;
}
int readPosition()
{
 printf("please enter position :  ");
 scanf("%d",&position);
 
 return 0;
}
int chooseOption(){
int choice=0;
printf("please enter your operation choice \n");
printf(" 1. setBit \n 2. clearBit \n 3. toggleBit \n 4.exit : ");
scanf("%d",&choice);
switch(choice)
{
case 1: readPosition(); 
        setBit(&fgi,position);
        break;
case 2: readPosition(); 
        clearBit(&fgi,position);
        break;
case 3: readPosition(); 
        toggleBit(&fgi,position);
        break;
case 4: printf(" thank you \n exiting from the program \n"); 
        exit(0);
        break;
default: printf(" invalid option \n");
        break;
}

}

int setBit(int *v,int position){
 int initialVal = 0X0001;
*v = (*v) | (initialVal<<position-1);
 
 return 0;
}

int clearBit(int *v,int position)
{
 int initialVal = 0X0001;
 *v = (*v) & (~(initialVal<<position-1));
 
 return 0;
}

int toggleBit(int *v,int position)
{
int initialVal = 0X0001;

*v = (*v) ^ (initialVal << position-1);

return 0;
}
