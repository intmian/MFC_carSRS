// Repair4.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "Repair4.h"
#include "afxdialogex.h"
#include "Repair5.h"

// Repair4 对话框

IMPLEMENT_DYNAMIC(Repair4, CDialogEx)

Repair4::Repair4(CWnd* pParent /*=nullptr*/)
	: CDialogEx(repair_4, pParent)
{

}

Repair4::~Repair4()
{
}

void Repair4::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Repair4, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Repair4::OnBnClickedButton1)
END_MESSAGE_MAP()


// Repair4 消息处理程序


void Repair4::OnBnClickedButton1()
{
	CDialogEx::OnCancel();
	Repair5 r5;
	r5.DoModal();
}
