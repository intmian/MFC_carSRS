#pragma once


// Repair3 对话框

class Repair3 : public CDialogEx
{
	DECLARE_DYNAMIC(Repair3)

public:
	Repair3(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Repair3();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = repair_3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
