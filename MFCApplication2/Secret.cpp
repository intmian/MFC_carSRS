// Secret.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "Secret.h"
#include "afxdialogex.h"


// Secret 对话框

IMPLEMENT_DYNAMIC(Secret, CDialogEx)

Secret::Secret(CWnd* pParent /*=nullptr*/)
	: CDialogEx(secret_, pParent)
{

}

Secret::~Secret()
{
}

void Secret::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Secret, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON5, &Secret::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON4, &Secret::OnBnClickedButton4)
END_MESSAGE_MAP()


// Secret 消息处理程序


void Secret::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
}


void Secret::OnBnClickedButton4()
{
	CDialogEx::OnCancel();
}
