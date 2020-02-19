#include<iostream> //for input-output operation


using namespace std; // for standart namespace
class Ucgen { // Ucgen class is created for drawing triangle shape to ensure users for requested size.

public:

	Ucgen(); //constructor

	void duzUcgen(int kenar) { //this member func. is created for the straight type triangle.

		int yildiz = 1,bosluk= ((kenar - 1) / 2),giris= ((kenar + 1) / 2); //variables 

		for (int i = 0;i < giris; ++i) { //loop for keeping the row number.
			for (int j = 0;j < bosluk ;j++) { // space character will be publish.
				cout << " ";
			}
			for (int k = 0;k < yildiz; k++) { // star will be publish.
				cout << "*";
			}
			cout << "\n"; // new line after space and star publish.
			bosluk--;  // space decrease one by one line.
			yildiz += 2; // stars increased two by one line.
		}

	}

	void tersUcgen(int kenar) { // this member func. is for the reverse triangle.
		int yildiz = kenar, giris = ((kenar + 1) / 2), bosluk = 0; // variables

		while (giris > 0) { // used while loop for a try. This is for the row sequence.
			int i = 0, j = 0;

			while ( i  < bosluk) { // for the space character.
				cout << " ";
				i++;
			} 
			while (  j  < yildiz) { // for the stars
				cout << "*";
				j++;
			}
			cout << "\n";
			bosluk++; // space increase one by one line.
			yildiz -= 2; // stars decreased two by one line.
			giris--; // keeping the number of line.

		}
		

	}

	void elmas(int kenar) {// this member func. is for publishing diamond shape. Users will define the size of it.
		duzUcgen(kenar); // firstly, i used straingt triangle mem.func. to publish upper side of diamond.
		tersUcgen(kenar);//Finally, reverse triangle for the down side.
	}






};


int main() {

    Ucgen ucgen; // created one object.
    int tercih,boyut,i = 0; // variables

    cout << "Lutfen Duz Ucgen:1, Ters Ucgen:2, Elmas:3, Cikis:0\n "; // menu shows the types of the shapes to publish or exit without publishing.
    cin >> tercih; // chosen option.
    
    while (i < 3) { // Give 3 try chances to publish.
        cout << "Lutfen boyut giriniz:\n"; // request the size
        cin >> boyut; // input for the size

        if (boyut >= 3 && boyut <= 15 && boyut % 2 == 1) {// size must be between 3<= size <=15
            switch (tercih) {// switch-case for the options.

            case 0:
                exit(-1); // O for the exit.
            case 1:
                ucgen.duzUcgen(boyut); // 1 for the straight shape triangle
				exit(-1);// exit after drawing.
                break;

            case 2:
                ucgen.tersUcgen(boyut);// 2 for the reverse shape triangle
				exit(-1); // exit after drawing
                break;
            case 3:
                ucgen.elmas(boyut); // 3 for the diamond shape
				exit(-1); // exit after drawing
                break;
            }
        }
        else
            cout << "Gecersiz boyut!!\n" ; // if the size isn't suitable.
        i++;// chances are .
    }

    

return 0;
}

Ucgen::Ucgen() // created one default constructor.
{
}
