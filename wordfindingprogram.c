//
// Created by DELL on 12/11/2022.
//

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(){

    char words[1000];
    char findword[15];
    char CourseN[25];

    int timeWH=0;
    int timeCN=0;

    strcpy(findword,"winhtut");
    strcpy(CourseN, "NationalCyberCity");
    FILE *fptr;
    fptr = fopen("findingWord.txt","r");

    if(fptr==NULL){
        printf("The file does not have already existed!!");
        exit(1);
    }
    else{
        while(!feof(fptr)){
            fscanf(fptr,"%s",words);

            if(strstr(words, findword)!=NULL){
                printf("%s\n",findword);
                timeWH++;
            }

            if(strstr(words,CourseN)!=NULL){
                printf("%s\n",CourseN);
                timeCN++;
            }
        }

        printf("______________________________________\n");

        printf("Winhtut time : %d\n",timeWH);
        printf("NationalCyberCity time : %d",timeCN);
    }
    fclose(fptr);

    return 0;
}