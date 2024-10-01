#include <iostream>
#include <cstdlib>   // system() function for running commands
#include <string>

using namespace std;

// Function to open a specific application in Linux
void openApplication(const string& appName) {
    if (appName == "text editor") {
        system("gedit &");  // Or use nano, vim, or any other editor installed
    } else if (appName == "calculator") {
        system("gnome-calculator &");  // For GNOME desktop environments
    } else if (appName == "browser") {
        system("xdg-open https://www.google.com ");  // Default browser
    }
    else if(appName=="codeblocks"){
        system("codeblocks &");   //Open codeblocks
    }else if(appName=="code"){
        system("code &");   //Open vs code
    }else if(appName=="sublime"){
        system("subl &");   //Open sublime
    }else if(appName=="clocks"){
        system("gnome-clocks &");   //Open clocks
    }else if(appName=="cmatrix"){
        system("cmatrix &");   //Open cmatrix
    }else if(appName=="chess"){
        system("gnome-chess &");   //Open codeblocks
    }else if(appName=="camera"){
        system("cheese &");   //Open camera
    }

    else {
        cout << "Application not found!" << endl;
    }
}

// Function to open a website in default browser
void openWebsite(const string& url) {
    string command = "xdg-open " + url + " &";
    system(command.c_str());
}

// Function to display options
void displayOptions() {
    cout << "\nVirtual Assistant Menu:\n";
    cout << "01. Open Text Editor\n";
    cout << "02. Open Calculator\n";
    cout << "03. Open Web Browser\n";
    cout << "04. Open a specific website\n";
    cout << "05. Open Codeblocks\n";
    cout << "06. Open VS code\n";
    cout << "07. Open Sublime Text\n";
    cout << "08. Open Clocks\n";
    cout << "09. Open Cmatrix\n";
    cout << "10. Open Chess\n";
    cout << "11. Open Camera\n";
    cout << "100. Exit\n";
}

int main() {
    int choice;
    string website;

    cout << "Welcome to Virtual Desktop Assistant (Linux version)!\n";

    while (true) {
        displayOptions();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {


            case 1:
                openApplication("text editor");
                break;
            case 2:
                openApplication("calculator");
                break;
            case 3:
                openApplication("browser");
                break;
            case 4:
                cout << "Enter website URL (e.g., www.google.com): ";
                cin >> website;
                openWebsite(website);
                break;

            case 5:
                 openApplication("codeblocks");
                 break;
            case 6:
                 openApplication("code");
                 break;
            case 7:
                 openApplication("sublime");
                 break;
            case 8:
                 openApplication("clocks");
                 break;
            case 9:
                 openApplication("cmatrix");
                 break;
            case 10:
                 openApplication("chess");
                 break;
            case 11:
                 openApplication("camera");
                 break;
            case 100:
                cout << "Exiting the assistant...\n";

                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
