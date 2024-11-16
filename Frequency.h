//
// Created by Orlando Shamlou on 16/11/2024.
//

#ifndef FREQUENCY_H
#define FREQUENCY_H

class Frequency {
public:
    // TODO: check if can create Frequency during runtime from user input
        // TODO: if not: constructor cannot be constexpr?
    constexpr Frequency(double f) {
        // TODO: Prevent negative frequencies? Warning: tests() currently uses negative values
        value = f;
    }
    double value;
    bool is_audible();
};

#endif //FREQUENCY_H
