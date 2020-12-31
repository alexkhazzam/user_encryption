#include "User.h"
#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <string>
#include <vector>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <climits>

int main()
{

    std::vector<int> _user1_creds{1, 2, 3, 4, 5, 6, 7, 8, 9};
    User _user1;
    _user1.encrypt_user_credentials(_user1_creds);

    std::vector<int> _user1_creds{1, 2, 3, 4, 5, 6, 7, 8, 9};
    User _user1;
    _user1.encrypt_user_credentials(_user1_creds);

    return 0;
}