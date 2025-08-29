#include <iostream>

using namespace std;

class Program
{
    private:
        int nCommons, nRares, nLegendaries;
        char showMenu();
        void openBox();
        void showInfo();

    public:
        Program();
        ~Program();

        void initialize();
        void run();
        void finish();
};