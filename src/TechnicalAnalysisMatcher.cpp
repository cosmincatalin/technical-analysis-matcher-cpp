#include "TechnicalAnalysisMatcher.hpp"
#include "Candle.hpp"

#include <vector>

#include <iostream>

namespace TAMatcher{

    bool fallingThree(const std::vector<Candle>& candles)
    {

        const auto size {candles.size()};

        if (size < 5) return false;

        return true;
    }
}
