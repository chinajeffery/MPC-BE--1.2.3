/*
 * $Id: IBufferInfo.h 1775 2013-01-05 14:19:34Z szl $
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

interface __declspec(uuid("46070104-1318-4A82-8822-E99AB7CD15C1"))
IBufferInfo :
public IUnknown {
	STDMETHOD_(int, GetCount()) = 0;
	STDMETHOD(GetStatus(int i, int& samples, int& size)) = 0;
	STDMETHOD_(DWORD, GetPriority()) = 0;
};