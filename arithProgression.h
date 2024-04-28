#include "Progression.h"

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
}