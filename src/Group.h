#ifndef GROUP_H
#define GROUP_H

#include <iostream>
#include "User.h"

class Group : User {

	private:
		std::vector<User> users;
		bool is_administrator;
	public:

};

#endif // GROUP_H
