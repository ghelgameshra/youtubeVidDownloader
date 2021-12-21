#include <iostream>
#include <limits>
using namespace std;
string linkDownload, formatCode;
string warning = "Warning: Invalid input\n";
int fromDownload = 0;

/* PROTOTYPE */
int menu(string link);
int subMenu(string link);
int downloadOtomatis(string link);
int download360(string link);
int download480(string link);
int downloadManual(string link);
/* END PROTOTYPE */

/* BEGIN FUNGSI DOWNLOAD VIDEO */
int downloaOtomatis( string link ){
    char pilih;
    if(system("cls")) system("clear");
    cout << "========================================================\n";
    cout << "\tYOUTUBE VIDEO DOWNLOADER - [beta]\t\n";
    cout << "\t\tby @ghelgameshra\t\n";
    cout << "\tAutomatic download 720p/mp4/mkv video\t\n";
    cout << "========================================================\n";
    cout << "\n" << "Active link: " << link << endl;
    cout << "--------------------------------------------------------\n";
    system(("youtube-dl -f bestvideo+bestaudio -o 'Downloads/%(title)s by %(uploader)s.%(ext)s' -r 200k "+link).c_str());
    if(system("cls")) system("clear");
    cout << "File telah di download\n";
    cout << "========================================================\n";
    cout << "\tYOUTUBE VIDEO DOWNLOADER - [beta]\t\n";
    cout << "\tby @ghelgameshra\t\n";
    cout << "\tAutomatic download 720p/mp4/mkv video\t\n";
    cout << "========================================================\n";
    cout << "[1] Download active link again\n";
    cout << "[2] Download another link\n";
    cout << "[3] Back to main menu\n";
    cout << "[4] Quit\n";
    cout << "\n" << "Active link: " << link << endl;
    cout << "--------------------------------------------------------\n";
    label_ulang:
    cout << "YtD > ";
    cin >> pilih;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if( pilih == '1' ){
        downloaOtomatis(link);
    } else if( pilih == '2' ){
        cout << "Masukkan link: ";
        getline(cin, linkDownload);
        fromDownload = 0;
        downloaOtomatis(linkDownload);
    } else if( pilih == '3' ){
        fromDownload++;
        menu(link);
    } else if( pilih == '4' ){
        cout << "Quiting from program...\n";
        return 0;
    } else {
        cout << warning << endl;
        goto label_ulang;
    }

    return 0;
}

int download360( string link ){
    char pilih;
    if(system("cls")) system("clear");
    cout << "========================================================\n";
    cout << "\tYOUTUBE VIDEO DOWNLOADER - [beta]\t\n";
    cout << "\t\tby @ghelgameshra\t\n";
    cout << "\tDownload 360p/mp4 video\t\n";
    cout << "========================================================\n";
    cout << "Active link: " << link << endl;
    cout << "--------------------------------------------------------\n";

    system(("youtube-dl -f 'best[height<=360]' -o 'Downloads/%(title)s by %(uploader)s.%(ext)s' -r 200k " + link).c_str());
    if(system("cls")) system("clear");
    cout << "File telah didownload\n";
    cout << "========================================================\n";
    cout << "\tYOUTUBE VIDEO DOWNLOADER - [beta]\t\n";
    cout << "\t\tby @ghelgameshra\t\n";
    cout << "\tDownload 360p/mp4 video\t\n";
    cout << "========================================================\n";
    cout << "Active link: " << link << endl;
    cout << "--------------------------------------------------------\n";
    cout << "[1] Download active link again\n";
    cout << "[2] Download another link\n";
    cout << "[3] Back to main menu\n";
    cout << "[4] Quit\n";
    cout << "\n" << "Active link: " << link << endl;
    cout << "--------------------------------------------------------\n";
    label_ulangi:
    cout << "YtD > ";
    cin >> pilih;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if( pilih == '1' ){
        download360(link);
    } else if( pilih == '2' ){
        cout << "Masukkan link: ";
        getline(cin, linkDownload);
        fromDownload = 0;
        download360(linkDownload);
    } else if( pilih == '3' ){
        fromDownload++;
        menu(link);
    } else if( pilih == '4' ){
        cout << "Quiting from program...\n";
        return 0;
    } else {
        cout << warning;
        goto label_ulangi;
    }

    return 0;
}

int download480( string link ){
    char pilih;
    if(system("cls")) system("clear");
    cout << "========================================================\n";
    cout << "\tYOUTUBE VIDEO DOWNLOADER - [beta]\t\n";
    cout << "\t\tby @ghelgameshra\t\n";
    cout << "\tDownload 480p/mp4 video\t\n";
    cout << "========================================================\n";
    cout << "Active link: " << link << endl;
    cout << "--------------------------------------------------------\n";

    system(("youtube-dl -f 'best[height<=480]' -o 'Downloads/%(title)s by %(uploader)s.%(ext)s' -r 200k " + link).c_str());
    if(system("cls")) system("clear");
    cout << "File telah didownload\n";
    cout << "========================================================\n";
    cout << "\tYOUTUBE VIDEO DOWNLOADER - [beta]\t\n";
    cout << "\t\tby @ghelgameshra\t\n";
    cout << "\tDownload 480p/mp4 video\t\n";
    cout << "========================================================\n";
    cout << "Active link: " << link << endl;
    cout << "--------------------------------------------------------\n";
    cout << "[1] Download active link again\n";
    cout << "[2] Download another link\n";
    cout << "[3] Back to main menu\n";
    cout << "[4] Quit\n";
    cout << "\n" << "Active link: " << link << endl;
    cout << "--------------------------------------------------------\n";
    label_ulangi:
    cout << "YtD > ";
    cin >> pilih;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if( pilih == '1' ){
        download360(link);
    } else if( pilih == '2' ){
        cout << "Masukkan link: ";
        getline(cin, linkDownload);
        fromDownload = 0;
        download480(linkDownload);
    } else if( pilih == '3' ){
        fromDownload++;
        menu(link);
    } else if( pilih == '4' ){
        cout << "Quiting from program...\n";
        return 0;
    } else {
        cout << warning;
        goto label_ulangi;
    }


    return 0;
}

