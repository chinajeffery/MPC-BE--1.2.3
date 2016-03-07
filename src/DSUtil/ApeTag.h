/*
 * $Id: ApeTag.h 1615 2012-11-26 23:07:06Z aleksoid $
 *
 * Copyright (C) 2012 Alexandr Vodiannikov aka "Aleksoid1978" (Aleksoid1978@mail.ru)
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

#include "GolombBuffer.h"

//
// ApeTagItem class
//

class CApeTagItem
{
public:
	enum ApeType {
		APE_TYPE_STRING	= 0,
		APE_TYPE_BINARY	= 1,
	};

	CApeTagItem();
	virtual ~CApeTagItem();

	// load
	bool Load(CGolombBuffer &gb);

	CString GetKey()	const { return m_key; }
	CString GetValue()	const { return m_value; }
	BYTE* GetData()		const { return m_buf; }
	size_t GetDataLen()	const { return m_len; }
	ApeType GetType()	const { return m_type; }

protected:
	CString		m_key;

	// text value
	CString		m_value;		

	// binary value
	BYTE		*m_buf;
	size_t		m_len;

	ApeType		m_type;
};

//
// ApeTag class
//

class CAPETag
{
protected:
	size_t m_TagSize;
	size_t m_TagFields;

public:
	CAtlList<CApeTagItem*>	TagItems;

	CAPETag();
	virtual ~CAPETag();

	void Clear();

	// tag reading
	bool ReadFooter(BYTE *buf, size_t len);
	bool ReadTags(BYTE *buf, size_t len);

	size_t GetTagSize() const { return m_TagSize; }
	CApeTagItem* Find(CString key);
};
