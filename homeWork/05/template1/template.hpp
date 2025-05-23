#pragma once // Предотвращает множественное включение файла

template<int N>
constexpr int fibonacci() {
    return fibonacci<N - 1>() + fibonacci<N - 2>();
}

template<>
constexpr int fibonacci<0>() { return 0; }

template<>
constexpr int fibonacci<1>() { return 1; }

template<int N>
class Fibonacci {
public:
    static constexpr int value = Fibonacci<N-1>::value + Fibonacci<N-2>::value;
};

template<>
class Fibonacci<0> {
public:
    static constexpr int value = 0;
};

template<>
class Fibonacci<1> {
public:
    static constexpr int value = 1;
};