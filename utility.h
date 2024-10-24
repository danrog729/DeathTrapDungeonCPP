#ifndef UTILITY_H
#define UTILITY_H

#include <string>

/// <summary>
/// Keeps prompting the user until they either enter a valid yes or no.
/// </summary>
/// <returns> True if they entered a yes, False if they entered a no.</returns>
bool io_yes_no();

/// <summary>
/// keeps prompting the user until they enter a valid integer between minValue (inclusive) and maxValue (exclusive).
/// </summary>
/// <param name="minValue"> The lowest possible integer the user can enter. </param>
/// <param name="maxValue"> The highest possible integer the user can enter + 1.</param>
/// <returns> The integer the user entered. </returns>
int io_valid_int(int minValue, int maxValue);

#endif