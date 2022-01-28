#include <stdint.h>
#include <iostream>

typedef struct s_data {
    int value;
    bool flag;
}               Data;

uintptr_t serialize(Data* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
    return reinterpret_cast<Data *>(raw);
}

int main(){
    Data* ptr = new Data;

    //* Note that for some reason sizeof isn't equal to the sum of the single sizeof in a struct
    std::cout << "Size of data to be serialized: " << sizeof(ptr) << std::endl;
    std::cout << "Deserialized: " << ptr << std::endl;
    uintptr_t serialized = serialize(ptr);
    std::cout << "Serialized data: " << serialized << std::endl;
    std::cout << "Deserialized data: " << deserialize(serialized) << std::endl;

    delete ptr;
}
