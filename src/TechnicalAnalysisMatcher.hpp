#ifndef TECHNICAL_ANALYSIS_MATCHER_H
#define TECHNICAL_ANALYSIS_MATCHER_H

#include "Candle.hpp"

#include <vector>

namespace TAMatcher
{
    bool isHammer(const std::vector<Candle>& candles);
}

#endif