#include "User.h"

void User::encrypt_user_credentials(std::vector<int> _vec)
{
    std::vector<int> *_vec_ptr{&_vec};
    for (unsigned int i{0}; i <= (_vec.size() - 1); ++i)
        if (_vec[i + encrypter_incr] != 0)
            _vec[i] = _vec[i] + encrypter_incr;
        else
            _vec[i] = _vec[i] + encrypter_incr;

    std::cout << "[ ";
    for (auto element : *_vec_ptr)
        std::cout << " " << element << " " << std::endl;
    std::cout << " ]" << std::endl;

    int curr_val{};

    for (unsigned int i{0}; i <= ((*_vec_ptr).size() - 1); ++i)
        for (unsigned int k{5}; k >= 0; --k)
            (*_vec_ptr)[i] *= k;

    std::cout << "[ ";
    for (auto element : *_vec_ptr)
        std::cout << element << std::endl;
    std::cout << " ]" << std::endl;

    delete[] _vec_ptr;
};
