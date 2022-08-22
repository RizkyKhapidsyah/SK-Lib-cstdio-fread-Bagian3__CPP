#pragma warning(disable:4996)

#include <iostream>
#include <cstdio>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    FILE* fp;
    char buffer[100];

    fp = fopen("data.txt", "rb");
    
    while (!feof(fp)) {
        fread(buffer, sizeof(buffer), 1, fp);
        cout << buffer;
    }

    _getch();
    return 0;
}