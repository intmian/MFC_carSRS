#pragma once


// indexDialog 对话框

class indexDialog : public CDialogEx
{
	DECLARE_DYNAMIC(indexDialog)

public:
	indexDialog(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~indexDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PROPPAGE_MEDIUM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton3();
};
