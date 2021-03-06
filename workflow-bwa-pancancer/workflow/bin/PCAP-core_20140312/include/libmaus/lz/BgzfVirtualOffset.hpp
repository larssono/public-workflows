/*
    libmaus
    Copyright (C) 2009-2013 German Tischler
    Copyright (C) 2011-2013 Genome Research Limited

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#if ! defined(LIBMAUS_BAMBAM_BGZFVIRTUALOFFSET_HPP)
#define LIBMAUS_BAMBAM_BGZFVIRTUALOFFSET_HPP

namespace libmaus
{
	namespace lz
	{
		struct BgzfVirtualOffset
		{
			uint64_t virtoffset;
			
			BgzfVirtualOffset() : virtoffset(0) {}
			BgzfVirtualOffset(uint64_t const rvirtoffset) : virtoffset(rvirtoffset) {}
			BgzfVirtualOffset(BgzfVirtualOffset const & o) : virtoffset(o.virtoffset) {}
			
			uint64_t getBlockOffset() const { return virtoffset >> 16; }
			uint64_t getSubOffset() const { return virtoffset & 0xFFFFULL; }
		};
	}
}
#endif