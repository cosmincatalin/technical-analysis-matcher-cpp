#ifndef TECHNICALANALYSISMATCHER_CANDLE_HPP
#define TECHNICALANALYSISMATCHER_CANDLE_HPP
namespace TAMatcher
{
    class Candle
    {
    public:
        Candle(double open, double close, double high, double low);
        double open;
        double high;
        double low;
        double close;
    };
}
#endif //TECHNICALANALYSISMATCHER_CANDLE_HPP
