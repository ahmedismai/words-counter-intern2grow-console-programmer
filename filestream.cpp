#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    ifstream inputFile;
    inputFile.open ("test.txt");

    if(inputFile.is_open()) {
        int WordCount = 0;
        string line;
        int i, CharCount = 0;
        char str;

        while (getline(inputFile,line))
        {
            stringstream SS(line);
            string word;
            while(SS >> word)
            {
                WordCount++;
            }
        }
        
        inputFile.close();  
        cout << "Number Of Words: " << WordCount << endl;
    }
    else {
        cout << "Failed to open the file." << endl;
    }

    inputFile.open("test.txt");

    string Line;
    int CharCount = 0;

    if(inputFile.is_open()){
        while(getline(inputFile,Line))
        {
            int numOfChars = Line.length();
            for (int n = 0; n < Line.length() ; n++)
            { 
                if (Line.at(n) == ' ')
                {
                    numOfChars--;
                }
            }
            CharCount = numOfChars + CharCount;
        }  
        inputFile.close();
        cout<< "Number Of Chars: " << CharCount << endl;  
    }
    else{
        cout << "Failed to open the file." << endl;
    }

    inputFile.open("test.txt");

    string Lin;
    int sentences=0;

    if(inputFile.is_open()){
        while(getline(inputFile,Lin))
        {
            int numOfChars= Lin.length();
            
            for (int n = 0; n < Lin.length() ; n++)
            { 
                if (Lin.at(n) == '.'|| Lin.at(n) == '?' || Lin.at(n) == '!')
                {
                    sentences++;
                }
            }    
        }  
        inputFile.close();
        cout<< "Number Of Sentences: " << sentences << endl;  
    }
    else{
        cout << "Failed to open the file." << endl;
    }    
}
