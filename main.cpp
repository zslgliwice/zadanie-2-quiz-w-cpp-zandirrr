#include <iostream>

using namespace std;

int main(){

int pkt = 0;
string odp;
    cout<<"Kto był pierwszym prezydentem Stanów Zjednoczonych?"<<endl;
    cout<<"a)George Washington"<<endl;
    cout<<"b)John Adams"<<endl;
    cout<<"c)Thomas Jefferson"<<endl;
    cout<<"d)James Madison"<<endl;
    cin >> odp;
        if(odp == "a"){
                cout<<"To jest poprawna odpowiedz"<<endl;
            pkt +=1;
        }
        else{
            cout<<"to nie jest dobra odpowiedz poprawna odpowiedza byla odpowiedz: a"<<endl;
        }

    cout<<"Najwieksze miasto swiata to?"<<endl;
    cout<<"a)Buenos Aires"<<endl;
    cout<<"b)Mexico City"<<endl;
    cout<<"c)Nowy Jork "<<endl;
    cout<<"d)Tokio"<<endl;
    cin >> odp;
        if(odp == "d"){
                cout<<"To jest poprawna odpowiedz"<<endl;
            pkt +=1;
        }
        else{
            cout<<"to nie jest dobra odpowiedz poprawna odpowiedza byla odpowiedz: d"<<endl;
        }
        cout<<"Najwyzszy szczyt swiata to?"<<endl;
    cout<<"a)Dhaulagiri"<<endl;
    cout<<"b)K2"<<endl;
    cout<<"c)Mount Everest"<<endl;
    cout<<"d)Makalu"<<endl;
    cin >> odp;
        if(odp == "c"){
                cout<<"To jest poprawna odpowiedz"<<endl;
            pkt +=1;
        }
        else{
            cout<<"to nie jest dobra odpowiedz poprawna odpowiedza byla odpowiedz: d"<<endl;
        }

    cout<<"najwiekszy kontynent to?"<<endl;
    cout<<"a)Europa"<<endl;
    cout<<"b)Azja"<<endl;
    cout<<"c)Afryka"<<endl;
    cout<<"d)Ameryka Połnocna"<<endl;
    cin >> odp;
        if(odp == "b"){
                cout<<"To jest dobra odpowiedz"<<endl;
            pkt +=1;
        }
        else{
            cout<<"to nie jest dobra odpowiedz poprawna odpowiedza byla odpowiedz: d"<<endl;
        }

    cout<<"Kto jest zalozycielem Amazona?"<<endl;
    cout<<"a)Jeff Bezos"<<endl;
    cout<<"b)Elon Musk"<<endl;
    cout<<"c)Bill Gates"<<endl;
    cout<<"d)Steve Wozniak"<<endl;
    cin >> odp;
        if(odp == "a"){
                cout<<"To jest dobra odpowiedz"<<endl;
            pkt +=1;
        }
        else{
            cout<<"to nie jest dobra odpowiedz poprawna odpowiedza byla odpowiedz: d"<<endl;
        }


cout<<"zebrales: "<<pkt<<" pkt"<<endl;

    return 0;
}
