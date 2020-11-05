#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

int main (void){
    FILE *file;
    char line[SIZE];
    char name[SIZE];
    char mname[SIZE];
    int score=0,mscore=0;
    line[0] = '\0';

    file = fopen("score.txt", "r");

    if(file == NULL){
        printf("ファイルが開けません。\n");
        exit(1);
    }

    printf("プレイヤー 得点\n");
    printf("-----------------\n");
    while(fgets(line,SIZE,file) != NULL){
        sscanf(line,"%[^,],%d\n",name,&score);
        printf("%s %d点\n",name,score);
        if(score >= mscore){
            mscore = score;
            sprintf(mname,"%s",name);
        }
    }
    fclose(file);
    printf("-----------------\n");
    printf("最高得点 : %s(%d点)\n",mname,mscore);
}