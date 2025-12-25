#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char password[100];
    int i;
    int hasUpper=0,hasLower=0,hasDigit=0,hasSpecial=0;

    //reading password
    printf("Enter password to check : ");
    scanf("%s",password);

    //length
    int length=strlen(password);

    //traversing
    for(i=0;i<length;i++){
        if(isupper(password[i])) 
            hasUpper=1;
        else if(islower(password[i]))
            hasLower=1;
        else if(isdigit(password[i]))
            hasDigit=1;
        else
           hasSpecial=1;    
    }
    //categorising weak password:
    if(length<6)
        printf("Password entered : %s is  a weak password",password);

    //categorising strong password:
    else if(length>=8 && hasUpper && hasLower && hasSpecial && hasDigit)
        printf("Password entered : %s is a strong password",password);

    //categorising medium password:
    else if(hasLower && hasDigit)
        printf("Password entered : %s is a Medium password",password);

    //categorising weak password:
    else
       printf("Password entered : %s is a weak password",password);      
    return 0;
}