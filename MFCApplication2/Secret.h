#pragma once


// Secret 对话框

class Secret : public CDialogEx
{
	DECLARE_DYNAMIC(Secret)

public:
	Secret(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Secret();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = secret_ };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton4();
};
