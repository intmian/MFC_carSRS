// picture2.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "picture2.h"
#include "afxdialogex.h"


// picture2 对话框

IMPLEMENT_DYNAMIC(picture2, CDialogEx)




picture2::~picture2()
{
}

void picture2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(picture2, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &picture2::OnBnClickedButton1)
END_MESSAGE_MAP()


// picture2 消息处理程序


void picture2::OnBnClickedButton1()
{
	CDialogEx::OnCancel();
}
