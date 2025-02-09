#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct Data {
    char variable;
    /*char literal;*/
};


void serialize(const string& filename, const vector<Data>& data)
{
    ofstream file(filename, ios::binary);
    if (file.is_open())
    {
        for (const auto& item : data) 
        {
            file.put('C'); 
            int charSize = sizeof(item.variable);
            file.write(reinterpret_cast<char*>(&charSize), sizeof(charSize)); 
            file.write(reinterpret_cast<const char*>(&item.variable), charSize); 

            /*file.put('C');
            int intSize = sizeof(item.literal);
            file.write(reinterpret_cast<char*>(&intSize), sizeof(intSize)); 
            file.write(reinterpret_cast<const char*>(&item.literal), intSize);*/ 
        }
        file.close();
    }
    else {
        cerr << "Ошибка записи в файл" << endl;
    }
}
int main() 
{

    vector<Data> data = {
        {'5'},
        {'B'},
        {'C'}
    };

    string outputPath = "..\\Deserealizer\\data.bin";
    setlocale(LC_ALL, "rus");
    serialize(outputPath, data);

    cout << "Сериализовнао в " << outputPath << endl;

    return 0;
}
