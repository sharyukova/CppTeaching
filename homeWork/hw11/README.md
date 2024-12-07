![pic](https://github.com/user-attachments/assets/b57cdf4a-efeb-4ae9-8a22-4ffa8867f6f7)
## Ad-hoc полиморфизм
Необходимо создать свое пространство имён `sinus_taylor`. В нем реализовать вычисление функции `type sin(type x)` с помощью [ряда Тейлора](https://ru.wikipedia.org/wiki/%D0%9F%D0%BE%D0%BB%D0%B8%D0%BC%D0%BE%D1%80%D1%84%D0%B8%D0%B7%D0%BC_(%D0%B8%D0%BD%D1%84%D0%BE%D1%80%D0%BC%D0%B0%D1%82%D0%B8%D0%BA%D0%B0)#%D0%A1%D0%BF%D0%B5%D1%86%D0%B8%D0%B0%D0%BB%D1%8C%D0%BD%D1%8B%D0%B9_%D0%BF%D0%BE%D0%BB%D0%B8%D0%BC%D0%BE%D1%80%D1%84%D0%B8%D0%B7%D0%BC:~:text=%D0%BF%D1%80%D0%B0%D0%B2%D0%B8%D1%82%D1%8C%20%D0%BA%D0%BE%D0%B4%5D-,Ad%2Dhoc%2D%D0%BF%D0%BE%D0%BB%D0%B8%D0%BC%D0%BE%D1%80%D1%84%D0%B8%D0%B7%D0%BC,-%5B%D0%BF%D1%80%D0%B0%D0%B2%D0%B8%D1%82%D1%8C%20%7C) для каждого из типов данных [`float`, `double`, `long double`] при помощи [ad-hoc полиморфизма](https://ru.wikipedia.org/wiki/%D0%9F%D0%BE%D0%BB%D0%B8%D0%BC%D0%BE%D1%80%D1%84%D0%B8%D0%B7%D0%BC_(%D0%B8%D0%BD%D1%84%D0%BE%D1%80%D0%BC%D0%B0%D1%82%D0%B8%D0%BA%D0%B0)#%D0%A1%D0%BF%D0%B5%D1%86%D0%B8%D0%B0%D0%BB%D1%8C%D0%BD%D1%8B%D0%B9_%D0%BF%D0%BE%D0%BB%D0%B8%D0%BC%D0%BE%D1%80%D1%84%D0%B8%D0%B7%D0%BC:~:text=%D0%BF%D1%80%D0%B0%D0%B2%D0%B8%D1%82%D1%8C%20%D0%BA%D0%BE%D0%B4%5D-,Ad%2Dhoc%2D%D0%BF%D0%BE%D0%BB%D0%B8%D0%BC%D0%BE%D1%80%D1%84%D0%B8%D0%B7%D0%BC,-%5B%D0%BF%D1%80%D0%B0%D0%B2%D0%B8%D1%82%D1%8C%20%7C) (без использования шаблонов).

В этом же пространстве имен завести функции `void print(const type& x)`, которые бы выводили ответ в следующией форме.
`sin = {x} with type {type}`

Объявление вынести в файл `sinus_taylor.hpp`, реализацию в `sinus_taylor.cpp`
Собрать программу с помощью CMake

(main.cpp)
```
#include <cmath>
#include <iostream>
#include "sinus_taylor.hpp"


int main(){
    sinus_taylor::print_sin(std::sin((double)1);
    sinus_taylor::print_sin(sinus_taylor::sin((float)1));
    sinus_taylor::print_sin(sinus_taylor::sin((double)1));
    sinus_taylor::print_sin(sinus_taylor::sin((long double)1));
    return 0;
}
```

(terminal output)
```
sin = 0.841471 with type double
sin = 0.841667 with type float
sin = 0.841667 with type double
sin = 0.841667 with type long double
```

p.s.
Значение sin может отличаться
