#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

int main()
{

  std::string x;
  std::cin >> x;
  std::cout << equal(x.begin(), x.begin() + x.size() / 2, x.rbegin()) << std::endl;
    
    
  return 0;
 

}
