#include <iostream>
#include <fstream>
#include <numeric>
#include <vector>
#include <iterator>
#include <map>
using namespace std;

int main() {
  multimap<float,char> list;//letter and freq
  multimap<float,char> list2;//letter and distribution
  multimap<float, char> list3; //letter and distribution from table
  multimap<char,char> list4; //conversion table
  vector<char> letter {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    vector<float> count (26,0);
    vector<float> distribution (26,0);
    vector<float> distribution_table{0.0817,0.0150,0.0278,0.0425,0.1270,0.0223,0.0202,0.0609,0.0697,0.0015,0.0077,0.0403,0.0241,0.0675,0.0751,0.0193,0.0010,0.0599,0.0633,0.0906,0.0276,0.0098,0.0236,0.0015,0.0197,0.0007};
    
    fstream file;
    string word, filename;
  
    filename = "ciphertext.txt";
  
    file.open(filename.c_str());
  
    while (file >> word)
    {
        for(int i=0;i<word.length();i++){
         
          for(int j=0;j<26;j++){
            if(word.at(i)!=letter.at(j)){
              continue;
            }
            else if(word.at(i)==letter.at(j)){
              count.at(j)++;
            }
          }
        }
          
    }

    float sum = accumulate(count.begin(),count.end(),0);

    for(int y=0;y<26;y++){
      list.insert(pair<float,char>((count.at(y)),letter.at(y)));
      distribution.at(y)=count.at(y)/sum;
      list2.insert(pair<float,char>((distribution.at(y)),letter.at(y)));
      list3.insert(pair<float,char>((distribution_table.at(y)),letter.at(y)));
    }

  
    map<float,char>:: iterator it;
    for (it=list.begin() ; it!=list.end() ; it++){
        cout << "Letter: " << (*it).second << " ";
        cout <<"Frequency: " << (*it).first << endl;}

    cout<<endl<<endl<<endl;

    for (it=list2.begin() ; it!=list2.end() ; it++){
        cout << "Letter: " << (*it).second << " ";
        cout <<"Distribution: " << (*it).first << endl;}

        cout<<"Total character: "<<sum<<endl;

    cout<<endl<<endl<<endl;

    for (it=list3.begin() ; it!=list3.end() ; it++){
        cout << "Letter From Table: " << (*it).second << " ";
        cout <<"Frequency From Table: " << (*it).first << endl;}

        string text = "lrvmnir bpr sumvbwvr jx bpr lmiwv yjeryrkbi jx qmbm wi bpr xjvni mkd ymibrut jx irhx wi bpr riirkvr jx ymbinlmtmipw utn qmumbr dj w ipmhh but bj rhnvwdmbr bpr yjeryrkbi jx bpr qmbm mvvjudwko bj yt wkbrusurbmbwjk lmird jk xjubt trmui jx ibndt"; 
        
        string text2 ="wb wi kjb mk rmit bmiq bj rashmwk rmvp yjeryrkb mkd wbi iwokwxwvmkvr mkd ijyr ynib urymwk nkrashmwkrd bj ower m vjyshrbr rashmkmbwjk jkr cjnhd pmer bj lr fnmhwxwrd mkd wkiswurd bj invp mk rabrkb bpmb pr vjnhd urmvp bpr ibmbr jx rkhwopbrkrd ywkd vmsmlhr jx urvjokwgwko ijnkdhrii ijnkd mkd ipmsrhrii ipmsr w dj kjb drry ytirhx bpr xwkmh mnbpjuwbt lnb yt rasruwrkvr cwbp qmbm pmi hrxb kj djnlb bpmb bpr xjhhjcwko wi bpr sujsru msshwvmbwjk mkd wkbrusurbmbwjk w jxxru yt bprjuwri wk bpr pjsr bpmb bpr riirkvr jx jqwkmcmk qmumbr cwhh urymwk wkbmvb";

        cout<<"\n\ntranslation: "<<endl<<endl;

        for (int t=0; t<text.length();t++){
          if(text.at(t)=='z'){
            cout << "z";
          }
          else if(text.at(t)=='f'){
            cout << "q";
          }
          else if(text.at(t)=='g'){
            cout << "j";
          }
          else if(text.at(t)=='a'){
            cout << "x";
          }
          else if(text.at(t)=='c'){
            cout << "k";
          }
          else if(text.at(t)=='e'){
            cout << "v";
          }
          else if(text.at(t)=='o'){
            cout << "b";
          }
          else if(text.at(t)=='q'){
            cout << "p";
          }
          else if(text.at(t)=='l'){
            cout << "y";
          }
          else if(text.at(t)=='t'){
            cout << "g";
          }
          else if(text.at(t)=='n'){
            cout << "f";
          }
          else if(text.at(t)=='s'){
            cout << "w";
          }
          else if(text.at(t)=='y'){
            cout << "m";
          }
          else if(text.at(t)=='x'){
            cout << "u";
          }
          else if(text.at(t)=='v'){
            cout << "c";
          }
          else if(text.at(t)=='d'){
            cout << "l";
          }
          else if(text.at(t)=='h'){
            cout << "d";
          }
          else if(text.at(t)=='u'){
            cout << "r";
          }
          else if(text.at(t)=='p'){
            cout << "h";
          }
          else if(text.at(t)=='i'){
            cout << "s";
          }
          else if(text.at(t)=='w'){
            cout << "n";
          }
          else if(text.at(t)=='j'){
            cout << "i";
          }
          else if(text.at(t)=='k'){
            cout << "o";
          }
          else if(text.at(t)=='m'){
            cout << "a";
          }
          else if(text.at(t)=='b'){
            cout << "t";
          }
          else if(text.at(t)=='r'){
            cout << "e";
          }
          else if(text.at(t)==' '){
            cout << " ";
          }
        }

        cout<<endl<<endl;

        for (int n=0; n<text2.length();n++){
          
          if(text2.at(n)=='z'){
            cout << "z";
          }
          else if(text2.at(n)=='f'){
            cout << "q";
          }
          else if(text2.at(n)=='g'){
            cout << "j";
          }
          else if(text2.at(n)=='a'){
            cout << "x";
          }
          else if(text2.at(n)=='c'){
            cout << "k";
          }
          else if(text2.at(n)=='e'){
            cout << "v";
          }
          else if(text2.at(n)=='o'){
            cout << "b";
          }
          else if(text2.at(n)=='q'){
            cout << "p";
          }
          else if(text2.at(n)=='l'){
            cout << "y";
          }
          else if(text2.at(n)=='t'){
            cout << "g";
          }
          else if(text2.at(n)=='n'){
            cout << "f";
          }
          else if(text2.at(n)=='s'){
            cout << "w";
          }
          else if(text2.at(n)=='y'){
            cout << "m";
          }
          else if(text2.at(n)=='x'){
            cout << "u";
          }
          else if(text2.at(n)=='v'){
            cout << "c";
          }
          else if(text2.at(n)=='d'){
            cout << "l";
          }
          else if(text2.at(n)=='h'){
            cout << "d";
          }
          else if(text2.at(n)=='u'){
            cout << "r";
          }
          else if(text2.at(n)=='p'){
            cout << "h";
          }
          else if(text2.at(n)=='i'){
            cout << "s";
          }
          else if(text2.at(n)=='w'){
            cout << "n";
          }
          else if(text2.at(n)=='j'){
            cout << "i";
          }
          else if(text2.at(n)=='k'){
            cout << "o";
          }
          else if(text2.at(n)=='m'){
            cout << "a";
          }
          else if(text2.at(n)=='b'){
            cout << "t";
          }
          else if(text2.at(n)=='r'){
            cout << "e";
          }
          else if(text2.at(n)==' '){
            cout << " ";
          }
        }
        
  return 0;
}
