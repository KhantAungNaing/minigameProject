#include "stdio.h"
#include "stdlib.h"

int db[100];
int dbMoney[100];
int main(){
    int key=10;
    int age=0;
    int option=0;
    int userId=0;
    int userId2=0;
    int flag=0;
    int global_flag=0;
    int global_flag1=0;
    int global_flag2=0;
    int dbIndex=0;
    int genderType=0;
    int champType=0;
    int addMoney=0;
    int dbCoin=0;
    int maleBack=0;
    while ( key<=10){

        printf("Welcome to our game:\n");
        printf("Enter your age:");
        scanf("%d",&age);
        if(age>17){

            printf("you can play game!\n");
            while (true){
                if(global_flag2==1){
                    printf("You are in game\n");
                    exit(1);
                }else if(global_flag1==1){
                    printf("You are in game\n");
                    exit(1);
                }


                if(option==4){
                    option=0;
                    break;
                }
                printf("Press 1 to Login!\nPress 2 to Register:\nPress 3 to Complete Quit:\nPress 4 to Back:");
                scanf("%d",&option);

                while (true){
                    if(option==1){
                        if(global_flag1==1){

                            break;
                        } else if (global_flag2==1){
                            break;}
                        printf("This is Login\n");

                        printf("Enter your id:");
                        scanf("%d",&userId);

                        for(int i=0; i<100 ; i++){

                            if(db[i] == userId){
                                flag=1;
                            }

                        }
                        if(flag==1){
                            printf("You Can play game:\n");
                            printf("What gender type would you like to choose?\n");
                            while(true) {
                                if(global_flag2==1){
                                    break;
                                }
                                if(genderType==1){
                                    genderType=0;
                                    break;
                                }

                                printf("Press 1 for Male\nPress 2 for Female\nPress 4 to Back\n");
                                scanf("%d", &genderType);

                                while(true){

                                    if(genderType==4){
                                        genderType=1;
                                        break;
                                    }



                                    if(maleBack==1){
                                        break;

                                    }


                                    if (genderType == 1) {
                                        printf("You chose Male\n");
                                        while(true) {
                                            printf("Choose one,Press 1 Melee or Press 2 Range or Press 4 to Back\n");
                                            scanf("%d", &champType);

                                            if(champType==4){
                                                maleBack=1;
                                                break;



                                            }

                                            else if (champType == 1 || champType == 2) {
                                                printf("How much money do you want to add on your inventory?\n");
                                                printf("Notice that You can only one time for the first time!");
                                                scanf("%d", &addMoney);

                                                for (int i = 0; i < 1; i++) {
                                                    dbMoney[dbCoin] = addMoney;
                                                }

                                                printf("Your Money is %d\n", dbMoney[dbCoin]);
                                                printf("Your Character customization is success!\nYou can play now\n");
                                                global_flag2= 1;
                                                break;

                                            } else {
                                                printf("Choose Again!\n");

                                            }

                                        }




                                    } else if (genderType == 2) {
                                        printf("You chose Female\n");
                                        while(true){
                                            printf("Choose one,Press 1 Melee or Press 2 Range or Press 4 to Back\n");
                                            scanf("%d", &champType);

                                            if(champType==4){
                                                break;
                                            }



                                            else if (champType == 1 || champType == 2) {
                                                printf("How much money do you want to add on your inventory?\n");
                                                printf("Notice that You can only one time for the first time!\n");
                                                scanf("%d", &addMoney);

                                                for (int i = 0; i < 1; i++) {
                                                    dbMoney[dbCoin] = addMoney;
                                                }

                                                printf("Your Money is %d\n", dbMoney[dbCoin]);
                                                printf("Your Character customization is success!\nYou can play now\n");
                                                global_flag1 = 1;
                                                break;
                                            } else {
                                                printf("Choose Again!\n");
                                            }
                                        }

                                        break;
                                    } else if (genderType != 1 || genderType != 2) {
                                        printf("You need to choose back\n");
                                    }
                                }


                            }

                            // ဆက်ရေးရန်
                        } else{
                            printf("Your id is not valid:\n");
                            break;
                        }


                    } else if(option==2){

                        if(global_flag==1){
                            global_flag=0;
                            break;
                        }

                        printf("This is Register:\n");

                        printf("Pls Enter your id:");
                        scanf("%d",&userId);

                        for(int i=0; i<100 ; i++){
                            if(db[i]==userId){
                                flag=1;
                            }
                        }
                        while (true){
                            if(flag==1){
                                flag=0;
                                printf("User Id Already Taken:\n");
                                break;
                            } else{
                                printf("Confirm your ID: Enter: ");
                                scanf("%d",&userId2);

                                if(userId==userId2){
                                    db[dbIndex]=userId;
                                    dbIndex++;
                                    printf("Registration success:\n");

                                    global_flag=1;

                                    break;

                                } else{
                                    printf("Id not same:\n");
                                    break;
                                }
                            }
                        }

                    } else if(option==3){
                        exit(1);
                    } else if(option == 4){
                        break;
                    } else{
                        printf("Invalid Option!\n");
                        break;


                    }
                }

            }

        } else{
            printf("You cannot play game!\nTry Again!\n");
        }

    }


    return 0;
}