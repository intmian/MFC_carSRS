// picture1.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "picture1.h"
#include "afxdialogex.h"


// picture1 对话框

IMPLEMENT_DYNAMIC(picture1, CDialogEx)



picture1::~picture1()
{
}

void picture1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(picture1, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &picture1::OnBnClickedButton1)
END_MESSAGE_MAP()


// picture1 消息处理程序


void picture1::OnBnClickedButton1()
{
	CDialogEx::OnCancel();
}
