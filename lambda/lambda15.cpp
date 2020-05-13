auto Increment = [](int n)
{
	return n + 1;
};

constexpr int(*inc)(int) = Increment;
