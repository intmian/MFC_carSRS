#pragma once


// ThingOfCar 对话框

class ThingOfCar : public CDialogEx
{
	DECLARE_DYNAMIC(ThingOfCar)

public:
	ThingOfCar(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~ThingOfCar();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PROPPAGE_LARGE1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton5();
};
