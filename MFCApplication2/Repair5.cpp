// Repair5.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "Repair5.h"
#include "afxdialogex.h"


// Repair5 对话框

IMPLEMENT_DYNAMIC(Repair5, CDialogEx)

Repair5::Repair5(CWnd* pParent /*=nullptr*/)
	: CDialogEx(repair_5, pParent)
{

}

Repair5::~Repair5()
{
}

void Repair5::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Repair5, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Repair5::OnBnClickedButton1)
END_MESSAGE_MAP()


// Repair5 消息处理程序


void Repair5::OnBnClickedButton1()
{
	CDialogEx::OnCancel();
}