#include "supportFunc.h"

int getRandomNumber(int min, int max) {
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
// Равномерно распределяем генерацию случайного числа в диапазоне значений
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}