#pragma once


// Repair5 对话框

class Repair5 : public CDialogEx
{
	DECLARE_DYNAMIC(Repair5)

public:
	Repair5(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Repair5();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = repair_5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
