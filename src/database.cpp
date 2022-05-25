#include "include/database.h"

void Database::write(vector<string> list){

    ofstream db;
    db.open("db/lists.sl");
         if( db.is_open() ){
            for( int list_index=0; list_index < (int)list.size(); list_index++){
                db << list[list_index] << "\n";
    }
         }
        else {
            cout << "Cannot open file for writing.\n";
        }
    
    
    db.close();

}

vector<vector<string>>Database::read(){
    string line;
    ifstream db;

    vector<string> userList;
    db.open("db/lists.sl");

    if ( db.is_open()) {
        while ( getline(db,line,'\n')){
            if( line.front() == '#') {
                cout << "Found a Hashtag:" << line << "\n";
                line.erase(line.begin());
                userList.push_back(line);
            }
            else if(line.front() == '%'){
                cout << "Found a Percentage" << line << "\n";
                mainList.push_back(userList);
                userList.clear();
            }
            else{
                cout << "Found an Item" << line << "\n";
                userList.push_back(line);
            }
            
        }
    }
    else {
        cout << "Cannnot open file for reading.\n";
    }

    db.close();

return mainList;

}