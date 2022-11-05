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
        Candle(double open, double high, double low, double close);
        [[nodiscard]] auto getOpen() const { return open; };
        [[nodiscard]] auto getHigh() const { return high; };
        [[nodiscard]] auto getLow() const { return low; };
        [[nodiscard]] auto getClose() const { return close; };
    };
}
#endif //TECHNICALANALYSISMATCHER_CANDLE_HPP
