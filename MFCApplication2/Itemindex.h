#pragma once


// Itemindex 对话框

class Itemindex : public CDialogEx
{
	DECLARE_DYNAMIC(Itemindex)

public:
	Itemindex(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Itemindex();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = itemIndex };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
