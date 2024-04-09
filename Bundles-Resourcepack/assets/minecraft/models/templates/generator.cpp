#include <iostream>

using namespace std;

string _bundleColor[17] = {"default","white","light_gray","gray","black","brown","red","orange","yellow","lime","green","cyan","light_blue","blue","purple","magenta","pink"};
string _stringMaterial[10] = {"amethyst","copper","diamond","emerald","gold","iron","lapis","netherite","quartz","redstone"};

int main() {
    int a = 17;
    
    for(int materialIndex = 0; materialIndex < 10; materialIndex++){
        for(int colorIndex = 0; colorIndex < 17; colorIndex++){
            
            cout << "       {" << endl;
            cout << "           \"predicate\":" << endl;
            cout << "           {" << endl;
            cout << "               \"custom_model_data\": " << a << endl;
            cout << "           }," << endl;
            cout << "               \"model\": \"item/custom/bundle/" << _stringMaterial[materialIndex] << "/" << _bundleColor[colorIndex] << "\"" << endl;
            cout << "       }," << endl;
            cout << "       {" << endl;
            cout << "           \"predicate\":" << endl;
            cout << "           {" << endl;
            cout << "               \"filled\": 0.0000001," << endl;
            cout << "               \"custom_model_data\": " << a << endl;
            cout << "           }," << endl;
            cout << "               \"model\": \"item/custom/bundle/" << _stringMaterial[materialIndex] << "/filled/" << _bundleColor[colorIndex] << "\"" << endl;
            cout << "       }," << endl;
            
            a++;
        }
    }

    return 0;
}