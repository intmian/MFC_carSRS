#pragma once


// ClogIn 对话框

class ClogIn : public CDialogEx
{
	DECLARE_DYNAMIC(ClogIn)

public:
	ClogIn(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~ClogIn();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PROPPAGE_SMALL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
