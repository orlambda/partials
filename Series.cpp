//
// Created by Orlando Shamlou on 16/11/2024.
//

#include "Series.h"
#include <vector>
#include "frequency_constants.h"
using std::vector;

Series::Series(double fundamental) {
    // Doesn't check that the fundamental is audible
    if (fundamental <= 1) // Could be 0 - avoid making massive vectors from tiny fundamentals
        {return;} // TODO: change to throw exception? No point trying to catch exceptions in main just yet
    for (double partial = fundamental; partial <= upper_limit.value; partial += fundamental) {
        values.push_back(Frequency{partial}); }
}