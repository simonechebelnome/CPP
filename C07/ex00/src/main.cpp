#include "../includes/Templates.hpp"

int main(){
    //! Swap Test
    swap<std::string>("ciao", "prova");
    swap<int>(6, 9);
    swap<float>(3.6f, 12.8f);

    //! Min Test
    std::cout << min<int>(5, 6) << std::endl;
    std::cout << min<std::string>("ciao", "prova") << std::endl;
    std::cout << min<float>(5.5, 5.5) << std::endl;

    //! Max Test
    std::cout << max<int>(5, 6) << std::endl;
    std::cout << max<std::string>("ciao", "prova") << std::endl;
    std::cout << max<float>(5.5, 5.5) << std::endl;

    return 0;
}