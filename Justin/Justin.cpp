#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void printMountainStats(string filename){
    ifstream fin;
    fin.open(filename);
    string mountname[100];
    string number[100];
    int currentIndex; // the index/length of the mountName and number Table
    string linenum; 
    string tallest;
    string tallestm;
    string shortest;
    string shortestm;
    int counter = 0;
    if(fin.fail()){
        cout << "Could not open file." << endl;
    }else{
        while(getline(fin, linenum)){
            for(int i = 0; i < linenum.length(); i++){
                if(linenum[i] == '|'){
                    mountname[currentIndex] = linenum.substr(0, i);
                    number[currentIndex] = linenum.substr(i+1, linenum.length());
                    currentIndex++;
                    break;
                }
            }
            if(linenum != ""){
                counter++;
            }
        }

        shortest = number[0];
        tallest = number[0];
        tallestm = mountname[0];
        shortestm = mountname[0];
        for(int i = 1; i < counter; i++){
            if(tallest < number[i]){
                tallest = number[i];
                tallestm = mountname[i];
            }
            if(shortest > number[i]){
                shortest = number[i];
                shortestm = mountname[i];
            }
        }
        cout << "Number of lines read: " << counter << "." << endl;
        cout << "Tallest mountain: " << tallestm << " at " << tallest << " feet. " << endl;
        cout << "Shortest mountain: " << shortestm << " at " << shortest << " feet. " << endl;

    }
}

int main(){
    string filename = "mountain_data.txt";
    printMountainStats(filename);
}