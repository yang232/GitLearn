#include <iostream>
#include "testLearn.h"
#include <vector>
using namespace std;

static int s2;
int main(){
    using std::cout;

    TestLearnSon test1= TestLearnSon(1,2.0);
    cout << test1.showValue2();
}