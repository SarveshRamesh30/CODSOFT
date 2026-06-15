#include <iostream>
using namespace std;
int main() {
    char a=' ', b=' ', c=' ',
         d=' ', e=' ', f=' ',
         g=' ', h=' ', i=' ';
    int choice;
    char player = 'X';
    bool win = false; 

    for(int j=0;j<9;j++) {
        cout << "\n";
        cout << a << " | " << b << " | " << c << endl;
        cout << "---------" << endl;
        cout << d << " | " << e << " | " << f << endl;
        cout << "---------" << endl;
        cout << g << " | " << h << " | " << i << endl;

        cout << "\nPlayer " << player << " enter position (1-9): ";
        cin >> choice;

        if(choice == 1 && a == ' ') a = player;
        else if(choice == 2 && b == ' ') b = player;
        else if(choice == 3 && c == ' ') c = player;
        else if(choice == 4 && d == ' ') d = player;
        else if(choice == 5 && e == ' ') e = player;
        else if(choice == 6 && f == ' ') f = player;
        else if(choice == 7 && g == ' ') g = player;
        else if(choice == 8 && h == ' ') h = player;
        else if(choice == 9 && i == ' ') i = player;
        else {
            cout << "Invalid move! Try again.\n";
            j--;
            continue;
        }
        if((a==player && b==player && c==player) ||
           (d==player && e==player && f==player) ||
           (g==player && h==player && i==player) ||
           (a==player && d==player && g==player) ||
           (b==player && e==player && h==player) ||
           (c==player && f==player && i==player) ||
           (a==player && e==player && i==player) ||
           (c==player && e==player && g==player)) {

            cout << "\nPlayer " << player << " wins!\n";
            win = true;
            break;
        }
        player=(player == 'X') ? 'O' : 'X';
    }
    if(!win) {
        cout << "\nIt's a draw!\n";
    }

    return 0;
}

