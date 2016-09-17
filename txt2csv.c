#include "txt2csv.h"

bool openFile(int convertMode, FILE **fin, FILE **fout){
    switch(convertMode){
        case T1:
            *fin = fopen("T1.txt", "r");
            *fout = fopen("T1.csv", "w");
            return true;
            break;
        case NO_FILE:
        default:
            printf("No file!\n");
            return false;
            break;
    }
}
bool writeFile(int convertMode, FILE **fin, FILE **fout){
    char tmpS[100];
    while(fgets(tmpS, 100, *fin) != NULL){
        printf("%s%d\n", tmpS, strlen(tmpS));
        switch(convertMode){
            case T1:
                break;
            case NO_FILE:
            default:
                printf("No file!\n");
                return false;
                break;
        }
    }
    return true;
}
