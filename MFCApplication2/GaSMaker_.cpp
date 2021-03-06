// GaSMaker_.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "GaSMaker_.h"
#include "afxdialogex.h"


// GaSMaker_ 对话框

IMPLEMENT_DYNAMIC(GaSMaker_, CDialogEx)

GaSMaker_::GaSMaker_(CWnd* pParent /*=nullptr*/)
	: CDialogEx(gasMaker, pParent)
{

}

GaSMaker_::~GaSMaker_()
{
}

void GaSMaker_::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(GaSMaker_, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &GaSMaker_::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &GaSMaker_::OnBnClickedButton1)
END_MESSAGE_MAP()


// GaSMaker_ 消息处理程序


void GaSMaker_::OnBnClickedButton2()
{
	CEdit* intBox1,* intBox2;
	intBox1  = (CEdit*)GetDlgItem(IDC_EDIT1);
	intBox2 = (CEdit*)GetDlgItem(IDC_EDIT2);
	CString str1;
	CString str2;
	intBox1->GetWindowText(str1);
	intBox2->GetWindowText(str2);
	int v = _ttoi(str1) - _ttoi(str2);
	if(v>7 && v<8)
		MessageBoxA(NULL, "所得电压正常", "电压", MB_OK);
	if (v==0)
		MessageBoxA(NULL, "电压异常，请检修SRSECU或线束", "电压", MB_OK);
		
}


void GaSMaker_::OnBnClickedButton1()
{
	CDialogEx::OnCancel();
}
