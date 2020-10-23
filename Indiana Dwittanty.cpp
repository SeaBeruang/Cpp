//INDIANA DWITANTY
//001201700063
#include<iostream> 
using namespace std;

// Parent Class
class Induk {
   public:
      void setLebar(int l) {
         Lebar = l;
      }
      void setTinggi(int t) {
         Tinggi = t;
      }
      void setPanjang(int p) {
      	 Panjang = p;
	  }
      
   protected:
      int Lebar;
      int Tinggi;
      int Panjang;
};

class BuatKolam {
   public:
      int ongkos(int luas) {
         return luas * 5000;
      }
};

// Child Class
class Hitungluas: public Induk, public BuatKolam {
   public:
      int ukurluas() {
         return (Panjang * Lebar * Tinggi); 
      }
};


void kolampersegi() 
{
   Hitungluas bangun;
   bangun.setLebar(5);
   bangun.setTinggi(7);
   bangun.setPanjang(8);

	int luas;
    luas = bangun.ukurluas();
   
   cout << "Total volume kolam: " << bangun.ukurluas() << endl;
   cout << "Total biaya untuk mengisi air : Rp." << bangun.ongkos(luas) << endl;
}


int main(){
 
   kolampersegi();

   return 0;
}
