// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <limits.h>
#include <stdio.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
  unsigned long long c = unsigned long long(a) +unsigned long long(b);
  if(c >= UNIT_MAX) return UNIT_MAX ;
  return a + b;
  return 0;
}
