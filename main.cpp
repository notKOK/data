#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, const char** argv) {
    setlocale(LC_ALL, "ru");
    char path[] = "mydata.txt";
    fstream fout;
    fout.open(path, fstream::app);
    if(fout.is_open()){
        cout << "open" << endl;
    }
    else {
        cout << "closed" << endl;
    }

    fout.close();
    return 0;

}
