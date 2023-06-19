#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="afaqueahmad1996@gmail.com";
    cout<<"Name: "<<s<<endl;
    cout<<"size: "<<s.length()<<endl;   // string length -> or s.size()
    s[10]=('\0');                       // null character daalne pe us index value ko erase kr rha hai  
    s.push_back('Z');                   //push
    cout<<s<<endl;
    s.pop_back();                       //pop
    cout<<s<<endl;
   
    string s1="Hello ";
    string s2="World!";     
    string s3=s1+s2;                                                 //this is called concatenation.
    cout<<s3<<endl;
    string s4="We are the so-called \"Vikings\" from the North.";   // The sequence \ inserts special characters into string characters
    cout<<s4<<endl;
    string s5 = "Hello\tWorld!";                                    // \t -> tab
    cout << s5<<endl;
    string s6 = "Hello\nWorld!";                                    // \n  -> new line(Enter)
    cout << s6<<endl;
    string s7;
    cout<<"Enter your full name: ";
    getline(cin,s7);                                                // getline(cin,s) is used to accept tab and space
    cout<<"Your Name: "<<s7<<endl;
   
    int t = 20;
    string s8 = (t < 18) ? "Good day." : "Good evening.";           // Short Hand If...Else (Ternary Operator)
    cout <<s8<<endl;
    
    
    char s9[]="zfz" , s10[]="gfg"; // outpout 0  -> when two string arr equal
                                   // output +ve -> when first string have lexicographically greater ASCII value
    int ans=strcmp(s9,s10);        // output -ve -> when first string is lexicographically lesser ASCII value
    cout<<"Compare: "<<ans<<endl;
    strcpy(s9,s10);                 // copy in char array.
    char s11[50];
    strcpy(s11,"I am copying somthing in char array s11.");   
    cout<<"s9: "<<s9<<endl<<"s10: "<<s10<<endl<<"s11: "<<s11<<endl;
    
    string s12="Troy";              // copy in string.
    string s13="Gladiator";
    s12=s13;
    cout<<"Troy tha?: "<<s12<<endl;
    s13="copying in string containing Gladiator";
    cout<<"Gladiator tha?: "<<s13<<endl;                                 
    
    cout<<"comparing s12 & s13: "<<s12.compare(s13)<<endl;      // compare in string.
    cout<<"compare ki s12 me Gladiator hai kya?: "<<s12.compare("Gladiator")<<endl;    // 0 is yes,+ve means s12>s13, -ve means s12<s13 laxicographically.
    
    string str="I name is Khan";                               //replace
    string str1=" Afaque & i am not a terrorist.";
    cout<<"pahle tha: "<<str<<endl;
    str.replace(0,1,"My");                         // 0->index,1->no. of letters, "My" ->string
    cout<<"after replace: "<<str<<endl;
    str.replace(11,4,"Afaque");           
    cout<<"Khan ke jagah Afaque: "<<str<<endl;
    str.replace(11,6,str1);
    cout<<"Afaque ko s1 string se replace: "<<str<<endl;
    
    std::replace(str.begin(),str.end(),'i','I');         // replacing all the occurances of 'i' with 'I'
    cout<<endl<<str;

    
    int count=0,count1=0;
    cout<<"s: "<<s<<endl;
    cout<<"Not isalnum: ";
    for(int i=0;i<s.size();i++)
    {
        if(!isalnum(s[i]) )             // d ke jagah pe null character hai so count is 3
        {
            cout<<s[i]<<" ";
            count++;
        }
    }
    cout<<endl<<"count: "<<count<<endl;
    for(int i=0;i<s.size();i++)
    {
          if( isalnum(s[i]) )
        {   char ch=toupper(s[i]);      // tolower() ,  toupper() to change the case;
            cout<<ch<<" ";
            count1++;
        }
    }
    cout<<endl<<"count1: "<<count1;
    
    
    
    
    

    return 0;
}



