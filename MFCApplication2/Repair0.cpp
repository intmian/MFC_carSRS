// Repair0.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "Repair0.h"
#include "afxdialogex.h"
#include "Repair1.h"

// Repair0 对话框

IMPLEMENT_DYNAMIC(Repair0, CDialogEx)

Repair0::Repair0(CWnd* pParent /*=nullptr*/)
	: CDialogEx(repair_0, pParent)
{

}

Repair0::~Repair0()
{
}

void Repair0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Repair0, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Repair0::OnBnClickedButton1)
END_MESSAGE_MAP()


// Repair0 消息处理程序


void Repair0::OnBnClickedButton1()
{
	CDialogEx::OnCancel();
	Repair1 r1;
	r1.DoModal();
}
