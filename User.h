#ifndef _USER_H_
#define _USER_H_

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <vector>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <climits>
#include <string>

class User
{
public:
    int encrypter_incr{1};
    void encrypt_user_credentials(std::vector<int> _vec);
};

#endif