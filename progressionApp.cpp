#include <iostream>
#include "progression.h"
using namespace std;

int main()
{
    Progression *prog;

    cout << "Arithmetic progression with default increment:\n";
    prog = new ArithProgression();

    prog->printProgression(10);
}