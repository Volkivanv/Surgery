// #include <iostream>

#include "../include/operations.h"
#include <string>;

int main() {
    std::string request;
    point bp,ep,firstBp,firstEp;

    scalpel(bp,ep);
    firstBp = bp;
    firstEp = ep;
    std::cout<<"Input next operation: scalpel,"
               " hemostat, tweezers, suture!"<<std::endl;
    std::cin>>request;
    bool endSurgOperation = false;
    while(!endSurgOperation){


        if(request == "scalpel"){
            scalpel(bp,ep);
        }else if(request == "hemostat"){
            hemostat(bp);
        }else if(request == "tweezers"){
            tweezers(bp);
        }else if(request == "suture"){
            suture(bp,ep);
            endSurgOperation = ((bp.x == firstBp.x)&&(bp.y == firstBp.y)&&(ep.x == firstEp.x)&&(ep.y == firstEp.y));
            if(!endSurgOperation) std::cout<<"Coordindates of first incision and this suture do not match. Operation must go on!"<<std::endl;

        }
        if(!endSurgOperation) {
            std::cout << "Input next operation: scalpel,"
                         " hemostat, tweezers, suture!" << std::endl;
            std::cin >> request;
        }

    }
    std::cout<<"Surgery operation is finished!"<<std::endl;



    return 0;
}
