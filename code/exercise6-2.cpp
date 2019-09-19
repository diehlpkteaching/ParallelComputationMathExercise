#include <iostream>
#include <vector>
#include <numeric>
#include <future>

using namespace std;


int func1(vector<int> values){
    
    
    return accumulate(values.begin(),values.end(),0);
    
    
}


int main()
{
    std::vector<int> values = {1,2,3,4,5,6,7,8,9,10};
    
    auto f1 = std::async(func1,values);
    
    auto f2 = std::async([](const vector<int> values  ){return std::inner_product(values.begin(), values.end(), values.begin(), 0);},values);
    
    
    cout << f1.get() + f2.get() << std::endl;

    return 0;
}
