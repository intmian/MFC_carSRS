#pragma warning(disable : 4996) 
// ClogIn.cpp: 实现文件
//
#include "stdafx.h"
#include "MFCApplication2.h"
#include "ClogIn.h"
#include "afxdialogex.h"
#include <io.h>  
#include <string.h>
#include <comdef.h>
#include "indexDialog.h"
// ClogIn 对话框
#pragma warning(disable : 4996) 
IMPLEMENT_DYNAMIC(ClogIn, CDialogEx)

ClogIn::ClogIn(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_PROPPAGE_SMALL, pParent)
{

}

ClogIn::~ClogIn()
{
}

void ClogIn::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ClogIn, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &ClogIn::OnBnClickedButton1)
END_MESSAGE_MAP()


// ClogIn 消息处理程序


void ClogIn::OnBnClickedButton1()
{
	CEdit *nameEdit, *secretEdit;
	nameEdit = (CEdit*)GetDlgItem(IDC_EDIT1);
	secretEdit = (CEdit*)GetDlgItem(IDC_EDIT2);
	CString name, secret;
	nameEdit->GetWindowText(name);
	secretEdit->GetWindowText(secret);
	CDialogEx::OnOK();
	if (!_access("secret", 0))
	{
		CString s;
		CStdioFile file;
		file.Open(L"secret",CFile::modeReadWrite);
		file.ReadString(s);
		if (s == secret)
		{
			MessageBoxA(NULL, "欢迎你", "认证", MB_OK);
			indexDialog * id = new indexDialog();
			id->DoModal();
			CDialogEx::OnCancel();
		}
		else
		{
			MessageBoxA(NULL, "密码错误", "认证", MB_OK);
			exit(0);
		}
	}
	else 
	{
		MessageBoxA(NULL, "文件不存在,将调用初始化进行操作", "初始化", MB_OK);
		CStdioFile file;
		file.Open(L"secret", CFile::modeCreate | CFile::modeReadWrite | CFile::modeNoTruncate);
		file.WriteString(secret);
		indexDialog * id = new indexDialog();
		id->DoModal();
		CDialogEx::OnCancel();
	}
}
