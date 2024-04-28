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
}

long Progression::firstValue() // reset first value
{
    cur = first;
    return cur;
}

long Progression::nextValue() // advance
{
    return ++cur;
}