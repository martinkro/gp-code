#ifndef PE32_PARSER_H
#define PE32_PARSER_H

#include "pe.h"

class PE32Parser{
public:
    PE32Parser(const char* filename);
    ~PE32Parser();
    
public:
    bool load();

private:
}

#endif