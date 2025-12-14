#include "Ctx.h"

// Build only [Debug - x64]

int main()
{
    EMonths monthToEnter;

    int monthUserInput;

    do
    {
        std::cout << "Enter month number: ";
        std::cin >> monthUserInput;

        monthToEnter = static_cast<EMonths>(monthUserInput);

        switch (monthToEnter)
        {
        case EMonths::Unknown: std::cout << "Goodbye =)"; break;
        case EMonths::January: std::cout << "January"; break;
        case EMonths::February: std::cout << "February"; break;
        case EMonths::March: std::cout << "March"; break;
        case EMonths::April: std::cout << "April"; break;
        case EMonths::May: std::cout << "May"; break;
        case EMonths::June: std::cout << "June"; break;
        case EMonths::July: std::cout << "July"; break;
        case EMonths::August: std::cout << "August"; break;
        case EMonths::September: std::cout << "September"; break;
        case EMonths::October: std::cout << "October"; break;
        case EMonths::November: std::cout << "November"; break;
        case EMonths::December: std::cout << "December"; break;
        default: std::cout << "You entered invalid month number!"; break;
        }

        std::cout << std::endl;
    } while (monthUserInput != EMonths::Unknown);

    return EXIT_SUCCESS;
}