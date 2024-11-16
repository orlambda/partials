#include <assert.h>
#include <iostream>
using std::cout, std::cin, std::endl;
#include <vector>
using std::vector;
#include "Frequency.h"
#include "frequency_constants.h"

void tests();

int main() {
    tests(); // TODO: delete this when tests have been moved to separate file
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

// TESTS
// Eventually move to a test file.
// Function is here for now to add tests quickly without worrying about linking.
void tests() {
// Test Frequency
    // Test Frequency.value
    {
        Frequency f1{0};
        assert(f1.value == 0);
        assert(Frequency(40).value == 40);
        const vector<double> frequencies {-4000, -0.00001, 0, 1, 20, 20000, 20000.01};
        for (const auto& f : frequencies) {
            assert(Frequency{f}.value == f);
        }
    }
    // Test Frequency.is_audible()
    {
        // Test audible frequencies
        const vector<double> audible_frequencies {20, 20.0002, 400, 400.5,
            10000, 19999, 19999.99999999, 20000};
        for (const auto& f : audible_frequencies) {
            assert(Frequency{f}.is_audible());
        }
        // Test inaudible frequencies
        const vector<double> inaudible_frequencies
            {-9999999999, -1, -0.00001, 0, 0.00001, 1, 19, 19.1, 19.5, 19.9999999, 20000.00000001, 20000.1,
                20000.5, 50000, 1000000000000};
        for (const auto& f : inaudible_frequencies) {
            assert(!Frequency{f}.is_audible());
        }
    }
}