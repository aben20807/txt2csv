#define NO_FILE 99
#define TOEIC 0
#include "txt2csv.h"

int main(int argc, char *argv[]){
    //printf("test\n");
    FILE *fin;
    FILE *fout;
    int convertMode = TOEIC;
    //int convertMode = NO_FILE;
    switch(convertMode){
        case TOEIC:
            fin = fopen("TOEIC.txt", "r");
            fout = fopen("TOEIC.csv", "w");
            break;
        //case NO_FILE:
        default:
            printf("No file!");
            exit(1);
            break;
    }
    if(!fin){//Check file was opened
        printf("File open error!");
        exit(1);
    }
    char tmpString[100];
    while(fgets(tmpString, 100, fin) != NULL){
        //TODO fprintf(fout,)
        printf("%s%d\n", tmpString, strlen(tmpString));
        switch(convertMode){
            case TOEIC:
                //for(int i = 0; i < strlen(tmpString); i++){
                    
                //}
                ;
        }
    }
    fclose(fin);
    fclose(fout);
    return 0;
}
