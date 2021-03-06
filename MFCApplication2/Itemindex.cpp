// Itemindex.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "Itemindex.h"
#include "afxdialogex.h"
#include "GaSMaker_.h"
#include "Crash.h"
#include "Secret.h"

// Itemindex 对话框

IMPLEMENT_DYNAMIC(Itemindex, CDialogEx)

Itemindex::Itemindex(CWnd* pParent /*=nullptr*/)
	: CDialogEx(itemIndex, pParent)
{

}

Itemindex::~Itemindex()
{
}

void Itemindex::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Itemindex, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON6, &Itemindex::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON5, &Itemindex::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON3, &Itemindex::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &Itemindex::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON1, &Itemindex::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Itemindex::OnBnClickedButton2)
END_MESSAGE_MAP()


// Itemindex 消息处理程序


void Itemindex::OnBnClickedButton6()
{
	CDialogEx::OnCancel();
}


void Itemindex::OnBnClickedButton5()
{
	GaSMaker_ gasMaker_;
	gasMaker_.DoModal();
}


void Itemindex::OnBnClickedButton3()
{
	Secret c;
	c.DoModal();
}


void Itemindex::OnBnClickedButton4()
{
	Secret c;
	c.DoModal();
}


void Itemindex::OnBnClickedButton1()
{
	Crash c;
	c.DoModal();
}


void Itemindex::OnBnClickedButton2()
{
	Crash c;
	c.DoModal();
}
