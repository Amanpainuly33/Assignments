#include <iostream>

using namespace std;

class VowelCheck;

class FriendDemo
{
    string str;

public:
    void setstr(string s)
    {
        str = s;
    }
    friend class VowelCheck;
};

class VowelCheck
{
public:
    void maxVowel(FriendDemo ob)
    {
        int maxv = 0, v = 0;
        string word = "", mword = "";

        int len = ob.str.length();
        for (int i = 0; i <= len; i++)
        {

            if (i < len && ob.str[i] != ' ')
            {
                if (ob.str[i] == 'A' || ob.str[i] == 'E' || ob.str[i] == 'I' || ob.str[i] == 'O' || ob.str[i] == 'U')
                    v++;
                word += ob.str[i];
            }
            else
            {

                if (maxv < v)
                {
                    maxv = v;
                    mword = word;
                }
                v = 0;
                word="";
            }
        }
        cout <<endl<< "The word with max number of vowels :" << mword << endl;
    }
};

int main()
{
    FriendDemo obj;
    obj.setstr("HAPPY NEW YEAR");

    VowelCheck vc;
    vc.maxVowel(obj);
}
