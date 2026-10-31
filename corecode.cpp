#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <ctime>
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

		typeEffect("ARPANET NODE INTERFACE\n\n");
		typeEffect("-----------------------------\n\n");
		typeEffect("NETWORK STATUS: OPERATIONAL\n");
		typeEffect("NODES ONLINE: 13\n");
		typeEffect("Packets in transit: N/A\n");
		typeEffect("PROTOCOL: NCP / TCP-IP\n\n");
		typeEffect("-----------------------------\n\n");

		typeEffect("Welcome, Operator.\n");

		typeEffect("Type Help for available commands\n");

		string command;

		while (true) {
			typeEffect("Input Command: \n");
			cin >> command;

			if (command == "Node directory" || command == "node directory") {

				typeEffect("\nActive Node Directory\n");
				typeEffect("-------------------------------------------------------------------------\n");
				typeEffect("Terminal ID    |  Institution                             |Location\n");
				typeEffect("[1]  UCLA      |  University Of California, Los angeles   | California\n");
				typeEffect("[2]  UCSB      |  University Of California, Santa Barbara | California\n");
				typeEffect("[3]  UTAH      |  University Of Utah                      | Utah\n");
				typeEffect("[4]  MIT       |  Massachusetts Institute of Technology   | Massachusetts\n");
				typeEffect("[5]  HARVARD   |  Harvard University                      | Massachusetts\n");
				typeEffect("[6]  STAN      |  Stanford University                     | California\n");
				typeEffect("[7]  ILLINOIS  |  University Of Illinois                  | Illinois\n");
				typeEffect("[8]  CASE      |  Case Western Reserve University         | Ohio\n");
				typeEffect("[9]  CMU       |  Carnegie Mellon University              | Pennsylvania\n");
				typeEffect("[10] USC       |  University of Southern California       | California\n");
				typeEffect("[11] UCSD      |  University of California, San Diego     | California\n");
				typeEffect("[12] NYU       |  New York University                     | New York\n");
				typeEffect("[13] ALOHA     |  University of Hawaii                    | Hawaii\n");
				typeEffect("-------------------------------------------------------------------------\n");
				typeEffect("\n  Active Nodes Found\n");
			}
			else if (command == "Status" || command == "status") {

				typeEffect("=====================================\n");
				typeEffect("         ARPANET SYSTEM STATUS       \n");
				typeEffect("=====================================\n");
				typeEffect("\n");
				typeEffect("System Information\n");
				typeEffect("------------------\n");
				typeEffect("SYSTEM:   ARPANET\n");
				typeEffect("VER:      1.0\n");
				typeEffect("OPERATOR: Admin\n");
				typeEffect("\n");
				typeEffect("NETWORK STATUS\n");
				typeEffect("-----------------------------\n");
				typeEffect("NETWORK:          OPERATIONAL\n");
				typeEffect("NODES ONLINE:     13\n");
				typeEffect("ACTIVE USERS:     13\n");
				typeEffect("PACKETS SENT:     1560\n");
				typeEffect("PACKETS RECEIVED: 1450\n");
				typeEffect("PACKET LOSS:      1.5%\n");
				typeEffect("\n");
				typeEffect("CONNECTION\n");
				typeEffect("-----------------------\n");
				typeEffect("PROTOCOL:   NCP / TC-IP\n");
				typeEffect("CONNECTION: ESTABLISHED\n");
				typeEffect("SECURITY:   ACTIVE\n");
				typeEffect("\n");
				typeEffect("===========================\n");
				typeEffect("    ALL SYSTEMS NOMINAL    \n");
				typeEffect("===========================\n");
			}
			else if (command == "time" || command == "Time") {

				time_t currentTime = time(nullptr);

				tm localTime;
				localtime_r(&currentTime, &localTime);

				char timeBuffer[80];

				strftime(timeBuffer, sizeof(timeBuffer), "%H:%M:%S", &localTime);

				typeEffect("LOCAL SYSTEM TIME: ");
				typeEffect(timeBuffer);
				typeEffect("\n");
			}
			else if (command == "Date" || command == "date") {
				typeEffect("Date: 1969\n");
			}
			else if (command == "Exit" || command == "exit") {
				typeEffect("Exiting ARPANET....\n");
				typeEffect("Local SYS shutdown.\n");
				return 1;
			}
			else if (command == "Whoami" || command == "whoami") {
				typeEffect("================\n");
				typeEffect("CURRENT OPERATOR\n");
				typeEffect("================\n");
				typeEffect("NODE ID :   154233\n");
				typeEffect("CONNECTION: Secure\n");
			}
			else if (command == "Banner" || command == "banner") {
				typeEffect("============================================================\n");
				typeEffect("                                                            \n");
				typeEffect("     =====   =====   |   |   =====   |   |   |====   =====\n");
				typeEffect("       |    |     |  |   |  |     |  |v v|   |       |\n");
				typeEffect("       |    =======  =====  =======  =====   |====    ====\n");
				typeEffect("   |   |    |     |  |   |  |     |  |   |   |           |\n");
				typeEffect("    ===     |     |  |   |  |     |  |   |   |====  ======\n");
				typeEffect("                                                            \n");
				typeEffect("*****       A R P A N E T   T E R M I N A L       *****\n");
				typeEffect("                       1 9 7 2                            \n");
				typeEffect("============================================================\n");
			}
		}

	}






	else if (ConChoice == "N" || "n") {
		typeEffect("Exiting...\n");
		std::this_thread::sleep_for(std::chrono::milliseconds(2000));
		return 1;

	}

}