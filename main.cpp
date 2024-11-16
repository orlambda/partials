#include <iostream>
using std::cout, std::cin, std::endl;
#include "Frequency.h"

// Where to keep these to avoid global variables?
constexpr Frequency A4{440};
constexpr Frequency lower_limit{20};
constexpr Frequency upper_limit{20000};

int main() {
    Frequency f{100}; // to test
    ++f.value;
    cout << A4.value << endl; // 440
    cout << f.value << endl; // 101
}

/*
 * Need:
 * 20Hz to 20kHz (limits of human hearing)
 * For each player: vector to contain series of frequencies
 * Vector to contain all players
 *
 * Function that generates a harmonic series from a fundamental
 *
 * Modifier function - alters a frequency
 * Given: frequency, which partial (fundamental is 0), factor
 *  OR: given a fundamental, factor, return a frequency e.g.
 *      f = 20
 *      n = 0
 *      factor = 1
 *      output 20 * (n+1) * factor (but with trig)
 * Does the factor represent the angle at which nodes branch?
 *
 *
 * */