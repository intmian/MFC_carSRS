#pragma once


// Repair4 对话框

class Repair4 : public CDialogEx
{
	DECLARE_DYNAMIC(Repair4)

public:
	Repair4(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Repair4();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = repair_4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
