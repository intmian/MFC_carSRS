#pragma once


// Crash 对话框

class Crash : public CDialogEx
{
	DECLARE_DYNAMIC(Crash)

public:
	Crash(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Crash();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = crash_ };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnEnChangeEdit5();
};
