
/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-09-29 16:11:13
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Base class for file handling
class FileHandler
{
protected:
    string fileName;

public:
    FileHandler(string fName) : fileName(fName) {}

    void open()
    {
        cout << "Opening file: " << fileName << endl;
    }

    void close()
    {
        cout << "Closing file: " << fileName << endl;
    }

    virtual ~FileHandler() {}
};

// Derived class for handling text files
class TextFileHandler : public FileHandler
{
public:
    TextFileHandler(string fName) : FileHandler(fName) {}

    void write(string content)
    {
        ofstream outFile(fileName);
        if (outFile)
        {
            outFile << content << endl;
            cout << "Writing: " << content << endl;
        }
        else
        {
            cout << "Error opening file!" << endl;
        }
    }

    void read()
    {
        string line;
        ifstream inFile(fileName);
        if (inFile)
        {
            cout << "Reading from file:" << endl;
            while (getline(inFile, line))
            {
                cout << line << endl;
            }
        }
        else
        {
            cout << "Error opening file!" << endl;
        }
    }
};

int main()
{
    TextFileHandler file("example.txt");

    file.open();
    file.write("Hello, world!");
    file.read();
    file.close();

    return 0;
}
/*
  note: File hendeling er example e
  (#include <iostream>)
    (#include <fstream>)
    ai 2 ta use korle vhalo hobe
*/

/* Thank you */