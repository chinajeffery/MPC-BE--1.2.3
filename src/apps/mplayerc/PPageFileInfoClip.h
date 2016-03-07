/*
 * $Id: PPageFileInfoClip.h 2121 2013-02-20 05:36:19Z aleksoid $
 *
 * (C) 2003-2006 Gabest
 * (C) 2006-2013 see Authors.txt
 *
 * This file is part of MPC-BE.
 *
 * MPC-BE is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * MPC-BE is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

#include <afxwin.h>


// CPPageFileInfoClip dialog

class CPPageFileInfoClip : public CPropertyPage
{
	DECLARE_DYNAMIC(CPPageFileInfoClip)

private:
	CComPtr<IFilterGraph> m_pFG;
	HICON m_hIcon;

public:
	CPPageFileInfoClip(CString fn, IFilterGraph* pFG);
	virtual ~CPPageFileInfoClip();

	enum { IDD = IDD_FILEPROPCLIP };

	CStatic m_icon;
	CString m_fn;
	CString m_clip;
	CString m_author;
	CString m_album;
	CString m_copyright;
	CString m_rating;
	CString m_location_str;
	CEdit   m_location;
	CEdit   m_desc;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);
	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL OnSetActive();
	virtual LRESULT OnSetPageFocus(WPARAM wParam, LPARAM lParam);
	afx_msg void OnSize(UINT nType, int cx, int cy);

	DECLARE_MESSAGE_MAP()

	CRect  m_rCrt;
};
