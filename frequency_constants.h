//
// Created by Orlando Shamlou on 16/11/2024.
//

#ifndef FREQUENCY_CONSTANTS_H
#define FREQUENCY_CONSTANTS_H

#include "Frequency.h"

// Where to keep these to avoid global variables? Namespace? Static class members?
constexpr Frequency A4{440};
constexpr Frequency lower_limit{20};
constexpr Frequency upper_limit{20000};

#endif //FREQUENCY_CONSTANTS_H
