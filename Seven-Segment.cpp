#include <iostream>
#include <vector>
using namespace std;
// Warna teks
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"

void greeting(){

    cout << RED << "=================W E L C O M E=================" << RESET << endl;
    cout << " Nama : Muhammad Zarrar Al Faruq Hasmin Tamsah" << endl;
    cout << " NIM  : D121231110" <<  endl;
    cout << " Teknik Informatika" << endl;
    cout << " Kelas B" << RESET << endl;
    cout << endl;
    cout << YELLOW <<" *Masukkan desimal 0-9, selain dari pada itu, \n  program keluar.*"<< RESET << endl;
    cout << RED << "=================W E L C O M E=================" << RESET << endl;
}
vector <int> Desimal_ke_Sevent_Segment (int n){
    vector <int> segment;
    switch(n){
        case 0:
            segment = {1,1,1,0,1,1,1};
            break;
        case 1:
            segment = {0,0,1,0,0,1,0};
            break;
        case 2:
            segment = {1,0,1,1,1,0,1};
            break;
        case 3:
            segment = {1,0,1,1,0,1,1};
            break;
        case 4:
            segment = {0,1,1,1,0,1,0};
            break;
        case 5:
            segment = {1,1,0,1,0,1,1};
            break;
        case 6:
            segment = {1,1,0,1,1,1,1};
            break;
        case 7:
            segment = {1,0,1,0,0,1,0};
            break;
        case 8:
            segment = {1,1,1,1,1,1,1};
            break;
        case 9:
            segment = {1,1,1,1,0,1,1};
            break;
    }
    return segment;
}
void Display_Seven_Segment(vector<int> segment) {
    string side = " ===\n";
    string up = "|   ";
    for(int i = 0; i < segment.size(); i++){
        if(i == 0 || i == 3 || i == 6){ 
            if(segment[i] == 1){
                cout<< RED << side << RESET; 
            }else{
                cout<< "\n"; 
            }
        }else{
            if(segment[i] == 1){
                cout<< RED << up << RESET;
            }else{
                cout<< "    ";
            }
            if(i == 2 || i == 5){
                cout<< "\n";
            }
        }
    }
}
void Display_Tabel(vector<int> segment) {
    cout << RED << "=================Truth Table=================" << RESET << endl;
    cout << "        | A | B | C | D | E | F | G |        " <<  endl;
    cout << "        | " <<segment[0] << " | " << segment[2] << " | " <<  segment[5] <<" | "<< segment[6] << " | " << segment[4] << " | " << segment[1] << " | " << segment [3] << " | " << RESET <<endl;
    cout << RED << "=================Truth Table=================" <<  endl;
}
int main(){
    greeting();
    bool exit = true;
    cout << "Input: ";
    int N;
    while(exit == true){
        
        cin >> N;
        if(N > 9 || N < 0){
            cout << YELLOW << "Mengakhiri" << RESET;
            exit = false;
        }
        else{
            vector <int> segment = Desimal_ke_Sevent_Segment(N);
            cout << YELLOW <<"Tampilan Seven Segment dari " << N << RESET << endl;
            Display_Seven_Segment(segment);
            Display_Tabel(segment);

        }

    }
    return 0;
}