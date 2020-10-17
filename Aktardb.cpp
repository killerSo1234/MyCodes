#include <iostream>

using namespace std;

// CLASS DECLARATION

class DB
{

public:
    void store();
    void viewChronologically();
    void sortbyPartID();
    void viewbyPartID();

private:
    class Part // This "public class" could also be a "struct" instead.
    {
    public:
        int sl;
        int ID;
        float Price;
        int Quantity;
        Part(void){};
        Part(int Partnum, float rate, int quant)
        {
            ID = Partnum;
            Price = rate;
            Quantity = quant;
        } // DO: Initialize appropriately.

        void store(int s)
        {
            sl = s;
            // DO: Fill in prompts and input statements as indicated by the
            cout << "Enter ID: ";
            cin >> ID;
            cout << "Enter Unit Price: ";
            cin >> Price;
            cout << "Enter Inventory Quantity: ";
            cin >> Quantity;
            // sample output:
        };

        void print()
        {
            cout << "Part ID: " << ID << "\tUnit Price = " << Price << "\t\tInventory = " << Quantity << endl;
        };
    };

    Part n1, n2, n3;

    Part *IDp1, *IDp2, *IDp3;

    void swap(Part *a, Part *b);
    void sortbyChronologicalOrder();
};

// CLASS DEFINITION
void DB::store()
{

    cout << "Input ID, price, and quantity for three parts, as prompted" << endl;

    cout << "Part 1:" << endl;
    n1.store(1);

    cout << "Part 2:" << endl;
    n2.store(2);

    cout << "Part 3:" << endl;
    n3.store(3);

    IDp1 = &n1;
    IDp2 = &n2;
    IDp3 = &n3;

    // DO: Print a thank you message after storing as indicated in the
    cout << "Thank you. The three parts have been securely stored in the database." << endl;

    // sample output:
};

void DB::viewChronologically()
{
    sortbyChronologicalOrder();
    cout << "The three items in the database (in chronological order) are: " << endl;

    n1.print();
    n2.print();
    n3.print();
};

// DO: Fill in the definition for the swap method in the DB class:

void DB::swap(DB::Part *a, Part *b)
{
    Part temp;
    temp = *a;
    *a = *b;
    *b = temp;
};

void DB::sortbyPartID()
{

    if (IDp1->ID > IDp2->ID)
        swap(IDp1, IDp2);

    if (IDp2->ID > IDp3->ID)
    {
        swap(IDp2, IDp3);

        if (IDp1->ID > IDp2->ID)
            swap(IDp1, IDp2);
    }
};

void DB::sortbyChronologicalOrder()
{
    if (IDp1->sl > IDp2->sl)
        swap(IDp1, IDp2);

    if (IDp2->sl > IDp3->sl)
    {
        swap(IDp2, IDp3);

        if (IDp1->sl > IDp2->sl)
            swap(IDp1, IDp2);
    }
}

void DB::viewbyPartID()
{
    // DO: Fill in based on sample output:
    cout << "The three items in the database (sorted by part ID) are:" << endl;

    n1.print();
    n2.print();
    n3.print();
};

int main()
{

    DB DB1;
    DB1.store();
    DB1.sortbyPartID();
    DB1.viewbyPartID();
    DB1.viewChronologically();

    cout << "Have a good day! Bye!" << endl;

    exit(0);
};