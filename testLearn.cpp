#include <iostream>
#include "testLearn.h"
using namespace std;

int TestLearn::m_s = 0;
TestLearn::TestLearn(){
    
}

TestLearn::TestLearn(int t1, double t2){
    m_t1 = t1;
    m_t2 = t2;
}

TestLearn::~TestLearn(){
    std::cout << "析构函数已调用";
}

void TestLearn::showValue(){
    std::cout << "静态成员变量显示初始化:"<< m_s << std::endl;
}

TestLearn::operator double() const{
    std::cout<<"double转换函数"<<std::endl;
    return m_t2;
}

TestLearn::operator int() const{
    cout << "int转换函数" << endl;
    return m_t1;
}

TestLearnSon::TestLearnSon(){};

TestLearnSon::TestLearnSon(int t1,double t2):TestLearn(t1,t2){};

TestLearnSon::~TestLearnSon(){};

void TestLearnSon::show() const{

};

