#include <iostream>
#include "clock.h"

using namespace std;

int main(){
    Clock clockOne(23, 59, 59);
    Clock clockTwo(23, 59, 59);
    if (clockOne == clockTwo){
        cout << "They're equal!" << endl;
    } else {
        cout << "not equal :( " << endl;
    }
}



