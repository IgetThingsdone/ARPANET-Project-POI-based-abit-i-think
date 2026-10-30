#include <iostream>
#include <thread>
#include <chrono>
#include <string>
using namespace std;

void typeEffect(std::string text) {
    for (int i = 0; i < text.length(); i++) {
        std::cout << text[i] << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
}

int main()
{
    typeEffect("****************************************\n");
    typeEffect("*                                      *\n");
	typeEffect("*                ARPANET               *\n");
	typeEffect("*                                      *\n");
	typeEffect("*           PROPERTY OF THE            *\n");
    typeEffect("*       UNITED STATES OF AMERICA       *\n");
	typeEffect("*                                      *\n");
	typeEffect("*                                      *\n");
	typeEffect("****************************************\n");

	typeEffect("\n\n\n");
	typeEffect("Continue? [Y] or [N]\n");
	string ConChoice;
	cin >> ConChoice;
	if (ConChoice == "Y" || "y") {
		typeEffect("Welcome to the ARPANET\n");

		std::this_thread::sleep_for(std::chrono::milliseconds(2000));

		typeEffect("ARPANET NODE INTERFACE\n\n"       );
		typeEffect("-----------------------------\n\n");
		typeEffect("NETWORK STATUS: OPERATIONAL\n"    );
		typeEffect("NODES ONLINE: 42\n"               );
		typeEffect("Packets in transit: N/A\n"        );
		typeEffect("PROTOCOL: NCP / TCP-IP\n\n"       );
		typeEffect("-----------------------------\n\n");

		typeEffect("Welcome, Operator.\n");

		typeEffect("Type Help for available commands\n");

	}
	else if (ConChoice == "N" || "n") {
		typeEffect("Exiting...\n");
			return 1;

	}
}