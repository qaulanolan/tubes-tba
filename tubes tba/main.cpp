#include <iostream>
#include <windows.h>
#include "spok.h"

using namespace std;

int main()
{
    cout<<endl;
    cout<< "        Tubes Teori Bahasa dan Automata        "<<endl;
    cout<< "|=============================================|"<<endl;
    cout<< "|         Qaulan Sadida(1301220280)           |"<<endl;
    cout<< "|         Delvia Mulia Putri(1301223100)      |"<<endl;
    cout<< "|         M.Alfath Kaffahmi(1301223173)       |"<<endl;
    cout<< "|=============================================|"<<endl<<endl;

    cout << "| SUBJEK |PREDIKAT     |OBJEK     |KETERANGAN |" << endl;
    cout << "|---------------------------------------------|" << endl;
    cout << "| Qaulan |Membaca      |Buku      |Dibioskop  |" << endl;
    cout << "| Vandika|Membantu     |Film      |Diperpus   |" << endl;
    cout << "| Alfath |Menonton     |Lagu      |Direstoran |" << endl;
    cout << "| Altaf  |Mendengarkan |Masakan   |Dirumah    |" << endl;
    cout << "| Simon  |Merasakan    |Teman     |Disekolah  |" << endl;
    cout << "-----------------------------------------------" << endl<< endl;
    cout << "Struktur kalimat yang dikenali: "<<" S   P   O   K"<< endl;
    cout << "\t\t\t\t S   P   O" << endl;
    cout << "\t\t\t\t S   P   K" << endl;
    cout << "\t\t\t\t S   P" << endl << endl;

    string kalimat;
    myStack S,kata1,kata2,kata3,kata4,kata5,spok1,spok2,spok3,spok4,spok5;
    address P,Q;
    mulai:

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);
    kalimat = kalimat + ' ';

    int z = kalimat.length();
    int y = 1;

    createStack(S);
    createStack(kata1);
    createStack(kata2);
    createStack(kata3);
    createStack(kata4);
    createStack(kata5);
    for (int x =0; x<z; x++){
        if (kalimat[x] != ' ' ){
            createNewElmt(kalimat[x],P);
            push(S,P);
        }
        else if (kalimat[x] == ' '){
            if (y == 1){
                while (!isEmpty(S)){
                    pop(S,P);
                    createNewElmt(info(P),Q);
                    push(kata1,Q);
                }
                y = y + 1;
            }
            else if (y == 2){
                while (!isEmpty(S)){
                    pop(S,P);
                    createNewElmt(info(P),Q);
                    push(kata2,Q);
                }
                y = y + 1;
            }
            else if (y == 3){
                while (!isEmpty(S)){
                    pop(S,P);
                    createNewElmt(info(P),Q);
                    push(kata3,Q);
                }
                y = y + 1;
            }
            else if (y == 4){
                while (!isEmpty(S)){
                    pop(S,P);
                    createNewElmt(info(P),Q);
                    push(kata4,Q);
                }
                y = y + 1;
            }
            else if (y == 5){
                while (!isEmpty(S)){
                    pop(S,P);
                    createNewElmt(info(P),Q);
                    push(kata5,Q);
                }
                y = y + 1;
            }
        }
    }

    bool cek = cekKalimat(kata1,kata2,kata3,kata4,kata5);
    if (cek){
        cout << endl << "Hasil : Kalimat Valid!" << endl;
        int z = kalimat.length();
        int y = 1;

        createStack(S);
        createStack(spok1);
        createStack(spok2);
        createStack(spok3);
        createStack(spok4);
        createStack(spok5);
        for (int x =0; x<z; x++){
            if (kalimat[x] != ' ' ){
                createNewElmt(kalimat[x],P);
                push(S,P);
            }
            else if (kalimat[x] == ' '){
                if (y == 1){
                    while (!isEmpty(S)){
                        pop(S,P);
                        createNewElmt(info(P),Q);
                        push(spok1,Q);
                    }
                    y = y + 1;
                }
                else if (y == 2){
                    while (!isEmpty(S)){
                        pop(S,P);
                        createNewElmt(info(P),Q);
                        push(spok2,Q);
                    }
                    y = y + 1;
                }
                else if (y == 3){
                    while (!isEmpty(S)){
                        pop(S,P);
                        createNewElmt(info(P),Q);
                        push(spok3,Q);
                    }
                    y = y + 1;
                }
                else if (y == 4){
                    while (!isEmpty(S)){
                        pop(S,P);
                        createNewElmt(info(P),Q);
                        push(spok4,Q);
                    }
                    y = y + 1;
                }
                else if (y == 5){
                    while (!isEmpty(S)){
                        pop(S,P);
                        createNewElmt(info(P),Q);
                        push(spok5,Q);
                    }
                    y = y + 1;
                }
            }
        }
        cout<<"Kalimat terdiri dari:"<<cekSPOK(spok1,spok2,spok3,spok4,spok5)<<endl;
            goto mulai;
        }
    else {
        cout << endl << "Hasil : Kalimat Tidak Valid!" << endl;
        goto mulai;
    }
}
