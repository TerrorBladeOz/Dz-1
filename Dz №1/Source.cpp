#include <iostream>

using namespace std;

void a1()
{
    setlocale(LC_ALL, "rus");
    cout << "������� � 1, ������� �� ����� ���� ������ �������� ������������� ��� �����, � ��������� ������ ��� �����������.\n����� Old Town road ����������� Lil Nas X\n\n";


    cout << "You know what, I'm done, done, done\n";
    cout << "Yeah, I'm gonna take my horse\n";
    cout << "To the old town road\n";
    cout << "I'm gonna ride 'til I can't no more\n";
    cout << "I'm gonna take my horse to the old town road\n";
    cout << "I'm gonna ride (Kio, Kio) 'til I can't no more\n";
    cout << "I got the horses in the back\n";
    cout << "Horse tack is attached\n";
    cout << "Hat is matte black\n";
    cout << "Got the boots that's black to matc\n";
    cout << "Riding on a horse, ha\n";
    cout << "You can whip your Porsche\n";
    cout << "I been in the valley\n";
    cout << "You ain't been up off the porch, now\n";
    cout << "Can't nobody tell me nothing\n";
    cout << "You can't tell me nothing\n";
    cout << "Can't nobody tell me nothing\n";
    cout << "You can't tell me nothing\n";
    cout << "Riding on a tractor\n";
    cout << "Lean all in my bladder\n";
    cout << "Cheated on my baby\n";
    cout << "You can go and ask her\n";
    cout << "My life is a movie\n";
    cout << "Bull riding and boobies\n";
    cout << "Cowboy hat from Gucci\n";
    cout << "Wrangler on my booty\n";
    cout << "Can't nobody tell me nothing\n";
    cout << "You can't tell me nothing\n";
    cout << "Can't nobody tell me nothing\n";
    cout << "You can't tell me nothing\n";
    cout << "Yeah, I'm gonna take my horse\n";
    cout << "To the old town road\n";
    cout << "T'm gonna ride 'til I can't no more\n";
    cout << "I'm gonna take my horse to the old town road\n";
    cout << "I'm gonna ride 'til I can't no more\n";
    cout << "I got the\n\n";
}

void a2()
{
    cout << "������� �� ����� ���� �Every hunter wants�� ����� �������, \n����� ������ ����� ��������� � ����� ������ � ��������������� ����������� ���������.\n\n";

    cout << "English version\n\n";
    cout << "Every \n\tHunter \n\t\tWants \n\t\t\tTo know \n\t\t\t\t Where \n\t\t\t\t\tDoes pheasant \n\t\t\t\t\t\t\tSit\n\n";
    cout << "������� ������\n\n";
    cout << "������ \n\t������� \n\t\t������ \n\t\t\t����� \n\t\t\t\t��� \n\t\t\t\t\t����� \n\t\t\t\t\t\t�����\n\n";

}

void a3()
{
    cout << "������� �3 >>> �������� ���������� � ������� ����-������ � �������� ��� �� �����, � ��� ���� ��� ��� ������ ���� �� ���� ����������\n\n";
    cout << "\t\t\t\t\t������ Sony Playstation 5!!!\n";
    cout << "\t\t\t\t\t��������!!!\n";
    cout << "\t\t\t\t\t������ ���� ����������.\n";
    cout << "\t\t\t\t\t�� ��� ������ ����������.\n";
    cout << "\t\t\t\t\t����� ��������: +7 987 935-44-37\n";
    cout << "\t\t\t\t\t\t +7 \t | +7 |\n";
    cout << "\t\t\t\t\t\t 987 \t | 987 |\n";
    cout << "\t\t\t\t\t\t 935 \t | 935 |\n";
    cout << "\t\t\t\t\t\t 44 \t | 44 |\n";
    cout << "\t\t\t\t\t\t 37 \t | 37 |\n\n";

}


void main()
{
    setlocale(LC_ALL, "ru");
    int f;
    do {
        cout << "�������� ������� 1,2,3 ��� 0, ����� ��������� >>> "; cin >> f; cout << "\n";
        switch (f)
        {
        case 0:
            cout << "\n�� ��������!\n";
            break;
        case 1:
            a1();
            break;
        case 2:
            a2();
            break;
        case 3:
            a3();
            break;
        default:
            cout << "�� ����� �� ���������� ����� �������!!\n";
            break;
        }
    } while (f != 0);
}