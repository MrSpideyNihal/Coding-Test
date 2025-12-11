#include <conio.h>
#include <windows.h>
#include <stdio.h>

#define HEIGHT 22
#define WIDTH  12

char board[HEIGHT][WIDTH];


void drawboard(char board[HEIGHT][WIDTH]){
for(int i=0;i<=HEIGHT;i++){
    for(int j=0;j<= WIDTH;j++){
        if(i==0||i==HEIGHT||j ==0||j==WIDTH){
            printf("#");
        }
        else{printf("%c", board[i][j]);}
    }
    printf("\n");
}

}


int main(){

for(int i=0;i<=HEIGHT;i++){
for(int j=0;j<= WIDTH;j++){
board[i][j]=' ';
}}
drawboard(board);





    return 0;
}