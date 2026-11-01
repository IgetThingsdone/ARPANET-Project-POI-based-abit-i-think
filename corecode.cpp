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

void showARPANETHistory()
{
    typeEffect(R"ARPANET(

==============================================================
                      HISTORICAL ARCHIVE                    
==============================================================

SUBJECT: THE HISTORY OF ARPANET
CLASSIFICATION: HISTORICAL RESEARCH
PERIOD: 1957 - 1990

------------------------------------------------------------
[1957 - 1966] THE BEGINNING
------------------------------------------------------------

In 1957, the Soviet Union launched Sputnik, the first
artificial satellite.

In response, the United States established ARPA in 1958,
the Advanced Research Projects Agency.

ARPA funded research into advanced technology, including
computer networking.

One important researcher was J.C.R. Licklider.

In 1962, Licklider became director of ARPA's Information
Processing Techniques Office.

He imagined a worldwide network of interconnected
computers. He called this idea the
"Intergalactic Computer Network".

Researchers also began developing packet switching.

Instead of sending information as one continuous stream,
packet switching breaks data into smaller pieces called
packets.

These packets travel through a network and are
reassembled at their destination.

------------------------------------------------------------
[1966 - 1968] THE NETWORK IS DESIGNED
------------------------------------------------------------

In 1966, computer scientist Lawrence Roberts began
developing plans for ARPANET.

In 1967, he presented the network proposal.

The goal was to connect computers at universities and
research institutions.

The company Bolt Beranek and Newman, known as BBN,
was selected to build the Interface Message Processors.

These machines were called IMPs.

An IMP connected a host computer to the network and
forwarded packets between network locations.

They were early ancestors of modern routers.

By 1968, the network was being constructed.

------------------------------------------------------------
[1969] THE FIRST FOUR NODES
------------------------------------------------------------

In September 1969, the first IMP was installed at UCLA.

The original four ARPANET locations were:

1. UCLA - Los Angeles, California
2. SRI - Menlo Park, California
3. UCSB - Santa Barbara, California
4. University of Utah - Salt Lake City, Utah

On October 29, 1969, UCLA programmer Charley Kline
attempted to log into a computer at SRI.

The intended message was:

LOGIN

However, the receiving computer crashed after the
first two letters had been transmitted.

The first message sent was:

LO

The system was recovered, and the login was completed
later.

By the end of 1969, all four original nodes were connected.

ARPANET had officially begun.

------------------------------------------------------------
[1970 - 1971] THE NETWORK EXPANDS
------------------------------------------------------------

More universities and research organizations joined
the network.

In 1970, the Network Control Protocol, known as NCP,
was completed.

NCP allowed computers on ARPANET to communicate.

In 1971, Ray Tomlinson developed an early network email
system.

He adopted the @ symbol to separate a user name from
the computer hosting that user's account.

Email quickly became one of ARPANET's most important
applications.

Researchers could now send messages to colleagues
at distant institutions.

Other network services included remote login and
file transfer.

------------------------------------------------------------
[1972] ARPANET GOES PUBLIC
------------------------------------------------------------

In October 1972, ARPANET was publicly demonstrated at
the International Computer Communication Conference
in Washington, DC.

The demonstration showed computers communicating
across a packet-switched network.

The project attracted considerable attention.

In the same year, ARPA became DARPA, with the word
Defense added to its name.

Email was becoming increasingly popular among
network researchers.

------------------------------------------------------------
[1973] INTERNATIONAL CONNECTIONS
------------------------------------------------------------

In 1973, ARPANET expanded beyond the United States.

Connections were established with Norway's Royal
Radar Establishment and University College London
in the United Kingdom.

Different types of networks were now being developed.

Researchers needed a way for all these networks
to communicate with one another.

This problem would lead to TCP/IP.

------------------------------------------------------------
[1973 - 1982] THE DEVELOPMENT OF TCP/IP
------------------------------------------------------------

Researchers Vint Cerf and Robert Kahn worked on a
system that could connect different networks.

Their work led to TCP/IP.

IP, the Internet Protocol, handles addressing and
routing packets towards their destinations.

TCP, the Transmission Control Protocol, helps ensure
that data is delivered reliably and in the correct order.

The first TCP design was published in 1974.

Over the following years, the protocols were refined
and tested.

The idea was simple but powerful:

Different networks could communicate using a shared
set of protocols.

This became a foundation of the modern internet.

------------------------------------------------------------
[JANUARY 1, 1983] THE TCP/IP TRANSITION
------------------------------------------------------------

January 1, 1983, became known as ARPANET's Flag Day.

ARPANET officially switched from NCP to TCP/IP.

Computers that wanted to remain connected had to
make the transition.

The US military network was separated into MILNET,
while ARPANET continued supporting research.

This was a major step towards the modern internet.

------------------------------------------------------------
[1989 - 1991] THE WORLD WIDE WEB
------------------------------------------------------------

By the late 1980s, networks were connecting research
institutions around the world.

In 1989, British computer scientist Tim Berners-Lee
proposed the World Wide Web at CERN in Switzerland.

He developed three important technologies:

HTML - used to structure web pages.
HTTP - used to transfer web documents.
URL - used to identify and locate resources.

By 1991, the World Wide Web was publicly available.

The Web and the internet are not the same thing.

The internet is the underlying network infrastructure.

The World Wide Web is a service that operates on it.

------------------------------------------------------------
[1990] THE END OF ARPANET
------------------------------------------------------------

By the late 1980s, newer networks had taken over
many of ARPANET's functions.

In 1990, ARPANET was officially decommissioned.

The project that began with four computers in 1969
had helped establish the foundations of a global
network.

Today, billions of devices communicate using
technologies descended from those early ideas.

------------------------------------------------------------
                  END OF HISTORICAL RECORD
------------------------------------------------------------
NETWORK ARCHIVE
CONNECTION TERMINATED.
I hope you liked this project as of 1st of november 2026 im not touching this project anymore for a while.

)ARPANET");
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
            else if (command == "history" || command == "History")
            {
                showARPANETHistory();
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
                localtime_s(&localTime, &currentTime);

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
            else if (command == "help" || command == "Help") {
                typeEffect("List of available commands: \n");
                typeEffect("Help             - Lists available Commands\n");
                typeEffect("Exit             - Disconnects From ARPANET\n");
                typeEffect("Date             - Displays (Old) Date\n");
                typeEffect("Time             - Dislays Device time\n");
                typeEffect("Whoami           - Displays Current Operator\n");
                typeEffect("Banner           - Displays My ASCII Logo\n");
                typeEffect("Ping <institute> - Pings an institution ex. ping HARVARD (yes caps on the name is required)\n");
                typeEffect("Status           - Displays network status\n");
                typeEffect("NETSTAT          - Displays Network status\n");
                typeEffect("History          - Displays ARPANETS History\n");
            }
            else if (command == "netstat" || command == "netstat") {
                typeEffect("=================================\n");
                typeEffect("             NETSTAT             \n");
                typeEffect("=================================\n\n");
                typeEffect("Active Adresses                  \n");
                typeEffect("\n");
                typeEffect("PROTO | LOCAL ADRESSES  | FOREIGN ADRESSES | STATE");
                typeEffect("TCP   | 192.168.1.10:23 | 10.0.0.5:23      | ESTABLISHED");
                typeEffect("TCP   | 192.168.1.10:80 | 10.0.0.8:443     | ESTABLISHED");
                typeEffect("TCP   | 192.168.1.10:21 | 10.0.0.12:21     | TIME_WAIT");
                typeEffect("\n");
                typeEffect("3 Active adresses displayed.\n");

            }
            else if (command == "Ping UCLA" || command == "ping UCLA") {
                typeEffect("Pinging UCLA\n");
                typeEffect("Adress UCLA-01\n");
                typeEffect("\n");
                typeEffect("Sending Packet 01...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                typeEffect("Sending Packet 02...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 03...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 04...\n");
                typeEffect("\n");
                typeEffect("Packets Sent:     04\n");
                typeEffect("Packets Received: 04\n");
                typeEffect("Packet loss:      None\n");
                typeEffect("Average latency:  18ms\n");
                typeEffect("\n");
                typeEffect("CONNECTION: STABLE\n");
            }
            else if (command == "Ping UCSB" || command == "ping UCSB") {
                typeEffect("Pinging UCSB\n");
                typeEffect("Adress UCSB-02\n");
                typeEffect("\n");
                typeEffect("Sending Packet 01...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                typeEffect("Sending Packet 02...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 03...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 04...\n");
                typeEffect("\n");
                typeEffect("Packets Sent:     04\n");
                typeEffect("Packets Received: 04\n");
                typeEffect("Packet loss:      None\n");
                typeEffect("Average latency:  18ms\n");
                typeEffect("\n");
                typeEffect("CONNECTION: STABLE\n");
            }
            else if (command == "Ping UTAH" || command == "ping UTAH") {
                typeEffect("Pinging UTAH\n");
                typeEffect("Adress UTAH-03\n");
                typeEffect("\n");
                typeEffect("Sending Packet 01...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                typeEffect("Sending Packet 02...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 03...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 04...\n");
                typeEffect("\n");
                typeEffect("Packets Sent:     04\n");
                typeEffect("Packets Received: 04\n");
                typeEffect("Packet loss:      None\n");
                typeEffect("Average latency:  18ms\n");
                typeEffect("\n");
                typeEffect("CONNECTION: STABLE\n");
            }
            else if (command == "Ping MIT" || command == "ping MIT") {
                typeEffect("Pinging MIT\n");
                typeEffect("Adress MIT-04\n");
                typeEffect("\n");
                typeEffect("Sending Packet 01...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                typeEffect("Sending Packet 02...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 03...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 04...\n");
                typeEffect("\n");
                typeEffect("Packets Sent:     04\n");
                typeEffect("Packets Received: 04\n");
                typeEffect("Packet loss:      None\n");
                typeEffect("Average latency:  18ms\n");
                typeEffect("\n");
                typeEffect("CONNECTION: STABLE\n");
            }
            else if (command == "Ping HARVARD" || command == "ping HARVARD") {
                typeEffect("Pinging HARVARD\n");
                typeEffect("Adress HARVARD-05\n");
                typeEffect("\n");
                typeEffect("Sending Packet 01...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                typeEffect("Sending Packet 02...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 03...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 04...\n");
                typeEffect("\n");
                typeEffect("Packets Sent:     04\n");
                typeEffect("Packets Received: 04\n");
                typeEffect("Packet loss:      None\n");
                typeEffect("Average latency:  18ms\n");
                typeEffect("\n");
                typeEffect("CONNECTION: STABLE\n");
            }
            else if (command == "Ping STAN" || command == "ping STAN") {
                typeEffect("Pinging STAN\n");
                typeEffect("Adress STAN-06\n");
                typeEffect("\n");
                typeEffect("Sending Packet 01...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                typeEffect("Sending Packet 02...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 03...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 04...\n");
                typeEffect("\n");
                typeEffect("Packets Sent:     04\n");
                typeEffect("Packets Received: 04\n");
                typeEffect("Packet loss:      None\n");
                typeEffect("Average latency:  18ms\n");
                typeEffect("\n");
                typeEffect("CONNECTION: STABLE\n");
            }
            else if (command == "Ping ILLINOIS" || command == "ping ILLINOIS") {
                typeEffect("Pinging ILLINOIS\n");
                typeEffect("Adress ILLNOIS-07\n");
                typeEffect("\n");
                typeEffect("Sending Packet 01...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                typeEffect("Sending Packet 02...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 03...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 04...\n");
                typeEffect("\n");
                typeEffect("Packets Sent:     04\n");
                typeEffect("Packets Received: 04\n");
                typeEffect("Packet loss:      None\n");
                typeEffect("Average latency:  18ms\n");
                typeEffect("\n");
                typeEffect("CONNECTION: STABLE\n");
            }
            else if (command == "Ping CASE" || command == "ping CASE") {
                typeEffect("Pinging CASE\n");
                typeEffect("Adress CASE-08\n");
                typeEffect("\n");
                typeEffect("Sending Packet 01...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                typeEffect("Sending Packet 02...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 03...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 04...\n");
                typeEffect("\n");
                typeEffect("Packets Sent:     04\n");
                typeEffect("Packets Received: 04\n");
                typeEffect("Packet loss:      None\n");
                typeEffect("Average latency:  18ms\n");
                typeEffect("\n");
                typeEffect("CONNECTION: STABLE\n");
            }
            else if (command == "Ping CMU" || command == "ping CMU") {
                typeEffect("Pinging CMU\n");
                typeEffect("Adress CMU-09\n");
                typeEffect("\n");
                typeEffect("Sending Packet 01...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                typeEffect("Sending Packet 02...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 03...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 04...\n");
                typeEffect("\n");
                typeEffect("Packets Sent:     04\n");
                typeEffect("Packets Received: 04\n");
                typeEffect("Packet loss:      None\n");
                typeEffect("Average latency:  18ms\n");
                typeEffect("\n");
                typeEffect("CONNECTION: STABLE\n");
            }
            else if (command == "Ping USC" || command == "ping USC") {
                typeEffect("Pinging USC\n");
                typeEffect("Adress USC-10\n");
                typeEffect("\n");
                typeEffect("Sending Packet 01...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                typeEffect("Sending Packet 02...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 03...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 04...\n");
                typeEffect("\n");
                typeEffect("Packets Sent:     04\n");
                typeEffect("Packets Received: 04\n");
                typeEffect("Packet loss:      None\n");
                typeEffect("Average latency:  18ms\n");
                typeEffect("\n");
                typeEffect("CONNECTION: STABLE\n");
            }
            else if (command == "Ping USCD" || command == "ping USCD") {
                typeEffect("Pinging USCD\n");
                typeEffect("Adress USCD-11\n");
                typeEffect("\n");
                typeEffect("Sending Packet 01...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                typeEffect("Sending Packet 02...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 03...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 04...\n");
                typeEffect("\n");
                typeEffect("Packets Sent:     04\n");
                typeEffect("Packets Received: 04\n");
                typeEffect("Packet loss:      None\n");
                typeEffect("Average latency:  18ms\n");
                typeEffect("\n");
                typeEffect("CONNECTION: STABLE\n");
            }
            else if (command == "Ping NYU" || command == "ping NYU") {
                typeEffect("Pinging NYU\n");
                typeEffect("Adress NYU-12\n");
                typeEffect("\n");
                typeEffect("Sending Packet 01...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                typeEffect("Sending Packet 02...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 03...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 04...\n");
                typeEffect("\n");
                typeEffect("Packets Sent:     04\n");
                typeEffect("Packets Received: 04\n");
                typeEffect("Packet loss:      None\n");
                typeEffect("Average latency:  18ms\n");
                typeEffect("\n");
                typeEffect("CONNECTION: STABLE\n");
            }
            else if (command == "Ping ALOHA" || command == "ping ALOHA") {
                typeEffect("Pinging ALOHA\n");
                typeEffect("Adress ALOHA-13\n");
                typeEffect("\n");
                typeEffect("Sending Packet 01...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                typeEffect("Sending Packet 02...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 03...\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                typeEffect("Sending Packet 04...\n");
                typeEffect("\n");
                typeEffect("Packets Sent:     04\n");
                typeEffect("Packets Received: 04\n");
                typeEffect("Packet loss:      None\n");
                typeEffect("Average latency:  18ms\n");
                typeEffect("\n");
                typeEffect("CONNECTION: STABLE\n");
            }
        }

    }






    else if (ConChoice == "N" || "n") {
        typeEffect("Exiting...\n");
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        return 1;

    }

}