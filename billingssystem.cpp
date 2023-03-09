#include <iostream>
#include <time.h>
#include <fstream>

using namespace std;

class Bill
{
    int select, quantity;
    int rep, reuse;
    double tp1, tp2, tp3, tp4, tp5, tp6, tp7, tp8, tp9, tp10;
    double totalPrice, netPrice, stPrice, orderAmount;
    int counts;
    string name;
    struct menuitem
    {
        string menulist;
        double price;
    };
    menuitem menu[11];
    int c[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

public:
    Bill()
    {
        counts = 1;
        totalPrice = 0;
    }
    void get_data() // a function to get load the data
    {
        menu[1].menulist = "Stream Momo";
        menu[1].price = 150;
        menu[2].menulist = "Fried Momo";
        menu[2].price = 170;
        menu[3].menulist = "Chowmein";
        menu[3].price = 175;
        menu[4].menulist = "Bhutan";
        menu[4].price = 195;
        menu[5].menulist = "Chooila";
        menu[5].price = 205;
        menu[6].menulist = "Cold Drinks";
        menu[6].price = 75;
        menu[7].menulist = "Khaja Set";
        menu[7].price = 195;
        menu[8].menulist = "Bara Set";
        menu[8].price = 115;
        menu[9].menulist = "Fried Rice";
        menu[9].price = 125;
        menu[10].menulist = "Omlette";
        menu[10].price = 45;
    }

    void show_menu()
    {
        cout << endl;
        cout << "               Local ethnic food restaurant Menu       " << endl
            << endl;
        cout << "S.N.  Items                                    Price" << endl;
        cout << 1 << "\t" << menu[1].menulist << "\t\t\t\tRS " << menu[1].price << endl;
        cout << 2 << "\t" << menu[2].menulist << "\t\t\t\tRS " << menu[2].price << endl;
        cout << 3 << "\t" << menu[3].menulist << "\t\t\t\tRS " << menu[3].price << endl;
        cout << 4 << "\t" << menu[4].menulist << "\t\t\t\t\tRS " << menu[4].price << endl;
        cout << 5 << "\t" << menu[5].menulist << "\t\t\t\t\tRS " << menu[5].price << endl;
        cout << 6 << "\t" << menu[6].menulist << "\t\t\t\tRS " << menu[6].price << endl;
        cout << 7 << "\t" << menu[7].menulist << "t\t\t\t\tRS " << menu[7].price << endl;
        cout << 8 << "\t" << menu[8].menulist << "\t\t\t\tRS " << menu[8].price << endl;
        cout << 9 << "\t" << menu[9].menulist << "\t\t\t\tRS " << menu[9].price << endl;
        cout << 10 << "\t" << menu[10].menulist << "\t\t\t\t\tRS " << menu[10].price << endl
            << endl;
        cout << " Please enter your name: ";
        getline(cin, name);
    }
    void selectItems()
    {
        cout << " Choose your item:";
        cin >> select;
        switch (select)
        {
        case 1:
        {
            c[1] = c[1] + quantity;
            cout << "  ==============" << menu[1].menulist << "==============" << endl;
            cout << "   How much do you want to order:  ";
            cin >> quantity;
            cout << endl;
            cout << "                              Local Ethnic Food Restaurant                   " << endl;
            cout << endl;
            cout << "     Date: " << __DATE__ << endl;
            cout << "     Invoice To: " << name << endl;
            cout << "  ----------------------------------------------------------------------------" << endl;
            cout << "  |  Items                            quantity                     total price" << endl;
            cout << "  |  -------------------------------------------------------------------------" << endl;
            tp1 = menu[1].price * quantity;
            cout << "  |\t" << menu[1].menulist << "\t\t\t" << quantity << "\t\t\t\t" << tp1 << endl;
            cout << "  |--------------------------------------------------------------------------- " << endl
                << endl;
            break;
        }
        case 2:
        {
            c[2] = c[2] + quantity;
            cout << "  ==============" << menu[2].menulist << "==============" << endl;
            cout << "   How much do you want to order:  ";
            cin >> quantity;
            cout << endl;
            cout << "                              Local Ethnic Food Restaurant                   " << endl;
            cout << endl;
            cout << "     Date: " << __DATE__ << endl;
            cout << "     Invoice To: " << name << endl;
            cout << "  ----------------------------------------------------------------------------" << endl;
            cout << "  |  Items                            quantity                     total price" << endl;
            cout << "  |  -------------------------------------------------------------------------" << endl;
            tp2 = menu[2].price * quantity;
            cout << "  |\t" << menu[2].menulist << "\t\t\t" << quantity << "\t\t\t\t" << tp2 << endl;
            cout << "  |--------------------------------------------------------------------------- " << endl
                << endl;
            break;
        }
        case 3:
        {
            c[3] = c[3] + quantity;
            cout << "  ==============" << menu[3].menulist << "==============" << endl;
            cout << "   How much do you want to order:  ";
            cin >> quantity;
            cout << endl;
            cout << "                              Local Ethnic Food Restaurant                   " << endl;
            cout << endl;
            cout << "     Date: " << __DATE__ << endl;
            cout << "     Invoice To: " << name << endl;
            cout << "  ----------------------------------------------------------------------------" << endl;
            cout << "  |  Items                            quantity                     total price" << endl;
            cout << "  |  -------------------------------------------------------------------------" << endl;
            tp3 = menu[3].price * quantity;
            cout << "  |\t" << menu[3].menulist << "\t\t\t" << quantity << "\t\t\t\t" << tp3 << endl;
            cout << "  |--------------------------------------------------------------------------- " << endl
                << endl;
            break;
        }
        case 4:
        {
            c[4] = c[4] + quantity;
            cout << "  ==============" << menu[4].menulist << "==============" << endl;
            cout << "   How much do you want to order:  ";
            cin >> quantity;
            cout << endl;
            cout << "                              Local Ethnic Food Restaurant                   " << endl;
            cout << endl;
            cout << "     Date: " << __DATE__ << endl;
            cout << "     Invoice To: " << name << endl;
            cout << "  ----------------------------------------------------------------------------" << endl;
            cout << "  |  Items                            quantity                     total price" << endl;
            cout << "  |  -------------------------------------------------------------------------" << endl;
            tp4 = menu[4].price * quantity;
            cout << "  |\t" << menu[4].menulist << "\t\t\t" << quantity << "\t\t\t\t" << tp4 << endl;
            cout << "  |--------------------------------------------------------------------------- " << endl
                << endl;
            break;
        }
        case 5:
        {
            c[5] = c[5] + quantity;
            cout << "  ==============" << menu[5].menulist << "==============" << endl;
            cout << "   How much do you want to order:  ";
            cin >> quantity;
            cout << endl;
            cout << "                              Local Ethnic Food Restaurant                   " << endl;
            cout << endl;
            cout << "     Date: " << __DATE__ << endl;
            cout << "     Invoice To: " << name << endl;
            cout << "  ----------------------------------------------------------------------------" << endl;
            cout << "  |  Items                            quantity                     total price" << endl;
            cout << "  |  -------------------------------------------------------------------------" << endl;
            tp5 = menu[5].price * quantity;
            cout << "  |\t" << menu[5].menulist << "\t\t\t" << quantity << "\t\t\t\t" << tp5 << endl;
            cout << "  |--------------------------------------------------------------------------- " << endl
                << endl;
            break;
        }
        case 6:
        {
            c[6] = c[6] + quantity;
            cout << "  ==============" << menu[6].menulist << "==============" << endl;
            cout << "   How much do you want to order:  ";
            cin >> quantity;
            cout << endl;
            cout << "                              Local Ethnic Food Restaurant                   " << endl;
            cout << endl;
            cout << "     Date: " << __DATE__ << endl;
            cout << "     Invoice To: " << name << endl;
            cout << "  ----------------------------------------------------------------------------" << endl;
            cout << "  |  Items                            quantity                     total price" << endl;
            cout << "  |  -------------------------------------------------------------------------" << endl;
            tp6 = menu[6].price * quantity;
            cout << "  |\t" << menu[6].menulist << "\t\t\t" << quantity << "\t\t\t\t" << tp6 << endl;
            cout << "  |--------------------------------------------------------------------------- " << endl
                << endl;
            break;
        }
        case 7:
        {
            c[7] = c[7] + quantity;
            cout << "  ==============" << menu[7].menulist << "==============" << endl;
            cout << "   How much do you want to order:  ";
            cin >> quantity;
            cout << endl;
            cout << "                              Local Ethnic Food Restaurant                   " << endl;
            cout << endl;
            cout << "     Date: " << __DATE__ << endl;
            cout << "     Invoice To: " << name << endl;
            cout << "  ----------------------------------------------------------------------------" << endl;
            cout << "  |  Items                            quantity                     total price" << endl;
            cout << "  |  -------------------------------------------------------------------------" << endl;
            tp7 = menu[7].price * quantity;
            cout << "  |\t" << menu[7].menulist << "\t\t\t" << quantity << "\t\t\t\t" << tp7 << endl;
            cout << "  |--------------------------------------------------------------------------- " << endl
                << endl;
            break;
        }
        case 8:
        {
            c[8] = c[8] + quantity;
            cout << "  ==============" << menu[8].menulist << "==============" << endl;
            cout << "   How much do you want to order:  ";
            cin >> quantity;
            cout << endl;
            cout << "                              Local Ethnic Food Restaurant                   " << endl;
            cout << endl;
            cout << "     Date: " << __DATE__ << endl;
            cout << "     Invoice To: " << name << endl;
            cout << "  ----------------------------------------------------------------------------" << endl;
            cout << "  |  Items                            quantity                     total price" << endl;
            cout << "  |  -------------------------------------------------------------------------" << endl;
            tp8 = menu[8].price * quantity;
            cout << "  |\t" << menu[8].menulist << "\t\t\t" << quantity << "\t\t\t\t" << tp8 << endl;
            cout << "  |--------------------------------------------------------------------------- " << endl
                << endl;
            break;
        }
        case 9:
        {
            c[9] = c[9] + quantity;
            cout << "  ==============" << menu[9].menulist << "==============" << endl;
            cout << "   How much do you want to order:  ";
            cin >> quantity;
            cout << endl;
            cout << "                              Local Ethnic Food Restaurant                   " << endl;
            cout << endl;
            cout << "     Date: " << __DATE__ << endl;
            cout << "     Invoice To: " << name << endl;
            cout << "  ----------------------------------------------------------------------------" << endl;
            cout << "  |  Items                            quantity                     total price" << endl;
            cout << "  |  -------------------------------------------------------------------------" << endl;
            tp9 = menu[9].price * quantity;
            cout << "  |\t" << menu[9].menulist << "\t\t\t" << quantity << "\t\t\t\t" << tp9 << endl;
            cout << "  |--------------------------------------------------------------------------- " << endl
                << endl;
            break;
        }
        case 10:
        {
            c[10] = c[10] + quantity;
            cout << "  ==============" << menu[10].menulist << "==============" << endl;
            cout << "   How much do you want to order:  ";
            cin >> quantity;
            cout << endl;
            cout << "                              Local Ethnic Food Restaurant                   " << endl;
            cout << endl;
            cout << "     Date: " << __DATE__ << endl;
            cout << "     Invoice To: " << name << endl;
            cout << "  ----------------------------------------------------------------------------" << endl;
            cout << "  |  Items                            quantity                     total price" << endl;
            cout << "  |  -------------------------------------------------------------------------" << endl;
            tp10 = menu[10].price * quantity;
            cout << "  |\t" << menu[3].menulist << "\t\t\t" << quantity << "\t\t\t\t" << tp10 << endl;
            cout << "  |--------------------------------------------------------------------------- " << endl
                << endl;
            break;
        }
        default:
            cout << "  !!! Invalid Input !!!" << endl;
            selectItems();
            break;
        }
        repeat();
    }
    void repeat()
    {
        cout << " If you want to select more items press 1:  ";
        cin >> rep;
        if (rep == 1)
        {
            counts++;
            selectItems();
        }
        else

            billFunction();
    }

    void billFunction()
    {
        totalPrice = tp1 + tp2 + tp3 + tp4 + tp5 + tp6 + tp7 + tp8 + tp9 + tp10;
        stPrice = totalPrice + (totalPrice * 10) / 100;
        netPrice = stPrice + (stPrice * 13) / 100;
        if (rep == 1)
        {
            orderAmount = netPrice;
        }
        print_bill();
    }

    void print_bill()
    {
        cout << endl;
        cout << endl;
        cout << "                   Local Ethnic Food Restaurant                 " << endl;
        cout << endl;
        cout << "     Date: " << __DATE__ << endl;
        cout << "     Invoice To: " << name << endl;
        cout << "  ----------------------------------------------------------------------------" << endl;
        cout << "  |  Total price:                                                      " << totalPrice << "/-" << endl;
        cout << "  |                                                               ------------" << endl;
        cout << "  |  Amount including 10% service tax:                                 " << stPrice << "/-" << endl;
        cout << "  |                                                               ------------" << endl;
        cout << "  |  Net Price including 13% VAT on stprice:                           " << netPrice << "/-" << endl;
        cout << "  ----------------------------------------------------------------------------" << endl
            << endl;
        ofstream fil;
        fil.open("SavedRecord.txt");
        fil << endl;
        fil << endl;
        fil << "                   Local Ethnic Food Restaurant                 " << endl;
        fil << endl;
        fil << "     Date: " << __DATE__ << endl;
        fil << "     Record of Mr/Mrs: " << name << endl;
        fil << "  ----------------------------------------------------------------------------" << endl;
        fil << "  |  Total price:                                                      " << totalPrice << "/-" << endl;
        fil << "  |                                                               ------------" << endl;
        fil << "  |  Amount including 10% service tax:                                 " << stPrice << "/-" << endl;
        fil << "  |                                                               ------------" << endl;
        fil << "  |  Net Price including 13% VAT on stprice:                           " << netPrice << "/-" << endl;
        fil << "  ----------------------------------------------------------------------------" << endl
            << endl;
        fil << "   Total order Amount is Rs " << netPrice << "/-." << endl;
        fil << "   Total order count = " << counts << endl;
        fil.close();
        returnTomenu();
    }
    void returnTomenu()
    {
        cout << "DO you want to repeat program. If yes then press 1" << endl;
        cin >> reuse;
        if (reuse == 1)
        {
            show_menu();
        }
    }
};
int main()
{
    Bill b1;
    b1.get_data();
    b1.show_menu();
    b1.selectItems();
    return 0;
}