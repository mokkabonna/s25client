// Copyright (c) 2005 - 2017 Settlers Freaks (sf-team at siedler25.org)
//
// This file is part of Return To The Roots.
//
// Return To The Roots is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Return To The Roots is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Return To The Roots. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include "AddonBool.h"
#include "mygettext/mygettext.h"

/**
 *  Addon for a Charburner
 */
class AddonIncreaseMineSupply : public AddonBool
{
public:
    AddonIncreaseMineSupply()
        : AddonBool(AddonId::MINE_SUPPLY, AddonGroup::Economy, _("Increase supply in mines"),
            _("Mines will not always consume resources"))
    {}
};


/**
 *  Addon allows users to adjust the percentage of trees that have the recurring spawn animal event
 */
class AddonMineSupplyIncrease : public AddonList
{
public:
    AddonMineSupplyIncrease()
        : AddonList(AddonId::MINE_SUPPLY_INCREASE, AddonGroup::Military, _("Adjust mine supply increase ratio"),
            _("Adjust how often the mines will consume resources. Does not have any effect unless 'Increase supply in mines' is enabled"),
            {
              _("50%"),
              _("33%"),
              _("25%"),
              _("100%"),
            })
    {}
};