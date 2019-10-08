//
//  gameBoard.hpp
//  tic_tac_toe
//
//  Created by Sky Monts on 11/4/18.
//  Copyright © 2018 Sky Monts. All rights reserved.
//

#ifndef gameBoard_hpp
#define gameBoard_hpp

class Game{
private:
    char array[3][3] =
    {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
public:
    void play(int , char);
    void getBoard();
    bool boardFull();
    bool isWinner();
    void displayInput();
};

#endif /* gameBoard_hpp */
