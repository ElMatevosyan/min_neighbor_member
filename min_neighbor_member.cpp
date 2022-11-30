#include <iostream>
#include <vector>
#include <algorithm>
 
template<typename T>
std::vector<T> min_member(std::vector<T>& vec)
{
    std::vector<T> res_vector;
    for(int i=1; i< vec.size()-1; i++)
    {
        if (vec[i]<vec[i-1] && vec[i]<vec[i+1])
        {
            res_vector.push_back(vec[i]);
        }
    }
    return res_vector;
}
 

int main()
{
    std::vector<int> my_vector = {4,5,2,7,9,5,8};
    for(int i=0; i < min_member(my_vector).size(); i++)
        {
        std::cout << min_member<int>(my_vector)[i] << "\t";
        }
    std::cout << std::endl;
    
    std::vector<double> my_vector_d = {4.5,5,2.1,7,9,5,8.9};
    for(int i=0; i < min_member(my_vector_d).size(); i++)
        {
        std::cout << min_member<double>(my_vector_d)[i] << "\t";
        }
    std::cout << std::endl;
    
    std::vector<char> my_vector_ch = {'k','b','a','d'};
    for(int i=0; i < min_member(my_vector_ch).size(); i++)
        {
        std::cout << min_member<char>(my_vector_ch)[i] << "\t";
        }
    std::cout << std::endl;

    std::vector<std::string> my_vector_s = {"kkk","bbb","aaa","ddd"};
    //{"hi","Hi","Hello","DDD"};
    for(int i=0; i < min_member(my_vector_s).size(); i++)
        {
        std::cout << min_member<std::string>(my_vector_s)[i] << "\t";
        }
    std::cout << std::endl;

    return 0;
}
