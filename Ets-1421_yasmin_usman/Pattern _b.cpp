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
