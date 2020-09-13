#include <bits/stdc++.h>

using namespace std;

int main()
{
    // this method converts the characters into string
    char c[] = {'H','E','L','L','O',' ','W','O','R','L','D'};
    string s = string(c);
    cout<<s<<endl;

    // this method compare two strings and give 0 as result if the string are same
    // and give number(positive if s1>s2 and negative if s1<s2) as result if both string do not match
    char stri1[] = "Aysa";
    char stri2[] = "Aysa";
    if(strcmp(stri1,stri2) != 0)
        cout<<"Both are not same"<<endl;
    else if(strcmp(stri1,stri2) == 0)
        cout<<"both are same"<<endl;

    // getline function take input of a string or a line of input
    string str;
    cout<<"Enter string:"<<endl;
    getline(cin,str);
    cout<<str<<endl;

    // strcat method concatenate two strings. it links together two strings in chain or series.
    char str1[20],str2[20];
    cout<<"Enter first string:"<<endl;
    cin.getline(str1,20);
    cout<<"Enter second string:"<<endl;
    cin.getline(str2,20);
    cout<<strcat(str1,str2)<<endl;

    // strcpy copies a string to a variable from another variable

    char str3[20],str4[20];
    cout<<"Enter first string:"<<endl;
    cin.getline(str3,20);
    strcpy(str4,str3);
    cout<<"Copied string: "<<str4<<endl;

    // strlen returns the length or size of the string
    char ch[]="hi i am aysa siddika, i am from Bangladesh";
    cout<<"Size of the string: "<<strlen(ch)<<endl;

    // compare method compare two strings, if it returns 0 then both are equal
    //if any number (positive or negative) then both are not equal
    string st1 = "programming";
    string st2 = "programming";
    int m = st1.compare(st2);
    if(m==0)
        cout<<"Both equal"<<endl;
    else
        cout<<"Both not equal"<<endl;
     // it swaps the contents of two strings
    string s1 = "100";
    string s2 = "200";
    cout<<"Before  swap s1 contains " << s1 <<"Tk"<<endl;
    cout<<"Before  swap s2 contains " << s2 <<"Tk"<<endl;
    s1.swap(s2);
    cout<< "After  swap s1 contains " << s1<<"Tk"<<endl;
    cout<< "After  swap s2 contains " << s2<<"Tk"<<endl;

    //this resize the length of the string
    string s3 ="ERA INFO TECH Ltd.";
    cout<<"String value is :"<<s3<<endl;
    s3.resize(4);
    cout<<"After resizing, string value is :"<<s3<<endl;

    //it finds the position of a word in a sentence
    string s4= "ERA INFO TECH Ltd.";
    cout <<  s4<<endl;
    cout <<" Position of the TECH word is :";
    cout<< str.find("TECH")<<endl;

    // it replaces a word of a sentence with a defined word and position and length are defined
    string s5 = "ERA INFO TECH LTD.";
    string s6 = "Ltd";
    cout << "Before replacement, string is :"<<str1<<endl;
    s5.replace(14,3,s6);
    cout << "After replacement, string is :"<<str1<<endl;

    // it adds two string one after another
    string s7="Welcome to ERA INFO";
    string s8=" TECH Ltd.";
    cout<<"Before appending,string value is"<<s7<<endl;
    s7.append(s8);
    cout<<"After appending, string value is"<<s7<<endl;

    // this method access a letter of a string with defined position
    string s9 = "WELCOME to C++";
    cout<<"The letter is: "<<s9.at(5)<<endl;

    //it finds the maximum string size
    string s11 = "ERA Info Tech Ltd.";
    cout<<"String is :" <<s11<<endl;
    cout<<"Maximum size of the string is :"<<s11.max_size();


    // it assogn one string to another
    string s12 = "Aysa Siddika";
    string s13;
    s13.assign(s12);
    cout<<"Assigned string is : " <<s13<<endl;;


}
