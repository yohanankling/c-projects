#include <stdio.h>
#include "my_mat.h"
int main (){
// int matrix[10][10];
//  int a [] = {0 ,3 ,1 ,0 ,0 ,2 ,0 ,0 ,0 ,0}; 
//  int b [] = {3 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0};
//  int c [] = {1 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0};
//  int d [] = {0 ,0 ,0 ,0 ,0 ,0 ,0 ,5 ,0 ,0};
//  int e [] = {0 ,0 ,0 ,0 ,0 ,0 ,0 ,4 ,1 ,1};
//  int f [] = {2 ,0 ,0 ,0 ,0 ,0 ,2 ,0 ,0 ,0}; 
//  int g [] = {0 ,0 ,0 ,0 ,0 ,2 ,0 ,0 ,0 ,0}; 
//  int h [] = {0 ,0 ,0 ,5 ,4 ,0 ,0 ,0 ,0 ,2}; 
//  int i [] = {0 ,0 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,0}; 
//  int j [] = {0 ,0 ,0 ,0 ,1 ,0 ,0 ,2 ,0 ,0};
// for (int temp = 0; temp < 10; temp++){
//     for (int temp2 = 0; temp2 < 10; temp2++){
// matrix[0][temp2] = a[temp2];
// matrix[1][temp2] = b[temp2];
// matrix[2][temp2] = c[temp2];
// matrix[3][temp2] = d[temp2];
// matrix[4][temp2] = e[temp2];
// matrix[5][temp2] = f[temp2];
// matrix[6][temp2] = g[temp2];
// matrix[7][temp2] = h[temp2];
// matrix[8][temp2] = i[temp2];
// matrix[9][temp2] = j[temp2];
//     }
// }
//A 0 3 1 0 0 2 0 0 0 0 3 0 1 0 0 0 0 0 0 0 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 5 0 0 0 0 0 0 0 0 0 4 1 1 2 0 0 0 0 0 2 0 0 0 0 0 0 0 0 2 0 0 0 0 0 0 0 5 4 0 0 0 0 2 0 0 0 0 1 0 0 0 0 0 0 0 0 0 1 0 0 2 0 0 
// B 6 2    B 6 4    B 2 3   C 0 1    C 1 5   C 7 8   C 1 1    B 1 1     C 5 9    B 5 9      D
// True      False   False      2        4      4      -1      False      -1      False  
//A 0 9 48 20 10 39 22 49 44 33 9 0 38 45 26 22 2 4 26 42 48 38 0 47 32 5 5 1 5 12 20 45 47 0 19 4 36 46 36 4 10 26 32 19 0 46 16 3 37 27 39 22 5 4 46 0 46 29 16 28 22 2 5 36 16 46 0 4 46 7 49 4 1 46 3 29 4 0 10 41 44 26 5 36 37 16 46 10 0 19 33 42 12 4 27 28 7 41 19 0 
//B 2 4   C 7 5
//True      6       
// A 0 37 19 24 26 11 29 41 22 41 37 0 28 25 31 38 14 6 0 1 19 28 0 36 42 12 39 22 39 22 24 25 36 0 16 23 26 5 12 38 26 31 42 16 0 31 23 39 31 9 11 38 12 23 31 0 48 30 5 1 29 14 39 26 23 48 0 46 6 31 41 6 22 5 39 30 46 0 29 40 22 0 39 12 31 5 6 29 0 11 41 1 22 38 9 1 31 40 11 0 
//B 5 3   C 4 7     C 9 3    B 3 9      D
// true     16       12       true  
char ch;
scanf("%c", &ch);
while (ch != 'D'){
    if (ch == 'A'){func1();}
    else if (ch == 'B'){ func2();}
    else if (ch == 'C'){
        int ans = func3();      
        printf("%d", ans);}
    scanf("%c", &ch);
}
return 0;
}