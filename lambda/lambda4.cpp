template<class... Args>
void f(Args... args) {
    auto x = [args...] { return g(args...); };
    x();
}
