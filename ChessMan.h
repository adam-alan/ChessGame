//
// Created by zhuxingtian on 18-10-3.
//

#ifndef CHESSGAME_CHESSMAN_H
#define CHESSGAME_CHESSMAN_H


class ChessMan {
protected:

    typedef struct {
        int row;
        int col;
    }Place;

public:

    virtual void setChessManType() = 0;

    virtual int getChessManType() = 0;

    virtual Place getPosition() = 0;

    virtual void setPosition(int row,int col) = 0;

};


#endif //CHESSGAME_CHESSMAN_H
