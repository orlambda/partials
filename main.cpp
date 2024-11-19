#include <assert.h>
#include <iostream>
using std::cout, std::cin, std::endl;
#include <vector>
using std::vector;
#include "Frequency.h"
#include "freq.h"
#include "Series.h"

void tests();
Frequency get_freq();

/*
 * Geometrical depiction
 * Visual depiction: x = time, y = frequency
 * lengths of lines
 * diagonals
 * line = 2 points, a, b
 * class: line
 * given point a, and length of line, and either angle or x of b, (overloading? two functions?)
 *      return y of b
 */

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

int main() {
    tests(); // TODO: delete this when tests have been moved to separate file
    auto f = get_freq();
    f.value++;
    cout << f.value << endl;
}

Frequency get_freq() {
    cout << "Enter frequency: ";
    double x;
    cin >> x;
    return Frequency{x};
}

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
// Test Series
    // Test Series constructor
    {
        const vector<double> invalid_fundamentals {-100, -1, 0, 0.1, 0.9999, 1, 20000.00001, 999999999};
        for (const auto& f : invalid_fundamentals) {
            assert(Series{f}.values.size() == 0);
        }
    }
    {
        // TODO: read about double precision as 19999.9999 is being rounded up at some point (where?)
        // Test for non-empty vectors
        const vector<double> valid_fundamentals {8, 20, 20.00001, 440, 19999, 19999.9999, 20000};
        for (const auto& f : valid_fundamentals) {
            assert(Series{f}.values.size() != 0);
        }
    }
    {
        // TODO: check adding one more element to s would go above upper_limit.value()
        double fundamental = 20;
        Series s{fundamental};
        int i = 1;
        for (auto& partial : s.values) {
            assert(partial.value == fundamental * i);
            i++;
        }
    }

}