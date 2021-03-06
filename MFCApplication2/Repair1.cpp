// Repair1.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "Repair1.h"
#include "afxdialogex.h"
#include "Repair2.h"

// Repair1 对话框

IMPLEMENT_DYNAMIC(Repair1, CDialogEx)

Repair1::Repair1(CWnd* pParent /*=nullptr*/)
	: CDialogEx(repair_1, pParent)
{

}

Repair1::~Repair1()
{
}

void Repair1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Repair1, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &Repair1::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &Repair1::OnBnClickedButton1)
END_MESSAGE_MAP()


// Repair1 消息处理程序


void Repair1::OnBnClickedButton2()
{
	CDialogEx::OnCancel();
	Repair2 r2;
	r2.DoModal();
}


void Repair1::OnBnClickedButton1()
{
	CEdit* intBox;
	intBox = (CEdit*)GetDlgItem(IDC_EDIT1);
	CString str;
	intBox->GetWindowText(str);
	int v = _ttoi(str);
	if (v > 12)
		MessageBoxA(NULL, "电压过高", "电压", MB_OK);
	else if (v < 9)
		MessageBoxA(NULL, "电源供电不足", "电压", MB_OK);
	else
		MessageBoxA(NULL, "电压正常", "电压", MB_OK);
}
