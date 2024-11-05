# Partials
## Outline
Experimental project to manipulate the harmonic series for musical composition

The purpose and scope of this project have yet to be decided.

I will start with functions to generate and manipulate
audible frequencies of the harmonic series
with a view to creating tools for musical composition.

## History and future of the project
### Drifts
In 2009 I wrote a spectralist musical composition called Drifts,
in which a group of players each control the frequency and amplitude of sine wave.

Each player starts at the fundamental frequency of 40Hz
and gradually increases their frequency over a series of pitches
based on the harmonic series.

Halfway through the piece this process stops,
and the players gradually tune their frequencies by ear
so all players reach the same pitch, at which point the piece ends.

The frequencies for this piece were visually represented by a tree
of nodes with a single root with the positions of the nodes dictating the frequency.

The tree was drawn such that the frequencies deviated from the true harmonic series.

I made an Excel model to calculate the frequencies using trigonometry.

I may write a more exact description in the future.

### Future
This could become a project to calculate the frequencies in the same way,
but using C++ instead of Excel.

However, this doesn't serve much purpose other than as an exercise,
as I already have the frequencies for Drifts.

This may become a useful tool if I have ideas for future musical compositions.

## Ideas

### Recursion
Because all the players in drifts start at the same frequency
and branch through a sequence of nodes,
and each player's frequencies need to be listed separately
to be used in musical notation,
this seems like it's calling for recursion.

Each player's frequencies can be stored in a vector of floats,
with all players' vectors stored in a vector.

A function can be written that would return this vector,
given a starting frequency and an upper limit,
such as 20Khz (the upper limit of human hearing),
and the factor that means the players' frequencies
are not all simply multiples of the fundamental.