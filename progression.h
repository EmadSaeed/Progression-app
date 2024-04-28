#include <iostream>
using namespace std;

class Progression
{
public:
    Progression(long f = 0) : first(f), cur(f){};
    virtual ~Progression(){};
    void printProgression(int n);

protected:
    virtual long firstValue();
    virtual long nextValue();

protected:
    float first;
    float cur;
};

void Progression::printProgression(int n)
{
    cout << ' ' << nextValue() << endl;
};

long Progression::firstValue() // reset first value
{
    cur = first;
    return cur;
};

long Progression::nextValue() // advance
{
    return ++cur;
};

class ArithProgression : public Progression
{
public:
    ArithProgression(long i = 1);

protected:
    virtual long nextValue();

protected:
    long inc;
};

ArithProgression::ArithProgression(long i)
    : Progression(), inc(i){};

long ArithProgression::nextValue()
{
    cur += inc;
    return cur;
};

class GeomProgression : public Progression
{
public:
    GeomProgression(long b = 2);

protected:
    virtual long nextValue();

protected:
    long base;
};

GeomProgression::GeomProgression(long b)
    : Progression(1), base(b) {}

long GeomProgression::nextValue()
{
    cur *= base;
    return cur;
};

class FibonacciProgression : Progression
{
public:
    FibonacciProgression(long f = 0, long s = 1);

protected:
    virtual long firstValue();
    virtual long nextValue();

protected:
    long second;
    long prev;
};

FibonacciProgression::FibonacciProgression(long f, long s)
    : Progression(f), second(s), prev(second - first) {}

long FibonacciProgression::firstValue()
{
    cur = first;
    prev = second - first;
    return cur;
};

long FibonacciProgression::nextValue()
{
    long temp = prev;
    prev = cur;
    cur += temp;
    return cur;
};