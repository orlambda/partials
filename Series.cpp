//
// Created by Orlando Shamlou on 16/11/2024.
//

#include "Series.h"
#include <vector>
#include "frequency_constants.h"
using std::vector;

Series::Series(const double fundamental) {
    // Doesn't check that the fundamental is audible
    if (fundamental <= 1) // Could be 0 - avoid making massive vectors from tiny fundamentals
        {return;} // TODO: change to throw exception? No point trying to catch exceptions in main just yet
    // TODO: refactor to avoid fundamental*i happening twice
    for (int i = 1; fundamental * i <= upper_limit.value; ++i) {
        // TODO: pass a function to calculate partial based on i, allowing distorted series
        double partial = fundamental * i;
        values.push_back(Frequency{partial}); }
}