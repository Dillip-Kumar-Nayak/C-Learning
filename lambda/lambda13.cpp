int y = 32;
auto answer = [y]() constexpr
{
	int x = 10;
	return y + x;
};

constexpr int Increment(int n)
{
	return [n] { return n + 1; }();
}
