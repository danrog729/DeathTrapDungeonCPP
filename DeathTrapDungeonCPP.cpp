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

    name_and_format();
}

static std::string name_and_format()
{
    std::string output;
    std::cout <<
        format::colour::foreground::normal::white <<
        "What do you wish your name to be?\n";
    std::cin >> output;

    std::cout << 
        "\n" <<
        format::colour::foreground::normal::white <<
        "Do you wish for deeper customisation? \n" << 
        format::colour::foreground::strong::grey <<
        "Y) Yes\tN) No " << 
        format::style::reset;
    bool shouldCustomise = io_yes_no();

    return output;
}