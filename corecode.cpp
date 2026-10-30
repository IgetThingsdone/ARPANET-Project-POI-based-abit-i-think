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
    typeEffect("****************************************\n", 1);
    typeEffect("*                                      *\n", 1);
	typeEffect("*                ARPANET               *\n"   );
	typeEffect("*                                      *\n", 1);
	typeEffect("*           PROPERTY OF THE            *\n"   );
    typeEffect("*       UNITED STATES OF AMERICA       *\n"   );
	typeEffect("*                                      *\n", 1);
	typeEffect("*                                      *\n", 1);
	typeEffect("****************************************\n", 1);

	typeEffect("\n\n\n", 1);
	typeEffect("Continue? [Y] or [N]");
	ConChoice;
	if (ConChoice == "Y" || "y") {
		typeEffect("Welcome to the ARPANET");

		std::this_thread::sleep_for(std::chrono::milliseconds(2000));

		typeEffect("ARPANET NODE INTERFACE\n\n"          );
		typeEffect("-----------------------------\n\n", 1);
		typeEffect("NETWORK STATUS: OPERATIONAL\n"       );
		typeEffect("NODES ONLINE: 42\n"                  );
		typeEffect("Packets in transit: N/A\n"           );
		typeEffect("PROTOCOL: NCP / TCP-IP\n\n"          );
		typeEffect("-----------------------------"\n\n, 1);

		typeEffect("Welcome, Operator.\n");

		typeEffect("Type Help for available commands\n");

	}
	else if (ConChoice == "N" || "n") {
		typeEffect("Exiting...");
			return 1;

	}
}