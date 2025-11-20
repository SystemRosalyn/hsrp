#ifndef USER_H
#define USER_H

#include <iostream>

class User {

	private:
		std::string username;
		std::string password;
		uint8_t hash;
		bool is_root;
		bool is_in_group;
	public:

};

#endif // USER_H
