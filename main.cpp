#include <iostream>
using namespace std;

int main() {
    int n,i;
    cout<<"quantiatleti ci sono in squadra?"<<endl;
    cin>>n;
    string nomi[n],nazionale[n];
    float tempi[n];
     for(i=0; i<=n-1) {
        cout<<"scrivi nome atleta"<<endl;
        cin>>nomi[i];
        cout<<"scrivi la nazionale a cui appartiene"<<endl;
        cin>>nazionale[i];
        cout<<"inserisci il tempo dell'atleta"<<endl;
        cin>>tempi[i];
     } 
     float mintempo,maxtempo,mediatempi,sommatempi;
     mintempo=tempi[0];
     maxtempo=tempi[0];
     sommatempi=0;
      for (I=0; i<=n-1; i++) {
         if(tempi[i]<mintempo) {
            mintempo=tempi[i];
            sommatempi=sommatempi+tempi[i];
            mediatempi=sommatempi/n;
               }else{ 
                maxtempo=tempi[i];
                sommatempi=sommatempi+tempi[i];
                mediatempi=sommatempi/n;
         } 
         cout<<"Tempo minimo:"<<mintempo<<"tempo massimo:"<<maxtempo<<"media tempi:"<<mediatempi<<endl;
      }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
