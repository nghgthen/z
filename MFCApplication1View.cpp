
// MFCApplication6View.cpp : implementation of the CMFCApplication6View class
//

#include "pch.h"
#include "framework.h"

// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MFCApplication6.h"
#endif

#include "MFCApplication6Doc.h"
#include "MFCApplication6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication6View

IMPLEMENT_DYNCREATE(CMFCApplication6View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication6View, CView)
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CMFCApplication6View construction/destruction

CMFCApplication6View::CMFCApplication6View() noexcept
{
	// TODO: add construction code here
	tron1 = CTron(100, 100, 50);
	background = CHcn(0, 0, 1000, 1000);
	robot = CRobot(100, 100, 20);
}

CMFCApplication6View::~CMFCApplication6View()
{
}

BOOL CMFCApplication6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMFCApplication6View drawing

void CMFCApplication6View::OnDraw(CDC* pDC)
{
	CMFCApplication6Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
	//CTron tron2(200, 200, 200);
	//CHcn hcn =tron1.xuathvnt();
	//pDC->Ellipse(hcn.x1, hcn.y1, hcn.x2, hcn.y2);
	CClientDC cDC(this);
	//tron1.draw(&pch);
	robot.draw(&cDC);
}



// CMFCApplication6View diagnostics

#ifdef _DEBUG
void CMFCApplication6View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication6Doc* CMFCApplication6View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication6Doc)));
	return (CMFCApplication6Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication6View message handlers


void CMFCApplication6View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: Add your message handler code here and/or call default

	if (nChar == 38)
	{
		//tron1.goUp(10);
		robot.goUP(10);

	}
	if (nChar == 39)
	{
		//tron1.goRight(10);
		robot.goRight(10);
	}
	if (nChar == 40)

	{
		//tron1.goDown(10);
		robot.goDown(10);
	}
	if (nChar == 37)
	{
		//tron1.goLeft(10);
		robot.goLeft(10);
	}

	CClientDC pdc(this);
	background.draw(&pdc);
	//tron1.draw(&pdc);
	robot.draw(&pdc);

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
