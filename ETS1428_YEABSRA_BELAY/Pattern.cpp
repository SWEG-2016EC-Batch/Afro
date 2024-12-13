#include <iostream>
using namespace std;

int main(){
    int num, count, user_choice, temp;
    char letter, choice;;
    bool istrue;
    line8:
    cout << "Enter the dimension for the patters: ";
    cin >> num;
    
    if (cin.fail() || num < 2){
        cout << "Please enter a valid input!\n";
        cin.clear();
        cin.ignore();
        goto line8;
    }

    while (true){
        cout << "--------MENU--------\n";
        cout << "press \'1\' : To get left side triangle with numbers\n";
        cout << "press \'2\' : To get right side triangle with capital letters\n";
        cout << "press \'3\' : To get rectangle with small letters\n";
        cout << "press \'4\' : To get hollow rectangle with stars\n";
        cout << "press \'5\' : To get inverted half pyramid\n";
        cout << "press \'6\' : To get hollow inverted half pyramid\n";
        cout << "press \'7\' : To get full pyramid\n";
        cout << "press \'8\' : To get inverted full pyramid\n";
        cout << "press \'9\' : To get hollow full pyramid\n";
        cout << "press \'0\' : To change the dimension\n";
        cout << "----------------------\n";
        line30:
        cout << "Enter your choice: ";
        cin >> user_choice;

        if (cin.fail()){
            cout << "Please enter a valid input!(0-9)\n";
            cin.clear();
            cin.ignore();
            goto line30;
        }
        cout << "------------\n";
        switch (user_choice){
            case 1:
                temp = num - 1;
                for (int i = 0; i < num; i++){
                    count = 1;
                    count += i;
                    istrue = true;
                    for (int j = 0; j < num; j++){
                        if (istrue){
                            for (int k = 0; k < temp; k++){
                            cout << ' ';
                            istrue = false;
                            }
                        } 
                        cout << count;
                        count--;
                        if (count < 1){
                            break;
                        }
                    }
                    cout << endl;
                    temp--;
                }
                break;
            case 2:
                count = 1;
                for (int i = 0; i < num; i++){
                    letter = 'A';
                    for (int j = 0; j < count; j++){
                        cout << letter;
                        letter++;
                    }
                    count++;
                    cout << endl;
                }
                break;
            case 3:
                for (int i = 0; i < num; i++){
                    letter = 'a';
                    for (int j = 0; j < num; j++){
                        cout << letter;
                        letter++;
                    }
                    cout << endl;
                }
                break;
            case 4:
                for (int i = 0; i < num; i++){
                    for (int j = 0; j < num; j++){
                        if (i == 0 || i == (num - 1)){
                            cout << '*';
                        }else{
                            if (j == 0 || j == (num - 1)){
                                cout << '*';
                            }else{
                                cout << ' ';
                            }
                        }
                        
                    }
                    cout << endl;
                }
                break;
            case 5:
                count = num;
                for (int i = 0; i < num; i++){
                    for (int j = 0; j < count; j++){
                        cout << '*';
                    }
                    count--;
                    cout << endl;
                }
                break;
            case 6:
                temp = num;
                for (int i = 0; i < num; i++){
                    for (int j = 0; j < temp; j++){
                        if (i == 0 || i == (num - 1)){
                            cout << '*';
                        }else{
                            if (j == 0 || j == (temp - 1)){
                                cout << '*';
                            }else{
                                cout << ' ';
                            }
                        } 
                    }
                    cout << endl;
                    temp--;
                }
                break;
            case 7:
                count = num;
                for (int i = 0; i < num; i++){
                    count = num;
                    count -= i;

                    for (int j = 1; j <= (2*num)-1; j++){
                        if (j == count){
                            cout << '*';
                            if (count < num + i){
                                count += 2;
                            }
                        }else{
                            cout << ' ';
                        }
                    }
                    cout << endl;
                }
                break;
            case 8:
                for (int i = 0; i < num; i++){
                    count = 1;
                    count += i;
                    for (int j = 1; j <= (2*num)-1; j++){
                        if (j == count){
                            cout << '*';
                            if (count < (2*num) - i - 1){
                                count += 2;
                            }
                        }else{
                            cout << ' ';
                        }
                    }
                    cout << endl;
                }
                break;
            case 9:
                for (int i = 0; i < num; i++){
                    count = num;
                    count -= i;
                    for (int j = 1; j <= (2*num)-1; j++){
                        if ((i == 0) || (i == num - 1)){
                            if (j == count){
                                cout << '*';
                                if (count < num + i){
                                    count += 2;
                                }
                            }else{
                                cout << ' ';
                            }
                        }else{
                            if (j == count){
                                cout << '*';
                                if (count < num+i){
                                    count += i*2;
                                }
                            }else{
                                cout << ' ';
                            }
                        }
                    }
                    cout << endl;
                }
                break;
            case 0:
                cin.clear();
                cin.ignore();
                goto line8;
        }
        cout << "\n------------\n";
        cout << "Do you want to continue (\'y\' for yes, others for no): ";
        cin >> choice;
        if (choice == 'y'){
            continue;
        }else{
            cout << "Goodbye!";
            break;
        }
    }

    return 0;
}
