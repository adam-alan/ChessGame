//
// Created by zhuxingtian on 18-10-3.
//

#ifndef CHESSGAME_CHESSBOARD_H
#define CHESSGAME_CHESSBOARD_H


class ChessBoard {
public:
    virtual void setChessBoardInfor(int row,int col) = 0;

    virtual int getChessBoardInfor(int row,int col) = 0;
};

#endif //CHESSGAME_CHESSBOARD_H
