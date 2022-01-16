#include <iostream>
using namespace std;

class persegi_panjang {
  private:
    int hasil;

  public:
    void rumus(int s, int p) {
      hasil = s * p;
    }
    int manggil() {
      return hasil;
    }
};

int main() {
  persegi_panjang next;
  next.rumus(15, 3);
  cout << next.manggil()<<endl;
  return 0;
}