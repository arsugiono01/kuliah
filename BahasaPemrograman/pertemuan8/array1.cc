#include <iostream>
using namespace std;
int main ()
{   

cout<<"\t===============================";
cout<<"\n\t== Contoh Array Satu Dimensi ==\n";
cout<<"\t===============================\n\n";
    int nilai[5]={70,72,71,82,90};
    int i;
    for (i=0;i<5;i++){
        cout <<"Cetak Nilai ke-"<<i+1<<" = "<<nilai[i]<<endl;
    }
    return 0;
}