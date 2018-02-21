#include<stdio.h>

int main(){
    int massiv[8][8];
    int i,j;
    massiv[0][0] = 'R';
    massiv[0][1] = 'N';
    massiv[0][2] = 'B';
    massiv[0][3] = 'Q';
    massiv[0][4] = 'K';
    massiv[0][5] = 'B';
    massiv[0][6] = 'N';
    massiv[0][7] = 'R';
    i = 1;
    for(j = 0; j < 8; j++) {
        massiv[i][j] = 'P';
    }
    for(i = 2; i < 6; i++) {
        for(j = 0; j < 8; j++) {
            massiv[i][j] = ' ';
        }
    }
    massiv[7][0] = 'r';
    massiv[7][1] = 'n';
    massiv[7][2] = 'b';
    massiv[7][3] = 'q';
    massiv[7][4] = 'k';
    massiv[7][5] = 'b';
    massiv[7][6] = 'n';
    massiv[7][7] = 'r';
    i = 6;
    for(j = 0; j < 8; j++) {
        massiv[i][j] = 'p';
    }
    for(i = 0; i < 8; i++) {
        for(j = 0; j < 8; j++) {
            printf("%c",massiv[i][j]);
            if(j == 7) {
                printf("\n"); 
            } 
        }
    }
    return 0;
}
