#include<iostream>


using namespace std;
class Ucgen {

public:

	Ucgen();

	void duzUcgen(int kenar) {

		int yildiz = 1,bosluk= ((kenar - 1) / 2),giris= ((kenar + 1) / 2);

		for (int i = 0;i < giris; ++i) {
			for (int j = 0;j < bosluk ;j++) {
				cout << " ";
			}
			for (int k = 0;k < yildiz; k++) {
				cout << "*";
			}
			cout << "\n";
			bosluk--;
			yildiz += 2;
		}

	}

	void tersUcgen(int kenar) {
		int yildiz = kenar, giris = ((kenar + 1) / 2), bosluk = 0;

		while (giris > 0) {
			int i = 0, j = 0;

			while ( i  < bosluk) {
				cout << " ";
				i++;
			}
			while (  j  < yildiz) {
				cout << "*";
				j++;
			}
			cout << "\n";
			bosluk++;
			yildiz -= 2;
			giris--;

		}
		

	}

	void elmas(int kenar) {
		duzUcgen(kenar);
		tersUcgen(kenar);
	}






};


int main() {

    Ucgen ucgen;
    int tercih,boyut,i = 0;

    cout << "Lutfen Duz Ucgen:1, Ters Ucgen:2, Elmas:3, Cikis:0\n ";
    cin >> tercih;
    
    while (i < 3) {
        cout << "Lutfen boyut giriniz:\n";
        cin >> boyut;

        if (boyut >= 3 && boyut <= 15 && boyut % 2 == 1) {
            switch (tercih) {

            case 0:
                exit(-1);
            case 1:
                ucgen.duzUcgen(boyut);
				exit(-1);
                break;

            case 2:
                ucgen.tersUcgen(boyut);
				exit(-1);
                break;
            case 3:
                ucgen.elmas(boyut);
				exit(-1);
                break;
            }
        }
        else
            cout << "Gecersiz boyut!!\n" ;
        i++;
    }

    

return 0;
}

Ucgen::Ucgen()
{
}
