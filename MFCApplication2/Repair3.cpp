// Repair3.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "Repair3.h"
#include "afxdialogex.h"
#include "Repair4.h"

// Repair3 对话框

IMPLEMENT_DYNAMIC(Repair3, CDialogEx)

Repair3::Repair3(CWnd* pParent /*=nullptr*/)
	: CDialogEx(repair_3, pParent)
{

}

Repair3::~Repair3()
{
}

void Repair3::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Repair3, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Repair3::OnBnClickedButton1)
END_MESSAGE_MAP()


// Repair3 消息处理程序


void Repair3::OnBnClickedButton1()
{
	CDialogEx::OnCancel();
	Repair4 r4;
	r4.DoModal();
}
