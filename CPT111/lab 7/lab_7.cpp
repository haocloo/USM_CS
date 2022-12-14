// count number of words and sentences in a file in C++
#include <iostream>
#include <fstream>
#include <string>  //to use getline() function
#include <iomanip>
using namespace std;

int main(){
    //Question 1 : write to file if x exist and if exist, print the odd lines
    
    // Open a file for reading and writing
    /* 
    use trunc for fstream to create file if x exists when using (ios::in | ios::out) together
    cus fstream x checking if file exists and x create new file if doesnt exist
    
    ios::trunc while open file and clear content
    */ 
    fstream file("Q1.txt", ios::in | ios::out | ios::trunc);
    // cannot use !file, because file alrdy exists and can open
    if(file.is_open()){
        file << "Hello world1" << endl;
        file << "Hello world2" << endl;
        file << "Hello world3" << endl;

        //move cursor to the beginning of the file
        file.seekg(0);       //remember it's file.seekg()

        string lines;
        int num = 1;
        while(getline(file, lines)){
            if (num % 2 != 0){
                cout << num << " : " << lines << endl;
            }
            num++;
        }
    }

    file.close();
    return 0;

    // Question 2
    string filename;
    cout << "Enter name of file : ";
    cin >> filename;
    // cin.ignore();      // need to clear buffer here
    //filename is Q2.txt

    fstream file(filename, ios::out | ios::in | ios::trunc);
    int i = 0;
    while(i < 150){
        file  << i << endl;
        i++;
    }

    file.seekg(0);

    int sentence;
    int lines = 1;
    string input;
    while(file >> sentence){
        if(lines % 24 != 0){
            cout << sentence << endl;
        }
        else{
            cout << sentence << endl;      //remember to print next number
            // cout << "Press any key to continue...";
            system("pause");       //press any key to continue & it will default cout << press any key to continue
            // cin.get(); 
            // need to clear buffer whenever need ENTER key to continue
            // need to clear buffer outside buffer (same for cin.getline)
        }
        lines++;
    }
    file.close();
    
    // Question 3
    fstream joke("joke.txt", ios::in);
    fstream punchline("punchline.txt", ios::in);

    string line;
    if(joke){
        while(getline(joke,line)){
            cout << line << endl;
        }
    }
    int linecounter =1;

    //the last line will be stored in line
    while(getline(punchline,line)){
    }

    cout << line << endl;
    joke.close();
    punchline.close();
    return 0;

    // Question 4
    fstream file("Q4.txt",ios::in | ios::out);
    int sentence = 0;
    int words = 0;
    /* doesnt count blank line with no words as 1 word*/
    // string word;
    while (file >> word)
    {
        words++;

        if (word[word.length() - 1] == '.')  //last character in string
            sentence++;
    }
      
    /* Correct version : counts blank line with no words as 1 word*/
    char ch;
    while (file.get(ch)){
        if(ch == ' ' || ch == '\n')
                words++;
        else if(ch == '.')
                sentence++;
    }
    cout << "Number of words: " << words << endl;
    cout << "Number of sentences: " << sentence << endl;
    return 0;

    // Question 5
    fstream file("punchline.txt", ios::in);
    string line;
    int i = 1, limit = 1;
    while(getline(file,line)){
        if (limit != 24){
            cout << i << ":" << line << endl;
            limit++;
        }
        else{
            cout << "Press any key to continue...";
            getline(cin, line);  //note it's cin
            i = 1;               //reduce time complexity?
        }
        i++;
    }
    file.close();

    // Question 6
    string filename;
    cout << "Enter filename : ";
    cin >> filename;
    // //punchline.txt

    string word;
    int count = 0, length;
    fstream file(filename.c_str(), ios::in);
    if(file){
        while(file >> word){
            length = word.length();
            if(length >= 10){
                cout << "Length : " << length << ", Sentence : " << word << endl;
                count++;
            }
        }
    }
    else{
        cout << "File not found" << endl;
    }
    cout << "Total number of words printed : " << count;
    file.close();

    // Question 7
    // use ASCII code to encrypt file
    fstream secret("secret.txt", ios::in);
    ofstream encrypted("encrypted.txt", ios::out);
    
    char ch;
    while(secret.get(ch)){
        encrypted << char(ch+10);  //must use char() so that can decrypt
    }

    secret.close();
    encrypted.close();
    return 0;

    //Question 8
    fstream encrypted("encrypted.txt", ios::in);
    fstream decrypted("decrypted.txt", ios::out);
    char ch;
    while(encrypted.get(ch)){
        decrypted << char(ch-10);
    }
    encrypted.close();
    decrypted.close();
    return 0;

    //Question 9bcf
    ifstream inFile;
    ofstream outFile;
    inFile.open("inData.txt");
    outFile.open("outData.txt");
    string line;
    if(inFile){
        while(getline(inFile, line)){
            outFile << line << endl;   //remember endl cus using getline
        }
    }
    else{
        cout << "File not found" << endl;
    }
    inFile.close();
    outFile.close();
    return 0;

    //Questoin 9def
    ifstream inFile("inData.txt");
    ifstream inFile2("inData.txt");    //read same file twice cus content's 1st line is string, other lines are double
    ofstream outFile("outData.txt");   //ofstream is output

    int word = 1;
    string name = "",department, current;
    double newcurrent, monthlySalary, monthlyBonus, tax, paycheck, 
    distance, time, speed, avgSpeed, totalCups, costPerCup, sales;

    if(inFile){
        while(inFile >> current){     // imagine cin >>, alert arrow direction
            if(word == 1){
                name = current;
            }
            else if(word == 2){
                name+= " " + current;   //concatenate string
            }
            else if(word == 3){
                monthlySalary = newcurrent;
            }
            else{
                break;
                word++;        //so that next loop will start with 4th word
            }
            word++;
        }
    }
        
    if(inFile2){
        getline(inFile2, current);      //to skip first line
        while(inFile2 >> newcurrent){
            if(word == 4){  
                monthlySalary = newcurrent;
            }
            else if(word == 5){
                monthlyBonus = newcurrent;
            }
            else if(word == 6){
                tax = newcurrent;
            }
            else if(word == 7){
                distance = newcurrent;
            }
            else if(word == 8){
                time = newcurrent;
            }
            else if(word == 9){
                totalCups = newcurrent;
            }
            else if(word == 10){
                costPerCup = newcurrent;
            }
            else{
                break;
            }
        word++;
        }
    }

    inFile.close();
    inFile2.close();

    paycheck = monthlySalary*(1+monthlyBonus/100)*(1-tax/100);
    speed = distance/time;
    sales = totalCups*costPerCup;

    outFile << "Name: " << name << ", Department: " << department << endl;
    outFile << setprecision(2) << fixed;
    outFile << "Monthly Gross Salary: $" << monthlySalary << ", Monthly Bonus: " << monthlyBonus << "%," << endl;
    outFile << "Taxes: " << tax << "%" << endl;
    outFile << "Paycheck: $" << paycheck << endl;
    outFile << "Distance Traveled: " << distance << " miles, Traveling Time: " << time << endl << "hours" << endl;
    outFile << "Average Speed: " << speed << " miles per hour" << endl;
    outFile << "Number of Coffee Cups Sold: " << totalCups << ", Cost: $" << costPerCup << endl;
    outFile << "Sales Amount = $" << sales << endl;

    outFile.close();
    return 0;

    //Question 10
    fstream file("Q10.txt", ios::in);
    int current,price, word = 1;
    string line;         //remember to declare variable for input
    getline(file, line);
    cout << "numberOfTicketsSold";
    cout << "\t" << "totalSale" << endl;      // 1 tab enough
    while(file >> current){
        if(word%2 == 0){
            cout << current;
            cout << "\t\t\t" << current*price << endl;   // 3 tabs enough
        }
        else{
            price = current;
        }
        word++;
    }
    file.close();
    return 0;

// output for Q10
// numberOfTicketsSold     totalSale
// 5750                    1437500
// 28000                   2800000
// 35750                   1787500
// 18750                   468750

    //Question 11
    ifstream input("Ch3_Ex6Data.txt");
    ofstream output("Ch3_Ex6Output.dat");    //not declared in scope also caused by MISSING SEMICOLON

    string firstName, lastName;
    double salary, increase;
    for(int i = 0; i < 3; i++){        //read 3 lines of code only
        input >> lastName >> firstName >> salary >> increase;  //read str,str,double,double in 1 line
        output << firstName << " " << lastName;

        increase = salary*(1+increase/100);
        output << setprecision(2) << fixed << " " << increase << endl;
        }
    input.close();
    output.close();
}