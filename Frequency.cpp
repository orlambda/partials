//
// Created by Orlando Shamlou on 16/11/2024.
//

#include "Frequency.h"
#include "freq.h"

// TODO: Why does this not compile when defined in this file? I think because constexpr must be in-line
// constexpr Frequency::Frequency(double f) {
//     value = f;
// }

bool Frequency::is_audible() {
    return (value >= freq::min_audible && value <= freq::max_audible);
}