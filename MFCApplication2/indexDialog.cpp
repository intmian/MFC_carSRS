// indexDialog.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "indexDialog.h"
#include "afxdialogex.h"
#include "knowledgeDialog.h"
#include "ThingOfCar.h"
#include "Repair0.h"
#include "Itemindex.h"
// indexDialog 对话框
IMPLEMENT_DYNAMIC(indexDialog, CDialogEx)

indexDialog::indexDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_PROPPAGE_MEDIUM, pParent)
{
}

indexDialog::~indexDialog()
{
}

void indexDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(indexDialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON5, &indexDialog::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON2, &indexDialog::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &indexDialog::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON4, &indexDialog::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON3, &indexDialog::OnBnClickedButton3)
END_MESSAGE_MAP()


// indexDialog 消息处理程序


void indexDialog::OnBnClickedButton5()
{
	CDialogEx::OnOK();
}


void indexDialog::OnBnClickedButton2()
{
	Itemindex i;
	i.DoModal();
}


void indexDialog::OnBnClickedButton1()
{
	knowledgeDialog  Dlg;
	Dlg.DoModal();
}


void indexDialog::OnBnClickedButton4()
{
	ThingOfCar toc;
	toc.DoModal();
}


void indexDialog::OnBnClickedButton3()
{
	Repair0 r0;
	r0.DoModal();
}
