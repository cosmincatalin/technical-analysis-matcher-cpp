namespace TAMatcher
{
    class Candle
    {
    private:
        double open;
        double close;
        double high;
        double low;
    public:
        Candle(double open, double close, double high, double low) : open(open), close(close), high(high), low(low) {}
        [[nodiscard]] double getOpen() const { return open; }
        [[nodiscard]] double getClose() const { return close; }
        [[nodiscard]] double getHigh() const { return high; }
        [[nodiscard]] double getLow() const { return low; }
    };
}