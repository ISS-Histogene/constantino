/* 
 * File:   main.cpp
 * Author: Guilherme
 *
 * Created on September 24, 2014, 12:10 AM
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    return 0;
}

void principal(int matriz[4][4]){

    int [4][4] = {{1, 5, 9, 13},
                  {2, 6, 10, 14},
                  {3, 7, 11, 15},
                  {4, 8, 12, 0}};
    int zero[2] = localizazero(matriz);
    if ((zero[1]==1) && (zero[2]==1)){
        int y1 = 1;
        int x1 = 0;
        int y2 = 0;
        int x2 = 1;
    }
    else if((zero[1]==1) && (zero[2] ==

    
}
int[2] localizazero(int matriz[4][4]){
    int zero[2];
    for (x=0; x < 4; x++){
        for (y=0; y < 4; y++){
            if (matriz[x][y] == 0){
                zero[1] = x;
                zero[2] = y;
                return zero;
            }
        }
    }
}

