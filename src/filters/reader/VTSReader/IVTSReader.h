/*
 * $Id: IVTSReader.h 2617 2013-05-04 00:31:35Z aleksoid $
 *
 * (C) 2011-2013 see Authors.txt
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

interface __declspec(uuid("CFCFBA29-5E0D-4031-BC58-407291F56C11"))
IVTSReader :
public IUnknown {
	STDMETHOD_(REFERENCE_TIME, GetDuration()) = 0;
	STDMETHOD_(AV_Rational, GetAspect()) = 0;
};