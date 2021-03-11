#include "firstFight.h"

/*
    * Ho Chi Minh City University of Technology
    * Faculty of Computer Science and Engineering
    * Initial code for Assignment 0
    * Programming Fundamentals Spring 2021
    * Author: Nguyen Thanh Nhan
    * Date: 08.02.2021
*/

//The library here is concretely set, students are not allowed to include any other libraries.
#ifndef firstFight_h
#define firstFight_h

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

bool CheckValidity(const int& E, int lower = 0, int upper = 999)
{
    if (E < lower || E > upper) return 0;
    return 1;
}

////////////////////////////////////////////////////////////////////////
///STUDENT'S ANSWER BEGINS HERE
///Complete the following functions
///DO NOT modify any parameters in the functions.
////////////////////////////////////////////////////////////////////////
int getReady(int& HP, const int& ID, int& M, const int& E1) {
    //Complete this function to gain point on task 1
    if (HP < 0) HP = 0;    if (HP > 1000) HP = 1000;

    if (M < 0) M = 0;      if (M > 1000) M = 1000;

    if (!CheckValidity(E1, 100, 500)) return -999;

    if (CheckValidity(E1, 100, 199)) {
        if (E1 == 2) goto end;

        if (E1 == 1) {
            HP += 75;
            goto end;
        }

        if (M < 200) goto end;

        if (M<300)


    }
    else if (CheckValidity(E1, 200, 299)) {

    }
    else if (CheckValidity(E1, 300, 399)) {

    }
    else if (CheckValidity(E1, 400, 499)) {

    }
    else {

    }



    end: return HP+M;
}



















int firstBattle(int& HP1, int& HP2, const int& ID1, const int& ID2, const int& E2) {
    //Complete this function to gain point on task 2
    return -1;
}

int secondBattle(int& HP1, int& HP2, const int& ID1, const int& ID2, const int& E3) {
    //Complete this function to gain point on task 3
    return -1;
}

int finalBattle(int& HP1, int& HP2, const int& ID1, const int& ID2, const int& E4) {
    //Complete this function to gain point on task 4
    return -1;
}
////////////////////////////////////////////////
///END OF STUDENT'S ANSWER
////////////////////////////////////////////////
#endif /* firstFight_h */