int downloadManual( string link ){
    char pilih;
    if(system("cls")) system("clear");
    cout << "========================================================\n";
    cout << "\tOn progress - YOUTUBE VIDEO DOWNLOADER - [beta]\t\n";
    cout << "\t\tby @ghelgameshra\t\n";
    cout << "\tManual Download, for advanced user\t\n";
    cout << "========================================================\n";
    cout << "Active link: " << link << endl;
    cout << "--------------------------------------------------------\n";
    cout << "Do you wanna read youtube-dl help [y/n]?\n";
    cout << "YtD > ";
    cin >> pilih;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if( pilih == 'y' || pilih == 'Y' ){
        system("youtube-dl --help");
    } else {
        cout << "[!] You're on your way.\n";
    }

    cout << "--------------------------------------------------------\n";
    cout << "[!] add an options on your settings\n";
    cout << "[!] don't add 'youtube-dl' on first command\n";
    cout << "[*] example: -f bestadio+bestvideo [ -LINK ]\n";
    cout << "[*] example: -f bestadio+bestvideo [ -LINK ]\n";
    cout << "[*] For more example: https://ostechnix.com/youtube-dl-tutorial-with-examples-for-beginners/\n";
    cout << "--------------------------------------------------------\n";
    cout << "Format code: ";
    getline(cin, formatCode);
    system(("youtube-dl " + formatCode + " -o 'Downloads/%(title)s by %(uploader)s.%(ext)s' " + link).c_str());
    if(system("cls")) system("clear");
    cout << "File telah didownload\n";
    cout << "========================================================\n";
    cout << "\tOn progress - YOUTUBE VIDEO DOWNLOADER - [beta]\t\n";
    cout << "\t\tby @ghelgameshra\t\n";
    cout << "\tManual Download, for advanced user\t\n";
    cout << "========================================================\n";
    cout << "Active link: " << link << endl;
    cout << "--------------------------------------------------------\n";
    cout << "[1] Download active link again\n";
    cout << "[2] Download another link\n";
    cout << "[3] Back to main menu\n";
    cout << "[4] Quit\n";
    cout << "\n" << "Active link: " << link << endl;
    cout << "--------------------------------------------------------\n";
    label_ulangi:
    cout << "YtD > ";
    cin >> pilih;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if( pilih == '1' ){
        download360(link);
    } else if( pilih == '2' ){
        cout << "Masukkan link: ";
        getline(cin, linkDownload);
        download360(linkDownload);
    } else if( pilih == '3' ){
        fromDownload++;
        menu(link);
    } else if( pilih == '4' ){
        cout << "Quiting from program...\n";
        return 0;
    } else {
        cout << warning;
        goto label_ulangi;
    }

    return 0;
}

int menu( string link ){
    char pilih;
    if( system("cls") ) system("clear");
    cout << "========================================================\n";
    cout << "\tYOUTUBE VIDEO DOWNLOADER - [beta]\t\n";
    cout << "\t\tby @ghelgameshra\t\n";
    cout << "========================================================\n";
    cout << "[1] Download Otomatis (720p/mp4/mkv)\n";
    cout << "[2] Download 360p/mp4 standart quality\n";
    cout << "[3] Download 480p/mp4 best quality\n";
    cout << "[4] Download manual (on progress)\n";
    cout << "[5] Change link\n";
    cout << "[6] Quit\n\n";
    if( fromDownload > 0 ){
        cout << "[!] This link has been downloaded\n";
    }
    cout << "[*] Active link: " << link << endl;
    cout << "--------------------------------------------------------\n";
    label_ulang:
    cout << "YtD > ";
    cin >> pilih;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if( pilih == '1' ){
        downloaOtomatis(link);
    } else if( pilih == '2' ){
        download360(link);
    } else if( pilih == '3' ){
        download480(link);
    } else if( pilih == '4' ){
        downloadManual(link);
    } else if( pilih == '5' ){
        cout << "New link: ";
        getline(cin, linkDownload);
        fromDownload = 0;
        menu(linkDownload);
    } else if( pilih == '6' ){
        cout << "Quiting from program...\n";
        return 0;
    } else {
        cout << warning;
        goto label_ulang;
    }


    return 0;
}
/* END FUNGSI DOWNLOAD VIDEO */


/* FUNGSI UTAMA */
int main(){
    if(system("cls")) system("clear");
    cout << "Masukkan link: ";
    getline(cin, linkDownload);
    menu( linkDownload );

    cout << "[*] Do you wanna write a feedback [y/n]?\n";
    cout << "YtD > ";
    char pilih;
    cin >> pilih;
    if( pilih == 'y' || pilih == 'Y' ){
        cout << endl;
        cout << "--------------------------------------------------------\n";
        cout << "[*] Contact me: ghelgameshra3347@gmail.com\n";
        cout << "[*] Thank you :)\n";
        cout << "--------------------------------------------------------\n";
    } else {
        cout << endl;
        cout << "--------------------------------------------------------\n";
        cout << "[*] Thank you :)\n";
        cout << "--------------------------------------------------------\n";
    }


    return 0;
}