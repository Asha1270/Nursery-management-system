#include<stdio.h>
#include<stdlib.h>

int main()
{

  char *productName[]={"rose","jasmine","allamanda","kamini","morningGlory","gondhoraj","strawberry","mango","jackfruit","orange","aloeVera","grass"};
  char product_name[29];
  int product_quantity[19];
  int count1=0,total_bill=0,discount,choose,temp;
  int rose_p=300,jasmine_p=150,allamanda_p=340,kamini_p=120,morningGlory_p=300,gondhoraj_p=349,strawberry_p=190,mango_p=700,jackfruit_p=850,orange_p=1200,aloeVera_p=100,grass_p=90;
   void generate_bill()
   {
     printf("product ,quantity and price \n");
     printf("------------------------------\n");
     for(int i=0; i < count1;i++)
     {
         if(!strcmp("rose",product_name[i]))
            {
           printf("| %s \t %d \t %d",product_name[i],product_quantity[i],rose_p*product_quantity[i]);
            printf("---------------------------------\n");

         }
          else if(!strcmp("jasmine",product_name[i]))
            {
           printf("| %s \t %d \t %d \n",product_name[i],product_quantity[i],jasmine_p*product_quantity[i]);
           printf("---------------------------------\n");
        }
         else if(!strcmp("allamanda",product_name[i]))
            {
           printf("%s \t %d \n",product_name[i],product_quantity[i],allamanda_p*product_quantity[i]);
           printf("---------------------------------\n");
        }
         else if(!strcmp("kamini",product_name[i])){
           printf("%s \t %d \n",product_name[i],product_quantity[i],kamini_p*product_quantity[i]);
           printf("---------------------------------\n");
        }
         else if(!strcmp("morningGlory",productName[i])){
           printf("%s \t %d \n",product_name[i],product_quantity[i],morningGlory_p*product_quantity[i]);
           printf("---------------------------------\n");
        }
         else if(!strcmp("gondhoraj",product_name[i])){
           printf("%s \t %d \n",product_name[i],product_quantity[i],gondhoraj_p*product_quantity[i]);
           printf("---------------------------------\n");
        }
         else if(!strcmp("strawberry",product_name[i])){
           printf("%s \t %d \n",product_name[i],product_quantity[i],strawberry_p*product_quantity[i]);
           printf("---------------------------------\n");
        }
         else if(!strcmp("mango",product_name[i])){
           printf("%s \t %d \n",product_name[i],product_quantity[i],mango_p*product_quantity[i]);
           printf("---------------------------------\n");
        }
         else if(!strcmp("jackfruit",product_name[i])){
           printf("%s \t %d \n",product_name[i],product_quantity[i],jackfruit_p*product_quantity[i]);
           printf("---------------------------------\n");
        }
         else if(!strcmp("orange",product_name[i])){
           printf("%s \t %d \n",product_name[i],product_quantity[i],orange_p*product_quantity[i]);
           printf("---------------------------------\n");
        }
         else if(!strcmp("aloeVera",product_name[i])){
           printf("%s \t %d \n",product_name[i],product_quantity[i],aloeVera_p*product_quantity[i]);
           printf("---------------------------------\n");
        }
         else if(!strcmp("grass",product_name[i])){
           printf("%s \t %d \n",product_name[i],product_quantity[i],grass_p*product_quantity[i]);
           printf("---------------------------------\n");
        }

    }
    printf("|Total product %d \t \t Total amount %d \n",count1,total_bill);
    printf("--------------------------------------\n");
    printf("----------%d \n",discount);
    printf("Payable amount %d\n",total_bill);
    printf("--------------------------------------\n");

    void calculate_bill(){
    char choose;
    for(int i=0;i<count1;i++){
        if(!strcmp("rose",product_name[i])){
            total_bill+=rose_p*product_quantity[i];
        }
        else if (!strcmp("jasmine",product_name[i])){
            total_bill+=jasmine_p*product_quantity[i];
        }
         else if (!strcmp("allamanda",product_name[i])){
            total_bill+=allamanda_p*product_quantity[i];
        }
        else if (!strcmp("kamini",product_name[i])){
            total_bill+=kamini_p*product_quantity[i];
        }
        else if (!strcmp("morningGlory",product_name[i])){
            total_bill+=morningGlory_p*product_quantity[i];
        }
        else if (!strcmp("gondhoraj",product_name[i])){
            total_bill+=gondhoraj_p*product_quantity[i];
        }
        else if (!strcmp("strawberry",product_name[i])){
            total_bill+=strawberry_p*product_quantity[i];
        }
        else if (!strcmp("mango",product_name[i])){
            total_bill+=mango_p*product_quantity[i];
        }
        else if (!strcmp("jackfruit",product_name[i])){
            total_bill+=jackfruit_p*product_quantity[i];
        }
        else if (!strcmp("orange",product_name[i])){
            total_bill+=orange_p*product_quantity[i];
        }
        else if (!strcmp("grass",product_name[i])){
            total_bill+=grass_p*product_quantity[i];
        }
    }
  }
  total_bill=total_bill;
  if(total_bill>=5000)
  {
      discount=(15*total_bill)/100;
      total_bill=total_bill-discount;
  }
else if(total_bill>=3000 && total_bill<5000)
  {
      discount=(10*total_bill)/100;
      total_bill=total_bill-discount;
  }if(total_bill<3000)
  {
      discount=(5*total_bill)/100;
      total_bill=total_bill-discount;
  }
  repeate:
  printf("IF YOU WANT TO GENERATE YOUR BILL PRESS 'Y' OTHERWISE 'N' \n");
  fflush(stdin);
  scanf("%c",&choose);
  if(choose=='Y' || choose=='y')
  {
      generate_bill();
  }
  else if(choose=='N' || choose=='n')
  {
      exit(0);
  }
  else
  {
      printf("Invalid character ...Try again \n");
      goto repeate;
  }

  void main()
  {
    char ch;
    char temp_str[30] ;
    int check,count=0;
    printf("WELCOME \n");
    printf("Enter all product brought by you :\n");

  for(int i=0;i<12;i++){
    repeate1:
        count=0;
        printf("Enter your product  name :\n");
        fflush(stdin);
        gets(temp_str);
        for(int j=0;j<12;j++){
            check=strcmp(temp_str,productName[j]);
        if(check==0){
            strcpy(product_name[count1],temp_str);
        }
        else
        {
            count++;
            if(count==12){
                printf("Invalid input");
                goto repeate1;
            }
        }
        }

  repeate2:
      printf("Enter quantity \n");
      scanf("%d",&product_quantity[count1]);
      if(product_quantity[count1]<1)
      {
          printf("invalid quantity .....try again \n");
          goto repeate2;
      }
      count1++;
      repeate:


          printf("if you have entered all products then press Y and otherwise N \n");
          fflush(stdin);
          scanf("%c",&ch);

          if(ch=='y' || ch=='Y')
          {
              calculate_bill();
              exit(0);
          }
          else if(ch=='n' ||ch=='N')
            {
            printf(" \n");
          }
          else
          {
              printf("invalid press \n");
              printf("Try again\n");
              goto repeate;
          }

          printf("We have only 12 product \n");
          calculate_bill();
  }









