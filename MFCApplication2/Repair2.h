#pragma once


// Repair2 对话框

class Repair2 : public CDialogEx
{
	DECLARE_DYNAMIC(Repair2)

public:
	Repair2(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Repair2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = repair_2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit1();
};
