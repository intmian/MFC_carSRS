#pragma once


// picture1 对话框

class picture1 : public CDialogEx
{
	DECLARE_DYNAMIC(picture1)

public:
	picture1(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~picture1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = picture1_id };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
