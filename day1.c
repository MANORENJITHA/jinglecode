#include<stdio.h>
int main(){
char arr[3][3];
int playerno,i,j;
printf("Enter the player no:");
scanf("%d",&playerno);

switch(playerno){
    case 1:
           //assigning x
        printf("enter grid value: ");
        scanf("%d%d",&i,&j);
        if(arr[i][j]==0 && 0<=i<=2 && 0<=j<=2){
            arr[i][j]='X';
        }
        if(arr[i][j]!='\0') printf("Enter valid dimensions: ");
        //checking winning condition
        //checking row wise
        for(int k=0;k<3;k++){
            int flag=0;
            for (int m=0;m<3;m++){
                if(arr[k][m]!='X') flag=-1;
            }
            if(flag!=-1) printf("player 1 won.");
        }
        //checking column wise.
        for(int k=0;k<3;k++){
            int flag=0;
            for (int m=0;m<3;m++){
                if(arr[m][k]!='X') flag=-1;
            }
            if(flag!=-1) printf("player 1 won.");
        }
    
    break;
    case 2: //assigning x
        printf("enter grid value: ");
        scanf("%d%d",&i,&j);
        if(arr[i][j]==0 && 0<=i<=2 && 0<=j<=2){
            arr[i][j]='O';
        }
        if(arr[i][j]!='\0') printf("Enter valid dimensions: ");
    
     break;
    }
}