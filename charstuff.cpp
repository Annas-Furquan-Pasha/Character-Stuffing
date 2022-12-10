#include <iostream>
using namespace std;

int main()                                
{
    string esc = "@";       // character to be stuffed                                               
    string flag = "$";      // flag 

    string data = "@@gffj$$bgfjh@$hjh$";

    for(int i=0; i<data.length(); i++)
    {
        if(data[i] == '@' || data[i] == '$')
        {
            data = data.substr(0, i) + '@' + data.substr(i, data.size()-i);
            i++;
        }
    }
    cout << "The data after character stuffing is : " << data << endl;
}