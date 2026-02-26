#ifndef TESTLEARN_H
#define TESTLEARN_H

class TestLearn
{
private:
    int m_t1;
    double m_t2;
    static int m_s;
public:
    TestLearn();
    TestLearn(int,double);
    virtual ~TestLearn();
    void showValue();
    double showValue2(){return m_t2;};
    operator double() const;
    operator int() const;
    virtual void show() const =0;
};

class TestLearnSon : public TestLearn
{
public:
    TestLearnSon();
    TestLearnSon(int,double);
    virtual ~TestLearnSon();
    virtual void show() const;
};

#endif
