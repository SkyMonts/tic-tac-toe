//
//  gameBoard.cpp
//  tic_tac_toe
//
//  Created by Sky Monts on 11/4/18.
//  Copyright © 2018 Sky Monts. All rights reserved.
//

#include "gameBoard.hpp"
#include <iostream>
using namespace std;


void Game:: play(int pos, char c){
    if(!boardFull()){
        if(pos < 4){
            array[0][pos - 1] = c;
        }
        else if(pos > 3 && pos < 7){
            array[1][pos - 4] = c;
        }
        else if(pos > 6){
            array[2][pos - 7] = c;
        }
       
    }
}
void Game:: getBoard(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "  " << array[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
}

bool Game:: boardFull(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(array[i][j] != 'X' && array[i][j] != 'O'){
                return false;
            }
        }
        
    }
    return true;
}

void Game:: displayInput(){
    cout << "--Please specify position on the board when taking a turn--" << endl;
}

bool Game:: isWinner(){
    if((array[0][0] == array[0][1] && array[0][0] == array[0][2]) ||
       (array[1][0] == array[1][1] && array[1][0] == array[1][2]) ||
       (array[2][0] == array[2][1] && array[2][0] == array[2][2]) ||
       (array[0][0] == array[1][0] && array[0][0] == array[2][0]) ||
       (array[0][1] == array[1][1] && array[0][1] == array[2][1]) ||
       (array[0][2] == array[1][2] && array[0][2] == array[2][2]) ||
       (array[0][0] == array[1][1] && array[0][0] == array[2][2]) ||
       (array[0][2] == array[1][1] && array[0][2] == array[2][0]))
    {
        return true;
    }
    else return false;
}

