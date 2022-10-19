#include "TechnicalAnalysisMatcher.hpp"
#include "Candle.hpp"

#define DBG_MACRO_NO_WARNING
#include <dbg.h>

#include <vector>

int main()
{
    std::vector<TAMatcher::Candle> candles{};
    candles.push_back(TAMatcher::Candle{1, 2, 3, 4});
    candles.push_back(TAMatcher::Candle{5, 6, 7, 8});
    for (const TAMatcher::Candle& candle : candles)
    {
        dbg(candle.open);
    }
    dbg(TAMatcher::match());
    return 0;
}