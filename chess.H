#pragma once
#include <iostream>
#include "board.h"

using namespace std;


class chess {
    public:
        chess();
    private:
        board myboard;


};


chess::chess() {
    myboard.initboard();
    char c;
    do {
        myboard.print();
        cin >> c;
    }while(c != 'q');
}