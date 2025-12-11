#include <conio.h>
#include <windows.h>
#include <stdio.h>

#define HEIGHT 22
#define WIDTH  12

char board[HEIGHT][WIDTH];


void drawboard(char board[HEIGHT][WIDTH]){
        system("cls"); 
for(int i=0;i<=HEIGHT;i++){
    for(int j=0;j<= WIDTH;j++){
        if(i==0||i==HEIGHT||j ==0||j==WIDTH){
            printf("#");
        }
        else{
            printf("%c", board[i][j]);
        }
    }
    printf("\n");
}
}


int main(){

//                1  2  3  4  5  6  7
// 7 tetrominoes (I, O, T, S, Z, J, L)
// for  I x,y 
//      1
//using this only for sample
int tetrominoes[3][2]={
//0,1
 {0,6}, //0
 {1,6},//1
 {2,6}//2
};
int gameover = 0;


for(int i=0;i<=HEIGHT;i++){
for(int j=0;j<= WIDTH;j++){
board[i][j]=' ';
}}


while (gameover != 1)
{
for(int i=0;i<=HEIGHT;i++){
for(int j=0;j<= WIDTH;j++){
board[i][j]=' ';
}}

for(int x=0;x<=2;x++){
        for(int y=0;y< 1;y++){
            board[tetrominoes[x][y]][tetrominoes[x][y+1]] = '#';
            if (kbhit()){
    int key = getch();
     if (key == 0 || key == 224)
     {
        key = getch();          // now you get actual arrow, etc.
        switch(key) {
            case 75: for(int i=0; i<3; i++) tetrominoes[i][1]--; break;
            break;
            case 77: for(int i=0; i<3; i++) tetrominoes[i][1]++; break;
            /* left */ 
            break;
            case 72: 
            /* up    */
             break;
            case 80: 
            /* down  */
             break;

        
    
        }
    } else {
  
        if (key == ' '){
            printf("space");
        }  
        if (key == 'c' || key == 'C'){
            printf("C");
        }
        if (key == 'q' || key == 'Q'){
            printf("q");
        } 
        exit(0);
    }
}

}
tetrominoes[x][0]=tetrominoes[x][0]+1;
}

drawboard(board);
Sleep(1000);
// Logic for Controller 

}



    return 0;
}