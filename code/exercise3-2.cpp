#include <iostream>

int main(void){   
    
    int n = 3;   
    
    while (n >= 0)   {      
        
        std::cout << n * n << std::endl;
        --n;   
    }   
    std::cout << n << std::endl;   
    
    while (n < 4)      
        std::cout << ++n << std::endl;   
    
    std::cout << n << std::endl;   
    
    while (n >= 0)      
        std::cout << (n /= 2) << std::endl;   
    
    return 0;
}
