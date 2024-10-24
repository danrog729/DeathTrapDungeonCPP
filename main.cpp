#include <iostream>
#include "ansi-codes.h"
#include "heroes.h"
#include "utility.h"
#include <string>

static std::string name_and_format();

int main()
{
    std::cout << 
        format::colour::foreground::strong::blue <<
        format::style::bold <<
        "############# Welcome to Death Trap Dungeon! ############\n\n" <<
        format::style::reset;

    std::string name = name_and_format();
}

/// <summary>
/// Goes through all of the name formatting with the user
/// </summary>
/// <returns> A string containing the user's name. </returns>
static std::string name_and_format()
{
    std::string name;
    std::cout <<
        format::colour::foreground::normal::white <<
        "What do you wish your name to be?\n";
    std::getline(std::cin, name);

    std::cout << 
        "\n" <<
        format::colour::foreground::normal::white <<
        "Do you wish for deeper customisation? \n" << 
        format::colour::foreground::strong::grey <<
        "Y) Yes\tN) No " << 
        format::style::reset;
    bool shouldCustomise = io_yes_no();

    if (shouldCustomise)
    {
        std::cout << "\nWhat colour do you want your name to be?\n";
        std::cout << "1. Black\n2. Red\n3. Green\n4. Yellow\n5. Blue\n6. Magenta\n7. Cyan\n8. White\n";
        int foregroundColour = io_valid_int(1, 9);
        std::cout << "\nDo you want the colour to be strong or normal?\n";
        std::cout << "1. Strong\n2. Normal\n";
        int foregroundStrength = io_valid_int(1, 3);

        std::cout << "\nWhat colour do you want the background of your name to be?\n";
        std::cout << "1. Black\n2. Red\n3. Green\n4. Yellow\n5. Blue\n6. Magenta\n7. Cyan\n8. White\n";
        int backgroundColour = io_valid_int(1, 9);
        std::cout << "\nDo you want the colour to be strong or normal?\n";
        std::cout << "1. Strong\n2. Normal\n";
        int backgroundStrength = io_valid_int(1, 3);

        std::cout << "\nWhat style do you want your name to be in?\n";
        std::cout << "1. Normal\n2. Bold\n3. Underlined\n4. Both";
        int format = io_valid_int(1, 5);

        std::string formatCode;
        switch (format)
        {
        case 1:
            formatCode = format::style::reset; break;
        case 2:
            formatCode = format::style::bold; break;
        case 3:
            formatCode = format::style::underline; break;
        case 4:
            formatCode = format::style::underlinebold; break;
        }

        std::string backgroundCode;
        switch (backgroundStrength)
        {
        case 1:
            // strong
            switch (backgroundColour)
            {
            case 1:
                backgroundCode = format::colour::background::strong::grey; break;
            case 2:
                backgroundCode = format::colour::background::strong::red; break;
            case 3:
                backgroundCode = format::colour::background::strong::green; break;
            case 4:
                backgroundCode = format::colour::background::strong::yellow; break;
            case 5:
                backgroundCode = format::colour::background::strong::blue; break;
            case 6:
                backgroundCode = format::colour::background::strong::magenta; break;
            case 7:
                backgroundCode = format::colour::background::strong::cyan; break;
            case 8:
                backgroundCode = format::colour::background::strong::white; break;
            }
            break;
        case 2:
            // normal
            switch (backgroundColour)
            {
            case 1:
                backgroundCode = format::colour::background::normal::black; break;
            case 2:
                backgroundCode = format::colour::background::normal::red; break;
            case 3:
                backgroundCode = format::colour::background::normal::green; break;
            case 4:
                backgroundCode = format::colour::background::normal::yellow; break;
            case 5:
                backgroundCode = format::colour::background::normal::blue; break;
            case 6:
                backgroundCode = format::colour::background::normal::magenta; break;
            case 7:
                backgroundCode = format::colour::background::normal::cyan; break;
            case 8:
                backgroundCode = format::colour::background::normal::white; break;
            }
        }

        std::string foregroundCode;
        switch (foregroundStrength)
        {
        case 1:
            // strong
            switch (foregroundColour)
            {
            case 1:
                foregroundCode = format::colour::foreground::strong::grey; break;
            case 2:
                foregroundCode = format::colour::foreground::strong::red; break;
            case 3:
                foregroundCode = format::colour::foreground::strong::green; break;
            case 4:
                foregroundCode = format::colour::foreground::strong::yellow; break;
            case 5:
                foregroundCode = format::colour::foreground::strong::blue; break;
            case 6:
                foregroundCode = format::colour::foreground::strong::magenta; break;
            case 7:
                foregroundCode = format::colour::foreground::strong::cyan; break;
            case 8:
                foregroundCode = format::colour::foreground::strong::white; break;
            }
            break;
        case 2:
            // normal
            switch (foregroundColour)
            {
            case 1:
                foregroundCode = format::colour::foreground::normal::black; break;
            case 2:
                foregroundCode = format::colour::foreground::normal::red; break;
            case 3:
                foregroundCode = format::colour::foreground::normal::green; break;
            case 4:
                foregroundCode = format::colour::foreground::normal::yellow; break;
            case 5:
                foregroundCode = format::colour::foreground::normal::blue; break;
            case 6:
                foregroundCode = format::colour::foreground::normal::magenta; break;
            case 7:
                foregroundCode = format::colour::foreground::normal::cyan; break;
            case 8:
                foregroundCode = format::colour::foreground::normal::white; break;
            }
        }

        name = formatCode + backgroundCode + foregroundCode + name + format::style::reset;
    }

    return name;
}