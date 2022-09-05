#include <bits/stdc++.h>

using namespace std;

struct sv
{
    string hoten;
    int ngay, thang, nam;
    int gt;
    double diemHoa, diemToan, diemLy, dtb;
};

bool kiemTra(sv DS[], int n, string ten)
{
    bool kiemtra = true;
    for (int i = 0; i < n; i++)
    {
        if (DS[i].hoten == ten)
        {
            kiemtra = false;
        }
    }
    return kiemtra;
}

void nhap(sv DS[], int n)
{
    cout << "Nhap vao sinh vien thu " << n + 1 << ":" << endl;
    bool kiemtra = true;
    do
    {
        string ten;
        cin.ignore();
        cout << "Ho va ten: ";
        getline(cin, ten);
        kiemtra = kiemTra(DS, n, ten);
        if (kiemtra == true)
        {
            DS[n].hoten = ten;
        }
        else
        {
            cout << "Ten da co trong danh sach! " << endl;
        }
    } while (kiemtra != true);
    cout << "Ngay sinh: ";
    cin >> DS[n].ngay >> DS[n].thang >> DS[n].nam;
    cout << "Gioi tinh: ";
    cin >> DS[n].gt;
    cout << "Nhap diem hoa: ";
    cin >> DS[n].diemHoa;
    cout << "Nhap diem toan: ";
    cin >> DS[n].diemToan;
    cout << "Nhap diem ly: ";
    cin >> DS[n].diemLy;
}

void inDS(sv DS[], int n)
{
    cout << setw(10) << left << "STT" << setw(20) << left << "Ho va ten" << setw(18) << right << "Ngay sinh" << setw(15) << right << "Gioi tinh" << setw(16) << right << "Diem trung binh" << endl;
    cout << setfill('-');
    cout << setw(80) << "-" << endl;
    cout << setfill(' ');
    for (int i = 0; i < n; i++)
    {
        cout << setw(10) << left << i + 1 << setw(20) << left << DS[i].hoten << setw(12) << right << DS[i].ngay << "/" << DS[i].thang << "/" << DS[i].nam << setw(10) << right << ((DS[i].gt == 1) ? "Nam" : "Nu") << setw(20) << right << DS[i].dtb << endl;
    }
}

void dtB(sv DS[], int n)
{
    for (int i = 0; i < n; i++)
    {
        DS[i].dtb = (DS[i].diemHoa + DS[i].diemLy + DS[i].diemToan) / 3;
    }
}

void sxtenTang(sv DS[], int n)
{
    string tmp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (DS[i].hoten > DS[j].hoten)
            {
                tmp = DS[i].hoten;
                DS[i].hoten = DS[j].hoten;
                DS[j].hoten = tmp;
            }
        }
    }
}

void sxtenGiam(sv DS[], int n)
{
    string tmp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (DS[i].hoten < DS[j].hoten)
            {
                tmp = DS[i].hoten;
                DS[i].hoten = DS[j].hoten;
                DS[j].hoten = tmp;
            }
        }
    }
}

void sxdtbTang(sv DS[], int n)
{
    float tmp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (DS[i].dtb > DS[j].dtb)
            {
                tmp = DS[i].dtb;
                DS[i].dtb = DS[j].dtb;
                DS[j].dtb = tmp;
            }
        }
    }
}

void sxdtbGiam(sv DS[], int n)
{
    float tmp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (DS[i].dtb < DS[j].dtb)
            {
                tmp = DS[i].dtb;
                DS[i].dtb = DS[j].dtb;
                DS[j].dtb = tmp;
            }
        }
    }
}

void menu()
{
    system("cls");
    cout << "-----------------------------------------------" << endl;
    cout << "Nhan 1: De nhap vao danh sach sinh vien" << endl;
    cout << "Nhan 2: De sap xep danh sach theo ten thu tu tang dan" << endl;
    cout << "Nhan 3: De sap xep danh sach theo ten thu tu giam dan" << endl;
    cout << "Nhan 4: De sap xep danh sach theo diem thu tu tang dan" << endl;
    cout << "Nhan 5: De sap xep danh sach theo diem thu tu giam dan" << endl;
    cout << "Nhan 6: De tinh diem trung binh" << endl;
    cout << "Nhan 7: De in danh sach sinh vien" << endl;
    cout << "Nhan 0: De thoat khoi chuong trinh" << endl;
    cout << "-----------------------------------------------" << endl;
}
void luachon()
{
    int n = 0;
    sv s[100];

    int LC;
    do
    {

        menu();
        cout << "\nVui long lua chon thao tac: ";
        cin >> LC;
        switch (LC)
        {
        case 1:
            nhap(s, n);
            n++;
            cout << "Bam phim bat ky de tiep tuc..." << endl;
            system("pause");
            break;
        case 2:
            sxtenTang(s, n);
            cout << "Bam phim bat ky de tiep tuc..." << endl;
            system("pause");
            break;
        case 3:
            sxtenGiam(s, n);
            cout << "Bam phim bat ky de tiep tuc..." << endl;
            system("pause");
            break;
        case 4:
            sxdtbTang(s, n);
            cout << "Bam phim bat ky de tiep tuc..." << endl;
            system("pause");
            break;
        case 5:
            sxdtbGiam(s, n);
            cout << "Bam phim bat ky de tiep tuc..." << endl;
            system("pause");
            break;
        case 6:
            dtB(s, n);
            cout << "Bam phim bat ky de tiep tuc..." << endl;
            system("pause");
            break;
        case 7:
            inDS(s, n);
            cout << "Bam phim bat ky de tiep tuc..." << endl;
            system("pause");
            break;
        }
    } while (LC != 0);
}
int main()
{
    luachon();
    return 0;
}