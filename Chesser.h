//
// Created by zhuxingtian on 18-10-6.
//

#ifndef CHESSGAME_CHESSER_H
#define CHESSGAME_CHESSER_H


class Chesser {
public:
    virtual void moveChess() = 0;

    virtual void moveMEthod() = 0;

    virtual void regretChess() = 0;
};


#endif //CHESSGAME_CHESSER_H
