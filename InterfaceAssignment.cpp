#include <iostream>
#include <string>
using namespace std;

// Interface for Printer
class IPrinter {
public:
    virtual void print(string path) = 0; // Pure virtual function for printing
};

// Interface for Scanner
class IScanner {
public:
    virtual void scan(string path) = 0; // Pure virtual function for scanning
};

// Printer class implements IPrinter interface
class Printer : public IPrinter {
public:
    void print(string path) override {
        cout << "Printing ....." << path << endl;
    }
};

// Scanner class implements IScanner interface
class Scanner : public IScanner {
public:
    void scan(string path) override {
        cout << "Scanning ....." << path << endl;
    }
};

// PrintScanner class implements both IPrinter and IScanner interfaces
class PrintScanner : public IPrinter, public IScanner {
public:
    void print(string path) override {
        cout << "PrintScanner: Printing ....." << path << endl;
    }

    void scan(string path) override {
        cout << "PrintScanner: Scanning ....." << path << endl;
    }
};

// TaskManager class to manage execution of print and scan tasks
class TaskManager {
public:
    // Method to execute print task
    static void executePrintTask(IPrinter* printer, string documentPath) {
        printer->print(documentPath);
    }

    // Method to execute scan task
    static void executeScanTask(IScanner* scanner, string documentPath) {
        scanner->scan(documentPath);
    }
};

int main() {
    Printer printerObj;
    Scanner scannerObj;
    PrintScanner printScannerObj;

    // TaskManager executing print and scan tasks
    TaskManager::executePrintTask(&printerObj, "Test.doc");
    TaskManager::executeScanTask(&scannerObj, "MyImage.png");

    // PrintScanner can both print and scan
    TaskManager::executePrintTask(&printScannerObj, "NewDoc.doc");
    TaskManager::executeScanTask(&printScannerObj, "YourImage.png");

    return 0;
}
