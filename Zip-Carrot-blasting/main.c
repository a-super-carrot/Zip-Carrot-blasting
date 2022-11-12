#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main()
{
    printf("\033[1m\033[3m\033[36mIt was written by \033[1m\033[35m\033[4mMr.Carrot\033[0m\033[1m\033[36m.\033[0m\n");
    printf("\033[1m\033[3m\033[36mIt just simplified \033[1m\033[35m\033[4m'fcrackzip'\033[0m\033[1m\033[3m\033[36m process.\033[0m\n");
    printf("\033[1m\033[3m\033[31m\033[4mEnjoy that!\n\033[0m");
    sleep(2);
    printf("\033[33m-----\033[0m\033[1mOOOO0\033[0m\033[33m----------\033[0m\033[1mOOOOO\033[0m\033[33m--------|\n\033[0m");
    printf("\033[33m----\033[0m\033[1mOOOOOOO\033[0m\033[33m--------\033[0m\033[1mOOOOOOO\033[0m\033[33m-------|\n\033[0m");
    printf("\033[33m----\033[0m\033[1mOOOOOOOO\033[0m\033[33m------\033[0m\033[1mOOOOOOOOO\033[0m\033[33m------|\n\033[0m");
    sleep(1);
    printf("\033[33m-----\033[0m\033[1mOOOOOOOOO\033[0m\033[33m-----\033[0m\033[1mOOOOOOOO\033[0m\033[33m------|\n\033[0m");
    printf("\033[33m-------\033[0m\033[1mOOOOOOOOO\033[0m\033[33m-----\033[0m\033[1mOOOOOOO\033[0m\33[33m-----|\n\33[0m");
    printf("\033[33m---------\033[0m\033[1mOOOOOOOOO0\033[0m\033[33m---\033[0m\033[1mOOOOOO\033[0m\033[33m-----|\n\033[0m");
    sleep(1);
    printf("\033[33m------------\033[0m\033[1mOOOOOOOOO0OO0OOO\033[0m\033[33m-----|\n\033[0m");
    printf("\033[33m-----------\033[0m\033[1mOOO\033[31mOOO\033[0m\033[1m\033[0m\033[1mOOO\033[31m0OO\033[0m\033[1m0OOO00\033[0m\033[33m----|\n\033[0m");
    printf("\033[33m-----------\033[0m\033[1mOOO0\033[31mOO\033[0m\033[1m\033[0m\033[1mOOO0\033[31mOO\033[0m\033[1m0OOO00\033[0m\033[33m----|\n\033[0m");
    sleep(1);
    printf("\033[33m-----------\033[0m\033[1mOOO0OO\033[30m\033[1mO0O\033[0m\033[1m0OO0OOO00\033[0m\033[33m----|\n\033[0m");
    printf("\033[33m------------\033[0m\033[1mOOOOO\033[30m\033[1mO\033[0m\033[1m00\033[30m\033[1mO\033[0m\033[1m0OO0O00\033[0m\033[33m-----|\n\033[0m");
    printf("\033[33m--------------\033[0m\033[1mOOOO0O0OO0OO\033[0m\033[33m-------|\n\033[0m");
    sleep(1);
    printf("\033[33m-------------\033[0m\033[1m00OOOO0O0OO0OO\033[0m\033[33m------|\n\033[0m");
    printf("\033[33m------------\033[0m\033[1mOOOO0O00000OO0OO\033[0m\033[33m-----|\n\033[0m");
    printf("\033[33m-----------\033[0m\033[1mOOOO0O0000000OO0OO\033[0m\033[33m----|\n\033[0m");
    sleep(1);
    printf("\033[33m----------\033[0m\033[1mOOOO0O0OO000000000OO\033[0m\033[33m---|\n\033[0m");
    printf("\033[33m----------\033[0m\033[1mOO\033[31monly enter number\033[0m\033[1m0\033[0m\033[33m---|\n\033[0m");
    sleep(2);
    char fp[50];
    strcpy(fp,"fcrackzip -b -c ");
    printf("\033[0m\033[35m[1]\033[0m\033[34mOnly numbers\n\033[0m\033[35m[2]\033[0m\033[34mOnly lower-case letters\n\033[0m\033[35m[3]\033[0m\033[34mCapital and lower-case letters\n\033[0m\033[35m[4]\033[0m\033[34mCapital letters and numbers\n\033[0m\033[35m[5]\033[0m\033[34mLower-case letters\n\033[0m\033[35m[6]\033[0m\033[34mCapital,lower-case letters and numbers\n\033[0m");
    printf("\033[1mSelect the type of password to crack>>\033[32m");
    int answer = 0;
    scanf("%d",&answer);
    printf("\033[0m\n\n");
    if(answer == 1)
    {
        strcat(fp,"'1' ");
        printf("\033[1mThe number of digits you want to crack>>\033[32m");
        int dig[50];
        int dig2[50];
        scanf("%s",&dig);
        printf("\033[0m\n\n");
        strcpy(dig2,dig);
        strcat(dig,"-");
        strcat(dig,dig2);
        strcat(fp,"-l ");
        strcat(fp,dig);
        strcat(fp," -v -u ");
        printf("\033[1mDrag the .zip here>>\033[32m");
        char zip[100];
        scanf("%s",&zip);
        printf("\033[33m\n");
        strcat(fp,zip);
        system(fp);
        printf("\n");
    }
    else
    {
        if(answer == 2)
        {
            strcat(fp,"'a' ");
            printf("\033[1mThe number of digits you want to crack>>\033[32m");
            int dig[50];
            int dig2[50];
            scanf("%s",&dig);
            printf("\033[0m\n\n");
            strcpy(dig2,dig);
            strcat(dig,"-");
            strcat(dig,dig2);
            strcat(fp," -l ");
            strcat(fp,dig);
            strcat(fp," -v -u ");
            printf("\033[1mDrag the .zip here>>\033[32m");
            char zip[100];
            scanf("%s",&zip);
            printf("\033[33m\n");
            strcat(fp,zip);
            system(fp);
            printf("\n");
        }
        else
        {
            if(answer == 3)
            {
                strcat(fp,"'aA' ");
                printf("\033[1mThe number of digits you want to crack>>\033[32m");
                int dig[50];
                int dig2[50];
                scanf("%s",&dig);
                printf("\033[0m\n\n");
                strcpy(dig2,dig);
                strcat(dig,"-");
                strcat(dig,dig2);
                strcat(fp,"-l ");
                strcat(fp,dig);
                strcat(fp," -v -u ");
                printf("\033[1mDrag the .zip here>>\033[32m");
                char zip[100];
                scanf("%s",&zip);
                printf("\033[33m\n");
                strcat(fp,zip);
                system(fp);
                printf("\n");
            }
            else
            {
                if(answer == 4)
                {
                    strcat(fp,"'A1' ");
                    printf("\033[1mThe number of digits you want to crack>>\033[32m");
                    int dig[50];
                    int dig2[50];
                    scanf("%s",&dig);
                    printf("\033[0m\n\n");
                    strcpy(dig2,dig);
                    strcat(dig,"-");
                    strcat(dig,dig2);
                    strcat(fp,"-l ");
                    strcat(fp,dig);
                    strcat(fp," -v -u ");
                    printf("\033[1mDrag the .zip here>>\033[32m");
                    char zip[100];
                    scanf("%s",&zip);
                    printf("\033[33m\n");
                    strcat(fp,zip);
                    system(fp);
                    printf("\n");
                }
                else
                {
                    if(answer == 5)
                    {
                        strcat(fp,"'a1' ");
                        printf("\033[1mThe number of digits you want to crack>>\033[32m");
                        int dig[50];
                        int dig2[50];
                        scanf("%s",&dig);
                        printf("\033[0m\n\n");
                        strcpy(dig2,dig);
                        strcat(dig,"-");
                        strcat(dig,dig2);
                        strcat(fp,"-l ");
                        strcat(fp,dig);
                        strcat(fp," -v -u ");
                        printf("\033[1mDrag the .zip here>>\033[32m");
                        char zip[100];
                        scanf("%s",&zip);
                        printf("\033[33m\n");
                        strcat(fp,zip);
                        system(fp);
                        printf("\n");
                    }
                    else
                    {
                        if(answer == 6)
                        {
                            strcat(fp,"'aA1' ");
                            printf("\033[1mThe number of digits you want to crack>>\033[32m");
                            int dig[50];
                            int dig2[50];
                            scanf("%s",&dig);
                            printf("\033[0m\n\n");
                            strcpy(dig2,dig);
                            strcat(dig,"-");
                            strcat(dig,dig2);
                            strcat(fp,"-l ");
                            strcat(fp,dig);
                            strcat(fp," -v -u ");
                            printf("\033[1mDrag the .zip here>>\033[32m");
                            char zip[100];
                            scanf("%s",&zip);
                            printf("\033[33m\n");
                            strcat(fp,zip);
                            system(fp);
                            printf("\n");
                        }
                    }
                }
            }



        }

    }
    return 0;
}