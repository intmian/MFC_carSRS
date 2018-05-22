// Repair2.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "Repair2.h"
#include "afxdialogex.h"
#include "Repair3.h"

// Repair2 对话框

IMPLEMENT_DYNAMIC(Repair2, CDialogEx)

Repair2::Repair2(CWnd* pParent /*=nullptr*/)
	: CDialogEx(repair_2, pParent)
{

}

Repair2::~Repair2()
{
}

void Repair2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Repair2, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &Repair2::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &Repair2::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT1, &Repair2::OnEnChangeEdit1)
END_MESSAGE_MAP()


// Repair2 消息处理程序


void Repair2::OnBnClickedButton2()
{	
	CDialogEx::OnCancel();
	Repair3 r3;
	r3.DoModal();
}


void Repair2::OnBnClickedButton1()
{
	CEdit* intBox;
	intBox = (CEdit*)GetDlgItem(IDC_EDIT1);
	CString str;
	intBox->GetWindowText(str);
	int v = _ttoi(str);
	if (v > 12)
		MessageBoxA(NULL, "电路故障请检修", "电压", MB_OK);
	else if(v < 9)
		MessageBoxA(NULL, "电路故障请检修", "电压", MB_OK);
	else
		MessageBoxA(NULL, "电压正常", "电压", MB_OK);
}


void Repair2::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
