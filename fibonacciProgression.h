#include "progression.h"

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
}

long FibonacciProgression::nextValue()
{
    long temp = prev;
    prev = cur;
    cur += temp;
    return cur;
}