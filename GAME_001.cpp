#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

void GameHud();
void CharacterMenu();
void CharacterStatsBarb();
void CharacterStatsSword();
void CharacterStatsRogue();
void CharacterStatsArch();
void WeaponMenu();
void WeaponStatsAxe();
void WeaponStatsSword();
void WeaponStatsDagger();
void WeaponStatsBow();
void ItemMenu();
void ItemStatsHealth();
void ItemStatsCloak();
void ItemStatsShield();
int CharacterContinue(string);
int WeaponContinue(string);
string fight1(string, string, string);


int main() {
    int Menu, Continue;
    int CharacterOption, WeaponOption;
    string Name;
    do {
        GameHud();
        cin >> Menu;
        switch (Menu) {
        case 1: {
            do {
                CharacterMenu();
                cin >> CharacterOption;
                if (CharacterOption == 1) {
                    CharacterStatsBarb();
                    Continue = CharacterContinue("Barbarian");
                }
                else if (CharacterOption == 2) {
                    CharacterStatsSword();
                    Continue = CharacterContinue("Knight");
                }
                else if (CharacterOption == 3) {
                    CharacterStatsRogue();
                    Continue = CharacterContinue("Rogue");
                }
                else if (CharacterOption == 4) {
                    CharacterStatsArch();
                    Continue = CharacterContinue("Archer");
                }
                else {
                    cout << "Error. Please Enter Options (1~4):";
                    cin >> CharacterOption;
                }
            } while (Continue != 1);
            do {
                WeaponMenu();
                cin >> WeaponOption;
                if (WeaponOption == 1) {
                    WeaponStatsAxe();
                    Continue = WeaponContinue("Axe");
                }
                else if (WeaponOption == 2) {
                    WeaponStatsSword();
                    Continue = WeaponContinue("Sword");
                }
                else if (WeaponOption == 3) {
                    WeaponStatsDagger();
                    Continue = WeaponContinue("Dagger");
                }
                else if (WeaponOption == 4) {
                    WeaponStatsBow();
                    Continue = WeaponContinue("Bow");
                }
                else {
                    cout << "Error. Please Enter Options (1~4):";
                    cin >> CharacterOption;
                }
            } while (Continue != 1);
            do {
                ItemMenu();
            } while (Continue != 1);
        }
              break;
        case 2: cout << "Quitting the Program\n" << "Thank You for playing, Run the program again to play again ;)";
            break;
        default: {
            cout << "Error. Please Enter Options (1~2):";
            cin >> Menu;
        }
        }

    } while (Menu != 2);
}

