#include <iostream>
#include <cmath>
using namespace std;

//  standard or scientific calculator

class Standard_calc
{

public:
    float add_a, add_a1, sub_b, sub_b1, div_c, div_c1, multi_d, multi_d1; // For Addition, substraction ,divide, multiplication.
    float sum, sub, div;
    int multi;
    int modules;
    void Addition(void);
    void Subtraction(void);
    void Divide(void);
    void Multiply(void);
    void getAddData();
    void getsubData();
    void getDivData();
    void getMultiData();
};

void Standard_calc ::Addition(void)
{
    // add_a = a;
    // add_a1 = a1;
    cout << "\t\n------------------ ADD YOU NUMBER HERE ------------------\n\n";
    cout << "Enter First Number ------> ";
    cin >> add_a;
    cout << "Enter Second Number ------> ";
    cin >> add_a1;
    sum = add_a + add_a1;
}

void Standard_calc ::getAddData()
{
    cout << "\nThe Sum of " << add_a << " + " << add_a1 << " = " << sum << endl;
}

void Standard_calc ::Subtraction(void)
{
    // sub_b = b;
    cout << "\t\n------------------ SUBTRACT YOU NUMBER HERE ------------------\n\n";
    cout << "Enter First Number ------> ";
    cin >> sub_b;
    cout << "Enter Second Number ------> ";
    cin >> sub_b1;
    sub = sub_b - sub_b1;
}

void Standard_calc ::getsubData()
{
    cout << "\nThe Subtraction of " << sub_b << " - " << sub_b1 << " = " << sub << endl;
}

void Standard_calc ::Divide(void)
{
    // div_c = c;
    // div_c1 = c1;
    cout << "\t\n------------------ DIVIDE YOU NUMBER HERE ------------------\n\n";
    cout << "Enter First Number For Divided To ------> ";
    cin >> div_c;
    cout << "Enter Second Number For Divided By ------> ";
    cin >> div_c1;
    div = div_c / div_c1;
    // modules = div_c%div_c1;
}

void Standard_calc ::getDivData()
{
    cout << "\nThe Division of " << div_c << "/" << div_c1 << " = " << div << endl;
    // cout<<"And The Modules of "<<div_c<< "%"<<div_c1<<" = "<<modules;
}

void Standard_calc ::Multiply(void)
{
    // multi_d = d;
    // multi_d1 = d1;
    cout << "\t\n------------------ MULTIPLY YOU NUMBER HERE ------------------\n\n";
    cout << "Enter First Number ------> ";
    cin >> multi_d;
    cout << "Enter Second Number ------> ";
    cin >> multi_d1;
    multi = multi_d * multi_d1;
}

void Standard_calc ::getMultiData()
{
    cout << "\nThe Multiplication of " << multi_d << " x " << multi_d1 << " = " << multi << endl;
}

class Scientific_calc
{
public:
    int pow1, pow2, sq_root, loga; // for exponent and square-root respectively.
    float reci;
    int result_power;
    double sqrt_result;
    float result_loga;
    float result_reci;
    void Power(void);
    void Square_root(void);
    void Logarithms(void);
    void Reciprocal(void);
    void getPowData();
    void getSqrootData();
    void getLogData();
    void getReciData();
};

void Scientific_calc ::Power(void)
{
    // pow1 = p;
    // pow2 = p1;
    cout << "\t\n----------------- POWER -----------------\n\n";
    cout << "Enter The Number For Power ------> ";
    cin >> pow1;
    cout << "Enter Power Of ------> ";
    cin >> pow2;
    result_power = pow(pow1, pow2);
}

void Scientific_calc ::getPowData()
{
    cout << "Power Of " << pow1 << "^" << pow2 << " = " << result_power << endl;
}

void Scientific_calc ::Square_root(void)
{
    // sq_root = s;
    cout << "\t\n-------------- SQUARE ROOT -------------- \n\n";
    cout << "Enter A Positive Integer To Find Its Square Root ------> ";
    cin >> sq_root;
    sqrt_result = sqrt((double)sq_root);
}

