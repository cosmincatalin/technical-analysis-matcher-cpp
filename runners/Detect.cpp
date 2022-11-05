#include "TechnicalAnalysisMatcher.hpp"
#include "Candle.hpp"

#define DBG_MACRO_NO_WARNING
#include <dbg.h>

#include <vector>

int main()
{
    std::vector<TAMatcher::Candle> candles{};
    candles.emplace_back(4, 5, 2, 3);
    candles.emplace_back(3.5, 4, 1, 2);
    candles.emplace_back(2.5, 3, 0.5, 1.5);
    for (const TAMatcher::Candle& candle : candles)
    {
        dbg(candle.getOpen());
    }

    dbg(TAMatcher::isHammer(candles));
    return 0;
}