void GameHud() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 12);
    cout << "<><><><><><><><><><><><><><><><><><><><><><>" << endl;
    cout << "-----------------------------------------" << endl;
    cout << left << setw(5) << "Welcome To Game" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "<><><><><><><><><><><><><><><><><><><><><><>" << endl;
    cout << left << setw(4) << "Press 1 to Play" << endl;
    cout << endl;
    cout << left << setw(4) << "Press 2 to Quit" << endl;
}
void CharacterMenu() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 11);
    cout << "+++++++++++++++++" << endl;
    cout << "Pick a Character!" << endl;
    cout << "+++++++++++++++++" << endl;
    cout << "[1]. Barbarian" << endl;
    cout << "[2]. SwordsMan" << endl;
    cout << "[3]. Rogue" << endl;
    cout << "[4]. Archer" << endl;
}
void CharacterStatsBarb() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 3);
    cout << "***Barbarian***" << endl;
    cout << "[IIIIIIII  ] : Strength = 8" << endl;
    cout << "[II        ] : Speed = 2" << endl;
    cout << "[IIIIII    ] : Defense = 6" << endl;
    cout << "[IIIIIII   ] : Critikal Strike = 7" << endl;
    cout << "[II        ] : Dodge = 2" << endl;
    cout << "[<3<3<3<3<3<3] : Health = 30" << endl << endl;
    cout << "======================" << endl;
    cout << "1.Continue " << "2. Go Back" << endl;
    cout << "======================" << endl;
}
void CharacterStatsSword() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 9);
    cout << "***SwordsMan***" << endl;
    cout << "[IIIIII    ] : Strength = 6" << endl;
    cout << "[IIIII     ] : Speed = 5" << endl;
    cout << "[IIIIIIII  ] : Defense = 8" << endl;
    cout << "[IIII      ] : Critikal Strike = 4" << endl;
    cout << "[IIIII     ] : Dodge = 5" << endl;
    cout << "[<3<3<3<3<3] : Health = 25" << endl << endl;
    cout << "======================" << endl;
    cout << "1.Continue " << "2. Go Back" << endl;
    cout << "======================" << endl;
}
void CharacterStatsRogue() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 6);
    cout << "***Rogue***" << endl;
    cout << "[IIII      ] : Strength = 4" << endl;
    cout << "[IIIIII    ] : Speed = 6" << endl;
    cout << "[IIIII     ] : Defense = 5" << endl;
    cout << "[IIII      ] : Critikal Strike = 4" << endl;
    cout << "[IIIIIIIII ] : Dodge = 9" << endl;
    cout << "[<3<3<3<3<3] : Health = 25" << endl << endl;
    cout << "======================" << endl;
    cout << "1.Continue " << "2. Go Back" << endl;
    cout << "======================" << endl;
}
void CharacterStatsArch() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 4);
    cout << "***Archer***" << endl;
    cout << "[IIII      ] : Strength = 4" << endl;
    cout << "[IIIIIIIII ] : Speed = 9" << endl;
    cout << "[III       ] : Defense = 3" << endl;
    cout << "[IIIIIIIII ] : Critikal Strike = 9" << endl;
    cout << "[IIIIIIII  ] : Dodge = 8" << endl;
    cout << "[<3<3<3<3] : Health = 20" << endl << endl;
    cout << "======================" << endl;
    cout << "1.Continue " << "2. Go Back" << endl;
    cout << "======================" << endl;
}
int CharacterContinue(string Name) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 5);
    int Continue;
    cout << "Do You wish to continue as the " << Name << "?" << endl;
    cin >> Continue;
    return Continue;
}
void WeaponMenu() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 2);
    cout << "+++++++++++++++++" << endl;
    cout << " Pick a Weapon!" << endl;
    cout << "+++++++++++++++++" << endl;
    cout << "[1]. Axe" << endl;
    cout << "[2]. Sword" << endl;
    cout << "[3]. Dagger" << endl;
    cout << "[4]. Bow" << endl;
}
int WeaponContinue(string Name) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 5);
    int Continue;
    cout << "Do You wish to continue with the " << Name << "?" << endl;
    cin >> Continue;
    return Continue;
}
void WeaponStatsAxe() {
    cout << "*** Axe ***" << endl;
    cout << "15% more Critikal Strike Chance when paired with the Barbarian" << endl;
    cout << "Weapon Type(1 Swings): Heavy" << endl;
    cout << "Damage: 15" << endl;
    cout << "======================" << endl;
    cout << "1.Continue " << "2. Go Back" << endl;
    cout << "======================" << endl;
}
void WeaponStatsSword() {
    cout << "*** Sword ***" << endl;
    cout << "15% more Critikal Strike Chance when paired with the SwordsMan" << endl;
    cout << "Weapon Type(2 Swings): Medium" << endl;
    cout << "Heavy Damage: 10" << endl;
    cout << "Light Damage: 5" << endl;
    cout << "======================" << endl;
    cout << "1.Continue " << "2. Go Back" << endl;
    cout << "======================" << endl;
}
void WeaponStatsDagger() {
    cout << "*** Dagger ***" << endl;
    cout << "15% more Critikal Strike Chance when paired with the Rogue" << endl;
    cout << "Weapon Type(3 Swings): Light" << endl;
    cout << "Damage: 5" << endl;
    cout << "======================" << endl;
    cout << "1.Continue " << "2. Go Back" << endl;
    cout << "======================" << endl;

}
void WeaponStatsBow() {
    cout << "*** Bow ***" << endl;
    cout << "15% more Critikal Strike Chance when paired with the Archer" << endl;
    cout << "Weapon Type(2 Swings): Medium" << endl;
    cout << "Damage: 8" << endl;
    cout << "======================" << endl;
    cout << "1.Continue " << "2. Go Back" << endl;
    cout << "======================" << endl;

}
void ItemMenu() {
    cout << "Sorry, There is nothing available in the Main Menu yet !";
}
