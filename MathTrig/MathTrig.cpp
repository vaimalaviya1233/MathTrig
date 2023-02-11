// 
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    string x, y, r;
    int operation = 0;

    //std::cout << "Starting !!!\n" ;
    //std::cout << "enter adjecent line :";
    //cin >> x;
    //std::cout << "\n";
    //std::cout << "enter opposite/y line :";
    //cin >> y; std::cout << "\n";
    //std::cout << "enter hypothesis :";
    //cin >> r; std::cout << "\n";
    x = "sqrt(91)";
    y = "3";
    r = "10";

    std::cout << "1) sin\n";
    std::cout << "2) cos\n";
    std::cout << "3) tan\n";
    std::cout << "4) sec\n";
    std::cout << "5) csc\n";
    std::cout << "6) cot\n";
    std::cout << "enter number you wanna calc :";
    cin >> operation;
    cout << endl;
    if (operation == 1) {
        std::cout << y << " divided by " << r << endl << endl;
    }
    else if (operation == 2) {
        std::cout << x << " divided by " << r << endl << endl;
    }
    else if (operation == 3) {
        std::cout << y << " divided by " << x << endl << endl;
    }
    else if (operation == 5) {
        std::cout << r << " divided by " << y << endl << endl;
    }
    else if (operation == 4) {
        std::cout << r << " divided by " << x << endl << endl;
    }
    else if (operation == 6) {
        std::cout << x << " divided by " << y << endl << endl;
    }
    else {
        cout << "Nothing to say repeating \n " << endl;
        main();
    }
    main();

    cout << "Ended !!!\n";
}

void trigcal() {
    string x, y, r;
    int operation = 0;

    //std::cout << "Starting !!!\n" ;
    //std::cout << "enter adjecent line :";
    //cin >> x;
    //std::cout << "\n";
    //std::cout << "enter opposite/y line :";
    //cin >> y; std::cout << "\n";
    //std::cout << "enter hypothesis :";
    //cin >> r; std::cout << "\n";
    x = "sqrt(91)";
    y = "3";
    r = "10";

    std::cout << "1) sin\n";
    std::cout << "2) cos\n";
    std::cout << "3) tan\n";
    std::cout << "4) csc\n";
    std::cout << "5) sec\n";
    std::cout << "6) cot\n";
    std::cout << "enter number you wanna calc\n";
    cin >> operation;
    cout << endl;
    if (operation == 1) {
        std::cout << y << " divided by " << r << endl;
    }
    else if (operation == 2) {
        std::cout << x << " divided by " << r << endl;
    }
    else if (operation == 3) {
        std::cout << y << " divided by " << x << endl;
    }
    else if (operation == 4) {
        std::cout << r << " divided by " << y << endl;
    }
    else if (operation == 5) {
        std::cout << r << " divided by " << x << endl;
    }
    else if (operation == 6) {
        std::cout << x << " divided by " << y << endl;
    }
    else {
        cout << "Nothing to say repeating \n ";
        main();
    }


    cout << "Ended !!!\n";
}
