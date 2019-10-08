//
//  main.cpp
//  tic_tac_toe
//
//  Created by Sky Monts on 11/4/18.
//  Copyright © 2018 Sky Monts. All rights reserved.
//

#include <iostream>
#include "gameBoard.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
start:
    cout << "########################################" << endl;
    cout << "###############Tic-Tac-Toe##############" << endl;
    cout << "########################################" << endl << endl;
    Game game1;
    char P1, P2;
    cout << "Player1 pick your symbol (X or O): ";
    cin >> P1;
    P1 = toupper(P1);
    while(P1 != 'X' && P1 != 'O'){
        cout << "Must be X or O. Please re-enter: ";
        cin >> P1;
        P1 = toupper(P1);
    }
    cout << endl;
    if(P1 == 'X'){
        P2 = 'O';
    }
    else P2 = 'X';
    cout << "----Starting board----" << endl;
    cout << "Player1 = " << P1 << endl;
    cout << "Player2 = " << P2 << endl << endl;
    
    game1.getBoard();
    game1.displayInput();
    int pos;
    while(!game1.boardFull() && !game1.isWinner()){
        cout << "Player 1 turn: ";
        cin >> pos;
        while(pos > 9){
            cout << "Invalid position. Please enter again: ";
            cin >> pos;
        }
        game1.play(pos, P1);
        game1.getBoard();
        if(game1.isWinner()) {
            cout << "Player 1 is the Winner!!!!!!" << endl;
            break;
        }
        else if(game1.boardFull()){
            cout << "Draw...." << endl;
            break;
        }
        cout << "Player 2 turn: ";
        cin >> pos;
        while(pos > 9){
            cout << "Invalid position. Please enter again: ";
            cin >> pos;
        }
        game1.play(pos, P2);
        game1.getBoard();
        if(game1.isWinner()) {
            cout << "Player 2 is the Winner!!!!!!" << endl;
            break;
    }
        else if(game1.boardFull()){
            cout << "Draw...." << endl;
            break;
        }

}
    char reply;
    cout << "Play again? (y/n): ";
    cin >> reply;
        if(reply == 'y') {
            goto start;
        }
    cout << "Thanks for playing :)" << endl;
    return 0;
}
