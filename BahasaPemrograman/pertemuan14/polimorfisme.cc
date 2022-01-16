#include <iostream>
using namespace std;

class PrintData {
  public:
    PrintData() {}
    void printOutput() { 
      cout << "Perkenalkan Biodata Saya " << endl;
    }
    void printOutput(string data) { 
      cout << "Nama saya "<< data << endl;
    }

    void printOutput(int data) { // Fungsi Overloading
      cout << "Umur Saya " << data << endl;
    }         
    ~PrintData() {}
};

int main() {
  PrintData print;
  
  print.printOutput();
  print.printOutput("Aziz Rizky Sugiono");
  print.printOutput(20);
  return 0;
}