void Scientific_calc ::getSqrootData()
{
    cout << "Square Root Of " << sq_root << " = " << sqrt_result << endl;
}

void Scientific_calc ::Logarithms(void)
{
    // loga = l;
    cout << "\t\n------------- LOGARITHMS -------------\n" << endl;
    cout << "Enter Base Value ------> ";
    cin >> loga;
    result_loga = log(loga);
}

void Scientific_calc ::getLogData()
{
    cout << "Logarithms Of " << loga << " = " << result_loga << endl;
}

void Scientific_calc ::Reciprocal(void)
{
    // reci = R;
    cout << "\t\n------------- RECIPROCAL  1/X -------------\n" << endl;
    cout << "Enter The Value Of X  ------> ";
    cin >> reci;
    result_reci = 1 / reci;
}

void Scientific_calc ::getReciData()
{
    cout << "Reciprocal Of 1/" << reci << " = " << result_reci << endl;
}

class Hybrid_calculator : public Standard_calc, public Scientific_calc
{
};
int main()
{
    int input, standard_input;
    Standard_calc stand_calc;
    Scientific_calc science_calc;
    bool Exit = false;
    cout << "\t\n *********************   CALCULATOR   *********************\n\n";
    cout << "1.\tSTANDARD     CALCULATOR\n\n";
    cout << "2.\tSCIENTIFIC    CALCULATOR\n\n";
    cout << "3.\tEXIT   CALCULATOR\n\n";
    cout << "\tChoose Any One Calculator  :- \t";
    cin >> input;

    
    switch (input)
    {
    case 1:
        do
        {
            cout << "\n\t <<<<<<    STANDARD    CALCULATOR    >>>>>> \n\n\n";
            cout << "1.\tAddition ( + )";
            cout << "\n2.\tSubtraction ( - )";
            cout << "\n3.\tDivide ( / )";
            cout << "\n4.\tMultiplication ( x )";
            cout << "\n5.\t<< Back ";
            cout << "\n\nEnter Your Choice :-\t";
            cin >> standard_input;
            switch (standard_input)
            {
            case 1:
                stand_calc.Addition();
                stand_calc.getAddData();
                break;

            case 2:
                stand_calc.Subtraction();
                stand_calc.getsubData();
                break;

            case 3:
                stand_calc.Divide();
                stand_calc.getDivData();
                break;

            case 4:
                stand_calc.Multiply();
                stand_calc.getMultiData();
                break;

            case 5:
                Exit = true;
                main();

            default:
                cout << "\n-------------------------------  ALERT !!! PLEASE ENTER VALID CHOICE  -------------------------------\n";
                break;
            }
        } while (!Exit);

        break;

    case 2:
    do
    {
        cout << "\n\t <<<<<<    SCIENTIFIC    CALCULATOR    >>>>>> \n\n\n";
        cout << "1.\tPower ( x^y )";
        cout << "\n2.\tSquare Root ( √x )";
        cout << "\n3.\tLogarithm ( log(x) )";
        cout << "\n4.\tReciprocal ( 1/x )";
        cout << "\n5.\t << Back ";
        cout << "\nEnter Your Choice :-\t";
        cin >> standard_input;
        switch (standard_input)
        {
        case 1:
            science_calc.Power();
            science_calc.getPowData();
            // switch (input);
            break;

        case 2:
            science_calc.Square_root();
            science_calc.getSqrootData();
            break;

        case 3:
            science_calc.Logarithms();
            science_calc.getLogData();
            break;

        case 4:
            science_calc.Reciprocal();
            science_calc.getReciData();
            break;

        case 5:
        Exit = true;
            main();

        default:
            cout << "\n-------------------------------  ALERT !!! PLEASE ENTER VALID CHOICE  -------------------------------\n";
            break;
        }
    } while (!Exit);
    
       break;

    case 3 :
    break;

    default:
        cout << "\n-------------------------------  ALERT !!! PLEASE ENTER VALID CHOICE  -------------------------------\n";
        break;
    }


    return 0;
}