/*
 * $Id: FavoriteAddDlg.h 1775 2013-01-05 14:19:34Z szl $
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

#include <ResizableLib/ResizableDialog.h>

// CFavoriteAddDlg dialog

class CFavoriteAddDlg : public CCmdUIDialog
{
	DECLARE_DYNAMIC(CFavoriteAddDlg)

private:
	CString m_shortname, m_fullname;

public:
	CFavoriteAddDlg(CString shortname, CString fullname, CWnd* pParent = NULL);
	virtual ~CFavoriteAddDlg();

	enum { IDD = IDD_FAVADD };

	CComboBox m_namectrl;
	CString m_name;
	BOOL m_bRememberPos;
	BOOL m_bRelativeDrive;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnUpdateOk(CCmdUI* pCmdUI);
protected:
	virtual void OnOK();
};
