#ifndef ANSI_CODES_H
#define ANSI_CODES_H
#include <string.h>

namespace format
{
    const std::string warning = "[1m[31m";
    namespace style
    {
        const std::string reset = "[0m";
        const std::string bold = "[1m";
        const std::string underline = "[4m";
        const std::string underlinebold = "[1m[4m";
        const std::string inverse = "[7m";
    }
    namespace colour
    {
        namespace foreground
        {
            namespace normal
            {
                const std::string black = "[30m";
                const std::string red = "[31m";
                const std::string green = "[32m";
                const std::string yellow = "[33m";
                const std::string blue = "[34m";
                const std::string magenta = "[35m";
                const std::string cyan = "[36m";
                const std::string white = "[37m";
            }
            namespace strong
            {
                const std::string grey = "[90m";
                const std::string red = "[91m";
                const std::string green = "[92m";
                const std::string yellow = "[93m";
                const std::string blue = "[94m";
                const std::string magenta = "[95m";
                const std::string cyan = "[96m";
                const std::string white = "[97m";
            }
        }
        namespace background
        {
            namespace normal
            {
                const std::string black = "[40m";
                const std::string red = "[41m";
                const std::string green = "[42m";
                const std::string yellow = "[43m";
                const std::string blue = "[44m";
                const std::string magenta = "[45m";
                const std::string cyan = "[46m";
                const std::string white = "[47m";
            }
            namespace strong
            {
                const std::string grey = "[100m";
                const std::string red = "[101m";
                const std::string green = "[102m";
                const std::string yellow = "[103m";
                const std::string blue = "[104m";
                const std::string magenta = "[105m";
                const std::string cyan = "[106m";
                const std::string white = "[107m";
            }
        }
    }
}

#endif