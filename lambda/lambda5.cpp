pNums = make_unique<vector<int>>(nums);
//...
auto a = [ptr = move(pNums)]()
{
	// use ptr
};
