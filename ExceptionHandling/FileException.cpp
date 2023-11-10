#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string filename;

    cout<<"Enter a  filename : "<<endl;
    cin>>filename;
    try{
        ifstream file(filename);

        if(!file.is_open()){
            throw ios_base::failure("File not found or could not be found");
        }
        string line;
        while(getline(file,line)){
            cout<<line<<endl;
        }
        file.close();
    }
    catch (const ios_base::failure& e ){
        cerr<<"Error Opening File"<<endl;
    }
    catch(const exception& e){
        cerr<<"Exception has been occured"<<endl;
    }
}