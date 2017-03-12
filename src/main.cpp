#include <iostream>
using namespace std;

#include "log.h"
#include "pe32_parser.h"


bool gp_pack(const char* filename){
    DEBUG_LOG("gp pack start ...\n");
    return true;
}

int main(int argc, char* argv[]){
    cout << "==== Start pack ...====" << endl;
    
    if (argc != 2){
        cout << "Invalid parameters" << endl;
    }
    else{
        const char* src_file = argv[1];
        DEBUG_LOG("source filename:%s\n", src_file);
        gp_pack(src_file);
    }
    
    cout << "==== End of pack .=====" << endl;
    return 0;
}