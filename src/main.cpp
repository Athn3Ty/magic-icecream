// Tutorial : https://youtu.be/FcYs8wtzjVE?t=5880
// Current time: 1:38.44
#include "include/list.h"

int main(int arg_count, char *args[]) {
    if(arg_count > 1) {
        List simpleList;
        simpleList.name = string(args[1]);
        simpleList.print_menu();
    }
    else{
        cout << "Username not supplied.. exeting the programm" << endl;
    }

    return 0;
}