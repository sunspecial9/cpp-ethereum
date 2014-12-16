/*
	This file is part of cpp-ethereum.

	cpp-ethereum is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	cpp-ethereum is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with cpp-ethereum.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @file PeerProtocol.h
 * @author Alex Leverington <nessence@gmail.com>
 * @date 2014
 */

#pragma once

#include "PeerOverlay.h"

namespace dev
{
namespace p2p
{

/**
 * @brief P2P Protocol
 * Interface for implementing P2P protocols
 */
class PeerProtocol
{
	static std::string name() { return ""; }
	static h256 version() { return h256(); }
	
public:
	static CapDesc capDesc() { assert(!name().empty()); assert(version()); return std::make_pair(name(), version()); };
	
	
};

}
}
