#pragma once


// Repair1 对话框

class Repair1 : public CDialogEx
{
	DECLARE_DYNAMIC(Repair1)

public:
	Repair1(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Repair1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = repair_1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
};
