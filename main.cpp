#include <iostream>

using std::cout;
using std::endl;

#define SPRING 1
#define SUMMER 2
#define AUTUMN 3
#define WINTER 4
#define SELECT SUMMER
#define PRINT_RESULT(x) (printf("This is %s", #x));

int main() {
#if SELECT == SPRING
    PRINT_RESULT(spring)
#endif
#if SELECT == SUMMER
    PRINT_RESULT(summer)
#endif
#if SELECT == AUTUMN
    PRINT_RESULT(autumn)
#endif
#if SELECT == WINTER
    PRINT_RESULT(winter)
#endif
}
