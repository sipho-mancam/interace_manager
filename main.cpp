#include <iostream>
#include <typeinfo>

class Something2{

};

class Something{

};

int main()
{

    int num = 0;
    Something s;
    Something s2;
    Something2 s3;


    std::string type1(typeid(Something).name());
    std::string type2(typeid(Something).name());

    std::cout<< (type1 == type2)<<std::endl;
    std::cout<<"Types"<<std::endl;
    std::cout<<type1<<std::endl<<type2<<std::endl;

   
    return 0;
}