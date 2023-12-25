
// MFCApplication6View.h : interface of the CMFCApplication6View class
//

#pragma once
#include "CTron.h"
#include "CHcn.h"
#include "CRobot.h"
class CMFCApplication6View : public CView
{
protected: // create from serialization only
	CMFCApplication6View() noexcept;
	DECLARE_DYNCREATE(CMFCApplication6View)

	// Attributes
public:
	CMFCApplication6Doc* GetDocument() const;

	// Operations
public:

	CTron tron1;
	CHcn background;
	CRobot robot;
	// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

	// Implementation
public:
	virtual ~CMFCApplication6View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

	// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // debug version in MFCApplication6View.cpp
inline CMFCApplication6Doc* CMFCApplication6View::GetDocument() const
{
	return reinterpret_cast<CMFCApplication6Doc*>(m_pDocument);
}
#endif

