#include <iostream>
 
using namespace std;
 
class Komputer {
  public:
    string processor = "INTEL Core I7";
 
    string cekKomputer() {
      return "Ini berasal dari class Komputer";
    }
};
 
class Laptop: public Komputer {
  public:
    string merk = "HP";
 
    string cekLaptop() {
      return "Ini berasal dari class Laptop";
    }
};
 
int main()
{
  Laptop laptopAziz;
 
  cout << laptopAziz.processor << endl;
  cout << laptopAziz.merk << endl;
  cout << laptopAziz.cekKomputer() << endl;
  cout << laptopAziz.cekLaptop() << endl;
 
  return 0;
}