#pragma once


// knowledgeDialog 对话框

class knowledgeDialog : public CDialogEx
{
	DECLARE_DYNAMIC(knowledgeDialog)

public:
	knowledgeDialog(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~knowledgeDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = knowledgeLib };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
};
