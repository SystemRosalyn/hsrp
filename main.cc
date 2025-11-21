#include <iostream>
#include "API/crypto.h"
#include "API/db.h"
#include "API/utils.h"
#include "src/Administrator.h"
#include "src/Group.h"
#include "src/User.h"


int main(int argc, char *argv[]) {

	std::cout << "            ________________________________________________" << std::endl;
    	std::cout << "           /                                                \\" << std::endl;
    	std::cout << "          |   ____________________________________________   |" << std::endl;
    	std::cout << "          |  |                                            |  |" << std::endl;
    	std::cout << "          |  |  user@machine:~$ sudo ./hsrp --init        |  |" << std::endl;
    	std::cout << "          |  |  [*] Initializing secure environment...    |  |" << std::endl;
    	std::cout << "          |  |  [*] Hashing password with SHA-256...      |  |" << std::endl;
    	std::cout << "          |  |  [\\xE2\\x9C\\x93] Done!                                  |  |" << std::endl;
    	std::cout << "          |  |                                            |  |" << std::endl;
    	std::cout << "          |  |____________________________________________|  |" << std::endl;
    	std::cout << "          \\________________________________________________/" << std::endl;
	std::cout << std::endl;
	std::cout << "  ,--.   ,--.       ,--.                                    ,--.          " << std::endl;
	std::cout << "  |  |   |  | ,---. |  | ,---. ,---. ,--,--,--. ,---.     ,-'  '-. ,---.  " << std::endl;
	std::cout << "  |  |.'.|  || .-. :|  || .--'| .-. ||        || .-. :    '-.  .-'| .-. | " << std::endl;
	std::cout << "  |   ,'.   |\\   --.|  |\\ `--.' '-' '|  |  |  |\\   --.      |  |  ' '-' ' " << std::endl;
	std::cout << "  '--'   '--' `----'`--' `---' `---' `--`--`--' `----'      `--'   `---'  " << std::endl;
	std::cout << "                  ,--.  ,--. ,---.  ,------. ,------.                     " << std::endl;
	std::cout << "                  |  '--'  |'   .-' |  .--. '|  .--. '                    " << std::endl;
	std::cout << "                  |  .--.  |`.  `-. |  '--'.'|  '--' |                    " << std::endl;
	std::cout << "                  |  |  |  |.-'    ||  |\\  \\ |  | --'                      " << std::endl;
	std::cout << "                  `--'  `--'`-----' `--' '--'`--'                          " << std::endl;
	return 0;

}
