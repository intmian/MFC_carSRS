#pragma once


// Repair0 对话框

class Repair0 : public CDialogEx
{
	DECLARE_DYNAMIC(Repair0)

public:
	Repair0(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Repair0();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = repair_0 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
