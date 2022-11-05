#include "TechnicalAnalysisMatcher.hpp"
#include "Candle.hpp"

#define DBG_MACRO_NO_WARNING
#include <dbg.h>

#include <vector>

int main()
{
    std::vector<TAMatcher::Candle> candles{};
    candles.emplace_back(1, 2, 3, 4);
    candles.emplace_back(5, 6, 7, 8);
    candles.emplace_back(5, 6, 7, 8);
    candles.emplace_back(5, 6, 7, 8);
    candles.emplace_back(5, 6, 7, 8);
    for (const TAMatcher::Candle& candle : candles)
    {
        dbg(candle.getOpen());
    }

    dbg(TAMatcher::isHammer(candles));
    return 0;
}