#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
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