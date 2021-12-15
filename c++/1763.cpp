#include <bits/stdc++.h>

using namespace std;

int main() {
    map<string, string> feliz;
    feliz["brasil"] =  "Feliz Natal!";
    feliz["alemanha"] = "Frohliche Weihnachten!";
    feliz["austria"] = "Frohe Weihnacht!";
    feliz["coreia"] = "Chuk Sung Tan!";
    feliz["espanha"] = "Feliz Navidad!";
    feliz["grecia"] = "Kala Christougena!";
    feliz["estados-unidos"] = "Merry Christmas!";
    feliz["inglaterra"] = "Merry Christmas!";
    feliz["australia"] = "Merry Christmas!";
    feliz["portugal"] = "Feliz Natal!";
    feliz["suecia"] = "God Jul!";
    feliz["turquia"] = "Mutlu Noeller";
    feliz["argentina"] = "Feliz Navidad!";
    feliz["chile"] = "Feliz Navidad!";
    feliz["mexico"] = "Feliz Navidad!";
    feliz["antardida"] = "Merry Christmas!";
    feliz["canada"] = "Merry Christmas!";
    feliz["irlanda"] = "Nollaig Shona Dhuit!";
    feliz["belgica"] = "Zalig Kerstfeest!";
    feliz["italia"] = "Buon Natale!";
    feliz["libia"] = "Buon Natale!";
    feliz["siria"] = "Milad Mubarak!";
    feliz["marrocos"] = "Milad Mubarak!";
    feliz["japao"] = "Merii Kurisumasu!";
    string pal;
    while (cin >> pal) {
        if (feliz.count(pal))
            cout << feliz[pal] << endl;
        else
            cout << "--- NOT FOUND ---" << endl;
    }
    return 0;
}