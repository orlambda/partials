//
// Created by Orlando Shamlou on 16/11/2024.
//

#ifndef SERIES_H
#define SERIES_H

#include "Frequency.h"
#include <vector>
using std::vector;

class Series {
public:
    // Taking a Frequency parameter would require overloading the constructor as double value() is the meaningful value.
    // This requires adding a return type to Frequency
    Series(double f);
    vector<Frequency> values;
private:
};



#endif //SERIES_H
