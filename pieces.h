#pragma once
#include <iostream>
#include <string>
using namespace std;

class pieces {

    public:
        pieces();
        pieces(const string &);
        string name;
        string location;
        string color;

};

pieces::pieces() : name("  ") , location(), color() {}
pieces::pieces(const string & color) : name() , location(), color(color) {}