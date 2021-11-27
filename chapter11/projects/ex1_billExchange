#include <stdio.h>
#include <math.h>
#define COINS_TYPES 14

void read_num(int *zl,int *gr); 
void analyze_and_result(int *arr,int *arr_val,int *zl,int *gr);

int main()
{
   /********************************************************
    * int cash_zl and cash_gr hold number of zloty and groszy currency
    * coins array tells how many coins we have
    * and coins_val a value of certain type of coin(from 50 to 1 we have a 1/100 of złoty)
    * ******************************************************/
    int cash_zl, cash_gr;
    int coins[COINS_TYPES] ={0};
    int coins_val[COINS_TYPES] ={200,100,50,20,10,5,2,1,50,20,10,5,2,1};
    
    for(;;){
        read_num(&cash_zl,&cash_gr);
        analyze_and_result(coins,coins_val,&cash_zl,&cash_gr);
        break;
    }
    return 0;
}

void read_num(int *zl,int *gr){
    printf("Type amount of złoty to exchange for coins\n");
    scanf("%d.%d",zl,gr);
}
/**************************************************************
 * analyze_and_result function calculate which types of coins we need and how many of them
 * *****************************************************/
void analyze_and_result(int *arr,int *arr_val,int *zl,int *gr){
    
    int *p=arr;
    int sum=0;
    
    for(int i=0;i<COINS_TYPES;i++){
        if(i<8){
            int flag = *zl /arr_val[i];
            if(flag){
                arr[i]=flag;
                *zl -=arr_val[i]*flag; 
                printf("%dzł, number of banknotes: %d\n",arr_val[i],arr[i]);
            }
        }
        else{
            int flag = *gr/arr_val[i];
            if(flag){
                arr[i]=flag;
                *gr-=arr_val[i]*flag;
                printf("%dgr, number of coins: %d\n",arr_val[i],arr[i]);
            }
        }
    }
    
    for(int i=0;i<COINS_TYPES;i++)
        sum+=*(p+i);
    printf("Sum of coins: %d\n",sum);
}
