#include "txt2csv.h"

int main(int argc, char *argv[]){
    //printf("test\n");
    FILE *fin;
    FILE *fout;
    int convertMode = T1;
    //int convertMode = NO_FILE;
    openFile(convertMode, &fin, &fout);
    if(!fin){//Check file was opened
        printf("File open error!");
        exit(1);
    }
    char tmpString[100];
    writeFile(convertMode, &fin, &fout);
    /*while(fgets(tmpString, 100, fin) != NULL){
        //TODO fprintf(fout,)
        printf("%s%d\n", tmpString, strlen(tmpString));
        switch(convertMode){
            case TOEIC:
                //for(int i = 0; i < strlen(tmpString); i++){
                    
                //}
                ;
        }
    }*/
    fclose(fin);
    fclose(fout);
    return 0;
}
