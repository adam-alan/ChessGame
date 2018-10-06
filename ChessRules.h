//
// Created by zhuxingtian on 18-10-6.
//

#ifndef CHESSGAME_CHESSRULES_H
#define CHESSGAME_CHESSRULES_H


class ChessRules {
public:
    virtual bool isWin() = 0;

    virtual bool canWhoMove() = 0;

    virtual bool canRegretChess() = 0;

    virtual bool canMoveChess() = 0;

};


#endif //CHESSGAME_CHESSRULES_H
