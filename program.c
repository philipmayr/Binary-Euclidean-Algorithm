// Binary Euclidean Algorithm

#include <stdio.h>

int find_greatest_common_divisor(int a, int b)
{
    int greatest_common_divisor = 1;
    
    while ((~a & 1) && (~b & 1))
    {
        a >>= 1;
        b >>= 1;
        greatest_common_divisor <<= 1;
    }
    
    while (a)
    {
        while (~a & 1) a >>= 1;
        while (~b & 1) b >>= 1;
        
        if (a >= b) a = (a - b) >> 1;
        else b = (b - a) >> 1;
    }
    
    return greatest_common_divisor * b;
}

int main()
{
    int a = 37;
    int b = 73;
    
    printf("%d", find_greatest_common_divisor(a, b));

    return 0;
}
