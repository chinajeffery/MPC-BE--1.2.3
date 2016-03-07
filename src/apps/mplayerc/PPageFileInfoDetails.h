/*
 * $Id: PPageFileInfoDetails.h 1892 2013-01-17 00:26:05Z judelaw $
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

#include "../../SubPic/ISubPic.h"
#include <afxwin.h>


// CPPageFileInfoDetails dialog

class CPPageFileInfoDetails : public CPropertyPage
{
	DECLARE_DYNAMIC(CPPageFileInfoDetails)

private:
	CComPtr<IFilterGraph> m_pFG;
	CComPtr<ISubPicAllocatorPresenter> m_pCAP;

	HICON m_hIcon;

	void InitEncoding();

public:
	CPPageFileInfoDetails(CString fn, IFilterGraph* pFG, ISubPicAllocatorPresenter* pCAP);
	virtual ~CPPageFileInfoDetails();

	enum { IDD = IDD_FILEPROPDETAILS };

	CStatic m_icon;
	CString m_fn;
	CString m_type;
	CString m_size;
	CString m_time;
	CString m_res;
	CString m_created;
	CEdit   m_encoding;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);
	virtual BOOL OnInitDialog();
	virtual BOOL OnSetActive();
	virtual LRESULT OnSetPageFocus(WPARAM wParam, LPARAM lParam);
	afx_msg void OnSize(UINT nType, int cx, int cy);

	DECLARE_MESSAGE_MAP()

	CRect  m_rCrt;
};
