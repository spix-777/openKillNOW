#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <cstring>
#include <signal.h>

using namespace std;

int main() {
    cout << "--- BIN that will open and kill ALL GeForceNOW ---" << endl;
    cout << "[+] Opening GeForceNOW" << endl;
    system("/usr/bin/open /Applications/GeForceNOW.app");

    sleep(5);

    while (true) {
        // Look for the string "GeForceNOW" in the process list
        FILE* command = popen("pgrep GeForceNOW", "r");
        char buffer[128];
        string output = "";
        while (fgets(buffer, sizeof(buffer), command) != NULL) {
            output += buffer;
        }
        pclose(command);
        int stringLength = output.length();

        if (stringLength > 20) {
            // Process found
        } else {
            cout << "[+] Killing all GeForceNOW processes..." << endl;
            system("pkill GeForceNOW");
            sleep(1);
            break;
        }
    }

    return 0;
}

