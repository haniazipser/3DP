///HZ

#include <iostream>

using namespace std;
int n, licznik;
int main()
{

    cin>>n;
    if(n==1){
        cout<<"1";
        return 0;
    }
    licznik=2; /// 1 i n zawsze są dzielnikami
    for (int i=2; i<n; i++){ /// szukam dzielników liczby n od 2 do pierwiastka z n, ponieważ pierwiastek jest ostatnią liczbą, przez którą może dzielić się n;
        if(n%i==0){ /// sprawdzam, czy reszta z dzielenia jest równa 0
            licznik++; /// zwiększam licznik
        }
    }
    cout<<licznik;
   return 0;
}
