#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Data {
    char type;
    int length;
    vector<char> value;
};

vector<Data> deserialize(const string& filename) {
    vector<Data> data;
    ifstream file(filename, ios::binary);

    if (file.is_open()) {
        while (file.peek() != EOF) {
            Data item;
            file.get(item.type);
            file.read(reinterpret_cast<char*>(&item.length), sizeof(item.length));
            item.value.resize(item.length);
            file.read(item.value.data(), item.length);
            data.push_back(item);
        }
        file.close();
    }
    else {
        cerr << "Ошибка открытия файла" << endl;
    }

    return data;
}

void generateAsm(const vector<Data>& data, const string& filename) {
    ofstream file(filename);

    if (file.is_open()) {
        file << ".586\n";
        file << ".model flat, stdcall\n";
        file << "includelib kernel32.lib\n";
        file << "\n";
        file << "ExitProcess PROTO :DWORD\n";
        file << "MessageBoxA PROTO :DWORD, :DWORD, :DWORD, :DWORD\n";
        file << "\n";
        file << ".STACK 4096\n";
        file << "\n";
        file << ".DATA\n";
        file << "MB_OK db 0\n";
        file << "HW db ?\n";
        file << "str1 db 356 dup(32), 0\n";
        file << "str2 db 'Окно', 0\n";

        for (size_t i = 0; i < data.size(); ++i) {
            if (data[i].type == 'C') {
                file << "char" << i << " db '" << data[i].value[0] << "', 0\n";
            }
            /*else if (data[i].type == 'I') {
                int number = 0;
                memcpy(&number, data[i].value.data(), data[i].length);

                if (data[i].length == 1) {
                    file << "number" << i << " db " << number << "\n";
                }
                else if (data[i].length == 2) {
                    file << "number" << i << " dw " << number << "\n";
                }
                else if (data[i].length == 4) {
                    file << "number" << i << " dd " << number << "\n";
                }
                else {
                    file << "number" << i << " dq " << number << "\n";
                }
            }*/
            file << "\n";
        }

        file << ".CODE\n";
        file << "main PROC\n";
        file << "mov esi, 0\n";

        for (size_t i = 0; i < data.size(); ++i) {
            if (data[i].type == 'C') {
                file << "mov al, char" << i << "\n";
                file << "mov [str1 + esi], al\n";
                file << "inc esi\n";
            }
        }

        file << "mov byte ptr [str1 + esi], 0\n";
        file << "Invoke MessageBoxA, 0, offset str1, offset str2, MB_OK\n";
        file << "push 0\n";
        file << "call ExitProcess\n";
        file << "main ENDP\n";
        
        file << "end main\n";

        file.close();
    }
    else {
        cerr << "Ошибка открытия файла для записи ASM" << endl;
    }
}

int main() {
    string inputPath = "data.bin";
    string asmPath = "..\\SE_Asm04_asm\\data.asm";
    setlocale(LC_ALL, "rus");
    vector<Data> deserializedData = deserialize(inputPath);
    cout << "Дессериализация завершена" << endl;
    generateAsm(deserializedData, asmPath);
    cout << "ASM файл создан: " << asmPath << endl;
    return 0;
}
