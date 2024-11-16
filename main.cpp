#include <iostream>
using std::cout, std::cin, std::endl;
#include "Frequency.h"
#include "frequency_constants.h"

int main() {
    Frequency f{100}; // to test
    Frequency very_high{30000};
    ++f.value;
    cout << A4.value << endl; // 440
    cout << f.value << endl; // 101
    cout << f.value << "Hz audible, 1/0: " << f.is_audible() << endl;
    cout << very_high.value << "Hz audible, 1/0: " << very_high.is_audible() << endl;
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