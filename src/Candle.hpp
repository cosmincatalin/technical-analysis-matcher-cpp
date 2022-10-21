#ifndef TECHNICALANALYSISMATCHER_CANDLE_HPP
#define TECHNICALANALYSISMATCHER_CANDLE_HPP
namespace TAMatcher
{
    class Candle
    {
    private:
        double open;
        double high;
        double low;
        double close;
    public:
        Candle(double open, double close, double high, double low);
        double getOpen() const { return open; };
    };
}
#endif //TECHNICALANALYSISMATCHER_CANDLE_HPP
