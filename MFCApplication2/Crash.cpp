// Crash.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "Crash.h"
#include "afxdialogex.h"


// Crash 对话框

IMPLEMENT_DYNAMIC(Crash, CDialogEx)

Crash::Crash(CWnd* pParent /*=nullptr*/)
	: CDialogEx(crash_, pParent)
{

}

Crash::~Crash()
{
}

void Crash::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Crash, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON4, &Crash::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &Crash::OnBnClickedButton5)
	ON_EN_CHANGE(IDC_EDIT5, &Crash::OnEnChangeEdit5)
END_MESSAGE_MAP()


// Crash 消息处理程序


void Crash::OnBnClickedButton4()
{
	CDialogEx::OnCancel();
}


void Crash::OnBnClickedButton5()
{
	CEdit* intBox1, *intBox2, *intBox3, *intBox4,*intBox5;
	intBox1 = (CEdit*)GetDlgItem(IDC_EDIT1);
	intBox2 = (CEdit*)GetDlgItem(IDC_EDIT2);
	intBox3 = (CEdit*)GetDlgItem(IDC_EDIT3);
	intBox4 = (CEdit*)GetDlgItem(IDC_EDIT4);
	intBox5 = (CEdit*)GetDlgItem(IDC_EDIT5);
	CString str1,str2,str3,str4,str5;
	intBox1->GetWindowText(str1);
	float v1 = _ttof(str1);
	intBox1->GetWindowText(str2);
	float v2 = _ttof(str2);
	intBox1->GetWindowText(str3);
	int v3 = _ttoi(str3);
	intBox1->GetWindowText(str4);
	int v4 = _ttoi(str4);
	intBox5->GetWindowText(str5);
	int v5 = _ttoi(str5);
	if(v1<1&&v1>0)
		MessageBoxA(NULL, "SRS线路出现故障，请更换", "自检", MB_OK);
	if(v1==0)
		MessageBoxA(NULL, "测量值正常", "自检", MB_OK);
	if (v2 < 1 && v2>0)
		MessageBoxA(NULL, "SRS线路出现故障，请更换", "自检", MB_OK);
	if (v2 == 0)
		MessageBoxA(NULL, "测量值正常", "自检", MB_OK);
	if (v3 == 0)
		MessageBoxA(NULL, "传感器断路，请更换", "自检", MB_OK);
	if (v3 > 0 && v3 < 700)
		MessageBoxA(NULL, "传感器本身故障", "自检", MB_OK);
	if (v3 > 755 && v3 < 885)
		MessageBoxA(NULL, "测量值正常", "自检", MB_OK);
	if (v3 >= 885)
		MessageBoxA(NULL, "传感器线路故障请重试", "自检", MB_OK);
}


void Crash::OnEnChangeEdit5()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
