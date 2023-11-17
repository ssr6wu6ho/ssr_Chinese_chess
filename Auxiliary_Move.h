#ifndef AUXILIARY_MOVE_H
#define AUXILIARY_MOVE_H

#endif // AUXILIARY_MOVE_H

//辅助模块，存放移动相关变量

const static int KnightMoveTab[8] = {-0x21, -0x1f, +0x1f, +0x21, -0x12, +0x0e, -0x0e, +0x12,};//马的位移数组
const static int HorseLegTab[8] = {-0x10, -0x10,  +0x10, +0x10, -0x01,  -0x01, +0x01, +0x01};//马腿数组
const static int ElephantMoveTab[4] = {-34, -30, +30, 34};//象
const static int ElephantEyeTab[4] = {-17, -15, +15, +17};
const static int KingMoveTab[4] = {-16, +16, -1, +1};//将
const static int AdvisorMoveTab[4] = {-17, -15, +15, +17};//士

//是否在棋盘内
const static int InBoard[256]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                        0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,
                        0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,
                        0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,
                        0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,
                        0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,
                        0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,
                        0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,
                        0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,
                        0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,
                        0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

//是否在九宫格内
const static int InFort[256]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

