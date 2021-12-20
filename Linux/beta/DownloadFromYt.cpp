#include <iostream>
#include <limits>
using namespace std;
// this program just made for educational purpose only

int main();
int downloadFormat( string link ){
    char pilih;
    system("clear");
    for( int i = 0; pilih != '2' && pilih != '2' && pilih != '3'; i++ ){
        cout << "==================================================\n";
        cout << "\t\tPilih Qualitas Video\t\t\n";
        cout << "==================================================\n";
        cout << "[1] 360p/mp4\n";
        cout << "[2] 480p/mp4\n";
        cout << "[3] 720p/mp4\n";
        cout << "==================================================\n";
        cout << ">> ";
        cin >> pilih;
        if( pilih == '1' ){
            system(("youtube-dl -f 'best[height<=360]' -o 'Downloads/%(title)s by %(uploader)s.%(ext)s' " + link).c_str());
        } else if( pilih == '2' ){
            system(("youtube-dl -f 'best[height<=480]' -o 'Downloads/%(title)s by %(uploader)s.%(ext)s' " + link).c_str());
        } else if( pilih == '3' ){
            system(("youtube-dl -f 'bestvideo' -o 'Downloads/%(title)s by %(uploader)s.%(ext)s' " + link).c_str());
        } else {
            system("clear");
            cout << "Warning: Invalid input !\n";
        }
    }
    return 0;
}

int main(){
    string link, formatCode;
    char pilih;

    system("clear");
    cout << "Masukkan link: ";
    getline(cin, link);

    // https://www.youtube.com/watch?v=766qmHTc2ro --> test1
    // https://www.youtube.com/watch?v=HmPD9HZheBk --> test2

    for( int i = 0; pilih != '1' && pilih != '2' && pilih != '3'; i++ ){
        cout << "==================================================\n";
        cout << "\t\tYOUTUBE VIDEO DOWNLOADER\t\t\n";
        cout << "\t\tMenu Download\t\t\n";
        cout << "\t\tby @ghelgameshra\t\t\n";
        cout << "==================================================\n";
        cout << "[1] Download otomatis (720p/ highest quality)\n";
        cout << "[2] Download pilih format\n";
        cout << "[3] Download manual (tidak direkomendasikan untuk pemula)\n";
        cout << ">> ";
        cin >> pilih;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if( pilih == '1' ){
            system(("youtube-dl -f bestvideo+bestaudio -o 'Downloads/%(title)s by %(uploader)s.%(ext)s' "+link).c_str());
        } else if( pilih == '2' ){
            downloadFormat( link );
        } else if( pilih == '3' ){
            cout << "Link download: " << link << endl;
            system(("youtube-dl -F "+link).c_str());
            cout << "Format Code: ";
            getline(cin, formatCode);
            system(("youtube-dl -f "+ formatCode + " " + link).c_str());
        } else {
            system("clear");
            cout << "Warning: Invalid input !\n";
        }
    }


    return 0;
}