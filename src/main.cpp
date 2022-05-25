// Tutorial : https://youtu.be/FcYs8wtzjVE?t=5880
// Current time: 1:38.44
#include "include/list.h"
#include "include/database.h"

int main(int arg_count, char *args[]) {
    List simpleList;
    Database data;
    
    if(arg_count > 1) {
        simpleList.name = string(args[1]);
        data.read();
        simpleList.print_menu();
        //data.write(simpleList.list);
        //data.read();
    }
    else{
        cout << "Username not supplied.. exeting the programm" << endl;
    }

    
    return 0;
}