#include <stdio.h>
#include <string.h>

void show(char buf[]){
    char* p;
    char* lasts;
    char DELIM[] = ",";
    long count = 0L;
    //fprintf(stdout, "%s\n", buf);

    fprintf(stdout, "aから始まる単語\n");

    p = strtok_r(buf, DELIM, &lasts);
    while(NULL!=p){
        if('a'==p[0]){
            fprintf(stdout, "%s\n", p);
            ++count;
        }
    p = strtok_r(NULL, DELIM, &lasts);
    }
    fprintf(stdout, "個数:%ld\n", count);

    return;
}

int main(){
    char filename[] = "words.txt";
    FILE* fp;
    char buf[1024L];

    if(!(fp=fopen(filename, "r"))){
        fprintf(stderr, "Error: couldn't open %s\n",
        filename);
        return -1;
    }

    memset(buf, '\0', sizeof(buf));
    fread(buf, sizeof(char), sizeof(buf)/sizeof(char), fp);
    fclose(fp);
    //fputs(buf, stdout);

    show(buf);

    return 0;
}