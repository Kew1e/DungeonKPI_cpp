#include <iostream>
#include "resist.h"

using namespace std;

int main() {
    Resistor r;
    initResistor(r);
    showResistor(r);

    const int count = 2;
    Resistor resistors[MAX_RESISTORS];
    initResistors(resistors, count);
    showResistors(resistors, count);

    double voltage;
    cout << "Voltage (V): ";
    cin >> voltage;
    checkResistors(resistors, count, voltage);

    return 0;
}
