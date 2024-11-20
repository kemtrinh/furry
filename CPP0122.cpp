#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string ten, lop, sn;
    float gpa;
};

void input(SinhVien &A)
{
    getline(cin, A.ten);
    getline(cin, A.lop);
    getline(cin, A.sn);
    cin >> A.gpa;
    cin.ignore();
}

void nhap(SinhVien ds[], int n)
{
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        input(ds[i]);
    }
}

void in(SinhVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (ds[i].sn[1] == '/')
            ds[i].sn.insert(0, "0");
        if (ds[i].sn[4] == '/')
            ds[i].sn.insert(3, "0");
        string s;
        if (i < 9)
            s = "B20DCCN00";
        else
            s = "B20DCCN0";
        cout << s << i + 1 << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].sn << " " << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}