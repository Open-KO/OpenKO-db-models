#include "EbenezerBinder.h"
#include <Ebenezer/model/EbenezerModel.h>
#include <nanodbc/nanodbc.h>

namespace ebenezer_binder
{
	/// \brief Returns the binding function associated with the column name
	const Battle::BindingsMapType& Battle::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &Battle::BindIndex},
			{"byNation", &Battle::BindNation}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Index
	void Battle::BindIndex(ebenezer_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to Nation
	void Battle::BindNation(ebenezer_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	/// \brief Returns the binding function associated with the column name
	const Coefficient::BindingsMapType& Coefficient::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sClass", &Coefficient::BindClassId},
			{"ShortSword", &Coefficient::BindShortSword},
			{"Sword", &Coefficient::BindSword},
			{"Axe", &Coefficient::BindAxe},
			{"Club", &Coefficient::BindClub},
			{"Spear", &Coefficient::BindSpear},
			{"Pole", &Coefficient::BindPole},
			{"Staff", &Coefficient::BindStaff},
			{"Bow", &Coefficient::BindBow},
			{"Hp", &Coefficient::BindHitPoint},
			{"Mp", &Coefficient::BindManaPoint},
			{"Sp", &Coefficient::BindSp},
			{"Ac", &Coefficient::BindArmor},
			{"Hitrate", &Coefficient::BindHitRate},
			{"Evasionrate", &Coefficient::BindEvasionrate}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ClassId
	void Coefficient::BindClassId(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ClassId);
	}

	/// \brief Binds a result's column to ShortSword
	void Coefficient::BindShortSword(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.ShortSword);
	}

	/// \brief Binds a result's column to Sword
	void Coefficient::BindSword(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Sword);
	}

	/// \brief Binds a result's column to Axe
	void Coefficient::BindAxe(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Axe);
	}

	/// \brief Binds a result's column to Club
	void Coefficient::BindClub(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Club);
	}

	/// \brief Binds a result's column to Spear
	void Coefficient::BindSpear(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Spear);
	}

	/// \brief Binds a result's column to Pole
	void Coefficient::BindPole(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Pole);
	}

	/// \brief Binds a result's column to Staff
	void Coefficient::BindStaff(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Staff);
	}

	/// \brief Binds a result's column to Bow
	void Coefficient::BindBow(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Bow);
	}

	/// \brief Binds a result's column to HitPoint
	void Coefficient::BindHitPoint(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.HitPoint);
	}

	/// \brief Binds a result's column to ManaPoint
	void Coefficient::BindManaPoint(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.ManaPoint);
	}

	/// \brief Binds a result's column to Sp
	void Coefficient::BindSp(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Sp);
	}

	/// \brief Binds a result's column to Armor
	void Coefficient::BindArmor(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Armor);
	}

	/// \brief Binds a result's column to HitRate
	void Coefficient::BindHitRate(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.HitRate);
	}

	/// \brief Binds a result's column to Evasionrate
	void Coefficient::BindEvasionrate(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Evasionrate);
	}

	/// \brief Returns the binding function associated with the column name
	const CouponSerialList::BindingsMapType& CouponSerialList::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nIndex", &CouponSerialList::BindIndex},
			{"strSerialNum", &CouponSerialList::BindSerialNum},
			{"nItemNum", &CouponSerialList::BindItemNumber},
			{"sItemCount", &CouponSerialList::BindItemCount}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Index
	void CouponSerialList::BindIndex(ebenezer_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to SerialNum
	void CouponSerialList::BindSerialNum(ebenezer_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.SerialNum);
	}

	/// \brief Binds a result's column to ItemNumber
	void CouponSerialList::BindItemNumber(ebenezer_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemNumber);
	}

	/// \brief Binds a result's column to ItemCount
	void CouponSerialList::BindItemCount(ebenezer_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ItemCount);
	}

	/// \brief Returns the binding function associated with the column name
	const Event::BindingsMapType& Event::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"ZoneNum", &Event::BindZoneNumber},
			{"EventNum", &Event::BindEventNumber},
			{"Type", &Event::BindEventType},
			{"Exec1", &Event::BindExecute1},
			{"Exec2", &Event::BindExecute2},
			{"Exec3", &Event::BindExecute3},
			{"Exec4", &Event::BindExecute4},
			{"Exec5", &Event::BindExecute5}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ZoneNumber
	void Event::BindZoneNumber(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ZoneNumber);
	}

	/// \brief Binds a result's column to EventNumber
	void Event::BindEventNumber(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EventNumber);
	}

	/// \brief Binds a result's column to EventType
	void Event::BindEventType(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.EventType);
	}

	/// \brief Binds a result's column to Execute1
	void Event::BindExecute1(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Execute1);
	}

	/// \brief Binds a result's column to Execute2
	void Event::BindExecute2(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Execute2);
	}

	/// \brief Binds a result's column to Execute3
	void Event::BindExecute3(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Execute3);
	}

	/// \brief Binds a result's column to Execute4
	void Event::BindExecute4(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Execute4);
	}

	/// \brief Binds a result's column to Execute5
	void Event::BindExecute5(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Execute5);
	}

	/// \brief Returns the binding function associated with the column name
	const EventTrigger::BindingsMapType& EventTrigger::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nIndex", &EventTrigger::BindIndex},
			{"bNpcType", &EventTrigger::BindNpcType},
			{"sNpcID", &EventTrigger::BindNpcId},
			{"nTriggerNum", &EventTrigger::BindTriggerNumber}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Index
	void EventTrigger::BindIndex(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to NpcType
	void EventTrigger::BindNpcType(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NpcType);
	}

	/// \brief Binds a result's column to NpcId
	void EventTrigger::BindNpcId(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NpcId);
	}

	/// \brief Binds a result's column to TriggerNumber
	void EventTrigger::BindTriggerNumber(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.TriggerNumber);
	}

	/// \brief Returns the binding function associated with the column name
	const Home::BindingsMapType& Home::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"Nation", &Home::BindNation},
			{"ElmoZoneX", &Home::BindElmoZoneX},
			{"ElmoZoneZ", &Home::BindElmoZoneZ},
			{"ElmoZoneLX", &Home::BindElmoZoneLX},
			{"ElmoZoneLZ", &Home::BindElmoZoneLZ},
			{"KarusZoneX", &Home::BindKarusZoneX},
			{"KarusZoneZ", &Home::BindKarusZoneZ},
			{"KarusZoneLX", &Home::BindKarusZoneLX},
			{"KarusZoneLZ", &Home::BindKarusZoneLZ},
			{"FreeZoneX", &Home::BindFreeZoneX},
			{"FreeZoneZ", &Home::BindFreeZoneZ},
			{"FreeZoneLX", &Home::BindFreeZoneLX},
			{"FreeZoneLZ", &Home::BindFreeZoneLZ},
			{"BattleZoneX", &Home::BindBattleZoneX},
			{"BattleZoneZ", &Home::BindBattleZoneZ},
			{"BattleZoneLX", &Home::BindBattleZoneLX},
			{"BattleZoneLZ", &Home::BindBattleZoneLZ},
			{"BattleZone2X", &Home::BindBattleZone2X},
			{"BattleZone2Z", &Home::BindBattleZone2Z},
			{"BattleZone2LX", &Home::BindBattleZone2LX},
			{"BattleZone2LZ", &Home::BindBattleZone2LZ}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Nation
	void Home::BindNation(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	/// \brief Binds a result's column to ElmoZoneX
	void Home::BindElmoZoneX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ElmoZoneX);
	}

	/// \brief Binds a result's column to ElmoZoneZ
	void Home::BindElmoZoneZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ElmoZoneZ);
	}

	/// \brief Binds a result's column to ElmoZoneLX
	void Home::BindElmoZoneLX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ElmoZoneLX);
	}

	/// \brief Binds a result's column to ElmoZoneLZ
	void Home::BindElmoZoneLZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ElmoZoneLZ);
	}

	/// \brief Binds a result's column to KarusZoneX
	void Home::BindKarusZoneX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.KarusZoneX);
	}

	/// \brief Binds a result's column to KarusZoneZ
	void Home::BindKarusZoneZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.KarusZoneZ);
	}

	/// \brief Binds a result's column to KarusZoneLX
	void Home::BindKarusZoneLX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.KarusZoneLX);
	}

	/// \brief Binds a result's column to KarusZoneLZ
	void Home::BindKarusZoneLZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.KarusZoneLZ);
	}

	/// \brief Binds a result's column to FreeZoneX
	void Home::BindFreeZoneX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.FreeZoneX);
	}

	/// \brief Binds a result's column to FreeZoneZ
	void Home::BindFreeZoneZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.FreeZoneZ);
	}

	/// \brief Binds a result's column to FreeZoneLX
	void Home::BindFreeZoneLX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FreeZoneLX);
	}

	/// \brief Binds a result's column to FreeZoneLZ
	void Home::BindFreeZoneLZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FreeZoneLZ);
	}

	/// \brief Binds a result's column to BattleZoneX
	void Home::BindBattleZoneX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BattleZoneX);
	}

	/// \brief Binds a result's column to BattleZoneZ
	void Home::BindBattleZoneZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BattleZoneZ);
	}

	/// \brief Binds a result's column to BattleZoneLX
	void Home::BindBattleZoneLX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BattleZoneLX);
	}

	/// \brief Binds a result's column to BattleZoneLZ
	void Home::BindBattleZoneLZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BattleZoneLZ);
	}

	/// \brief Binds a result's column to BattleZone2X
	void Home::BindBattleZone2X(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BattleZone2X);
	}

	/// \brief Binds a result's column to BattleZone2Z
	void Home::BindBattleZone2Z(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BattleZone2Z);
	}

	/// \brief Binds a result's column to BattleZone2LX
	void Home::BindBattleZone2LX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BattleZone2LX);
	}

	/// \brief Binds a result's column to BattleZone2LZ
	void Home::BindBattleZone2LZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BattleZone2LZ);
	}

	/// \brief Returns the binding function associated with the column name
	const Item::BindingsMapType& Item::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"Num", &Item::BindID},
			{"strName", &Item::BindName},
			{"Kind", &Item::BindKind},
			{"Slot", &Item::BindSlot},
			{"Race", &Item::BindRace},
			{"Class", &Item::BindClassId},
			{"Damage", &Item::BindDamage},
			{"Delay", &Item::BindDelay},
			{"Range", &Item::BindRange},
			{"Weight", &Item::BindWeight},
			{"Duration", &Item::BindDurability},
			{"BuyPrice", &Item::BindBuyPrice},
			{"SellPrice", &Item::BindSellPrice},
			{"Ac", &Item::BindArmor},
			{"Countable", &Item::BindCountable},
			{"Effect1", &Item::BindMagicEffect},
			{"Effect2", &Item::BindSpecialEffect},
			{"ReqLevel", &Item::BindMinLevel},
			{"ReqRank", &Item::BindRequiredRank},
			{"ReqTitle", &Item::BindRequiredTitle},
			{"ReqStr", &Item::BindRequiredStrength},
			{"ReqSta", &Item::BindRequiredStamina},
			{"ReqDex", &Item::BindRequiredDexterity},
			{"ReqIntel", &Item::BindRequiredIntelligence},
			{"ReqCha", &Item::BindRequiredCharisma},
			{"SellingGroup", &Item::BindSellingGroup},
			{"ItemType", &Item::BindType},
			{"Hitrate", &Item::BindHitRate},
			{"Evasionrate", &Item::BindEvasionRate},
			{"DaggerAc", &Item::BindDaggerArmor},
			{"SwordAc", &Item::BindSwordArmor},
			{"MaceAc", &Item::BindMaceArmor},
			{"AxeAc", &Item::BindAxeArmor},
			{"SpearAc", &Item::BindSpearArmor},
			{"BowAc", &Item::BindBowArmor},
			{"FireDamage", &Item::BindFireDamage},
			{"IceDamage", &Item::BindIceDamage},
			{"LightningDamage", &Item::BindLightningDamage},
			{"PoisonDamage", &Item::BindPoisonDamage},
			{"HPDrain", &Item::BindHpDrain},
			{"MPDamage", &Item::BindMpDamage},
			{"MPDrain", &Item::BindMpDrain},
			{"MirrorDamage", &Item::BindMirrorDamage},
			{"Droprate", &Item::BindDropRate},
			{"StrB", &Item::BindStrengthBonus},
			{"StaB", &Item::BindStaminaBonus},
			{"DexB", &Item::BindDexterityBonus},
			{"IntelB", &Item::BindIntelligenceBonus},
			{"ChaB", &Item::BindCharismaBonus},
			{"MaxHpB", &Item::BindMaxHpBonus},
			{"MaxMpB", &Item::BindMaxMpBonus},
			{"FireR", &Item::BindFireResist},
			{"ColdR", &Item::BindColdResist},
			{"LightningR", &Item::BindLightningResist},
			{"MagicR", &Item::BindMagicResist},
			{"PoisonR", &Item::BindPoisonResist},
			{"CurseR", &Item::BindCurseResist}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ID
	void Item::BindID(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Name
	void Item::BindName(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Kind
	void Item::BindKind(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Kind);
	}

	/// \brief Binds a result's column to Slot
	void Item::BindSlot(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Slot);
	}

	/// \brief Binds a result's column to Race
	void Item::BindRace(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Race);
	}

	/// \brief Binds a result's column to ClassId
	void Item::BindClassId(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ClassId);
	}

	/// \brief Binds a result's column to Damage
	void Item::BindDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Damage);
	}

	/// \brief Binds a result's column to Delay
	void Item::BindDelay(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Delay);
	}

	/// \brief Binds a result's column to Range
	void Item::BindRange(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Range);
	}

	/// \brief Binds a result's column to Weight
	void Item::BindWeight(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Weight);
	}

	/// \brief Binds a result's column to Durability
	void Item::BindDurability(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Durability);
	}

	/// \brief Binds a result's column to BuyPrice
	void Item::BindBuyPrice(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BuyPrice);
	}

	/// \brief Binds a result's column to SellPrice
	void Item::BindSellPrice(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.SellPrice);
	}

	/// \brief Binds a result's column to Armor
	void Item::BindArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Armor);
	}

	/// \brief Binds a result's column to Countable
	void Item::BindCountable(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Countable);
	}

	/// \brief Binds a result's column to MagicEffect
	void Item::BindMagicEffect(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.MagicEffect);
	}

	/// \brief Binds a result's column to SpecialEffect
	void Item::BindSpecialEffect(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.SpecialEffect);
	}

	/// \brief Binds a result's column to MinLevel
	void Item::BindMinLevel(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MinLevel);
	}

	/// \brief Binds a result's column to RequiredRank
	void Item::BindRequiredRank(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredRank);
	}

	/// \brief Binds a result's column to RequiredTitle
	void Item::BindRequiredTitle(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredTitle);
	}

	/// \brief Binds a result's column to RequiredStrength
	void Item::BindRequiredStrength(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredStrength);
	}

	/// \brief Binds a result's column to RequiredStamina
	void Item::BindRequiredStamina(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredStamina);
	}

	/// \brief Binds a result's column to RequiredDexterity
	void Item::BindRequiredDexterity(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredDexterity);
	}

	/// \brief Binds a result's column to RequiredIntelligence
	void Item::BindRequiredIntelligence(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredIntelligence);
	}

	/// \brief Binds a result's column to RequiredCharisma
	void Item::BindRequiredCharisma(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredCharisma);
	}

	/// \brief Binds a result's column to SellingGroup
	void Item::BindSellingGroup(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SellingGroup);
	}

	/// \brief Binds a result's column to Type
	void Item::BindType(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	/// \brief Binds a result's column to HitRate
	void Item::BindHitRate(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	/// \brief Binds a result's column to EvasionRate
	void Item::BindEvasionRate(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EvasionRate);
	}

	/// \brief Binds a result's column to DaggerArmor
	void Item::BindDaggerArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DaggerArmor);
	}

	/// \brief Binds a result's column to SwordArmor
	void Item::BindSwordArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.SwordArmor);
	}

	/// \brief Binds a result's column to MaceArmor
	void Item::BindMaceArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaceArmor);
	}

	/// \brief Binds a result's column to AxeArmor
	void Item::BindAxeArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AxeArmor);
	}

	/// \brief Binds a result's column to SpearArmor
	void Item::BindSpearArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.SpearArmor);
	}

	/// \brief Binds a result's column to BowArmor
	void Item::BindBowArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.BowArmor);
	}

	/// \brief Binds a result's column to FireDamage
	void Item::BindFireDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FireDamage);
	}

	/// \brief Binds a result's column to IceDamage
	void Item::BindIceDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.IceDamage);
	}

	/// \brief Binds a result's column to LightningDamage
	void Item::BindLightningDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LightningDamage);
	}

	/// \brief Binds a result's column to PoisonDamage
	void Item::BindPoisonDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.PoisonDamage);
	}

	/// \brief Binds a result's column to HpDrain
	void Item::BindHpDrain(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.HpDrain);
	}

	/// \brief Binds a result's column to MpDamage
	void Item::BindMpDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MpDamage);
	}

	/// \brief Binds a result's column to MpDrain
	void Item::BindMpDrain(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MpDrain);
	}

	/// \brief Binds a result's column to MirrorDamage
	void Item::BindMirrorDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MirrorDamage);
	}

	/// \brief Binds a result's column to DropRate
	void Item::BindDropRate(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DropRate);
	}

	/// \brief Binds a result's column to StrengthBonus
	void Item::BindStrengthBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.StrengthBonus);
	}

	/// \brief Binds a result's column to StaminaBonus
	void Item::BindStaminaBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.StaminaBonus);
	}

	/// \brief Binds a result's column to DexterityBonus
	void Item::BindDexterityBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DexterityBonus);
	}

	/// \brief Binds a result's column to IntelligenceBonus
	void Item::BindIntelligenceBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.IntelligenceBonus);
	}

	/// \brief Binds a result's column to CharismaBonus
	void Item::BindCharismaBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CharismaBonus);
	}

	/// \brief Binds a result's column to MaxHpBonus
	void Item::BindMaxHpBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxHpBonus);
	}

	/// \brief Binds a result's column to MaxMpBonus
	void Item::BindMaxMpBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxMpBonus);
	}

	/// \brief Binds a result's column to FireResist
	void Item::BindFireResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.FireResist);
	}

	/// \brief Binds a result's column to ColdResist
	void Item::BindColdResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ColdResist);
	}

	/// \brief Binds a result's column to LightningResist
	void Item::BindLightningResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.LightningResist);
	}

	/// \brief Binds a result's column to MagicResist
	void Item::BindMagicResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MagicResist);
	}

	/// \brief Binds a result's column to PoisonResist
	void Item::BindPoisonResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PoisonResist);
	}

	/// \brief Binds a result's column to CurseResist
	void Item::BindCurseResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CurseResist);
	}

	/// \brief Returns the binding function associated with the column name
	const ItemExchange::BindingsMapType& ItemExchange::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nIndex", &ItemExchange::BindIndex},
			{"nNpcNum", &ItemExchange::BindNpcNumber},
			{"bRandomFlag", &ItemExchange::BindRandomFlag},
			{"nOriginItemNum1", &ItemExchange::BindOriginItemNumber1},
			{"nOriginItemCount1", &ItemExchange::BindOriginItemCount1},
			{"nOriginItemNum2", &ItemExchange::BindOriginItemNumber2},
			{"nOriginItemCount2", &ItemExchange::BindOriginItemCount2},
			{"nOriginItemNum3", &ItemExchange::BindOriginItemNumber3},
			{"nOriginItemCount3", &ItemExchange::BindOriginItemCount3},
			{"nOriginItemNum4", &ItemExchange::BindOriginItemNumber4},
			{"nOriginItemCount4", &ItemExchange::BindOriginItemCount4},
			{"nOriginItemNum5", &ItemExchange::BindOriginItemNumber5},
			{"nOriginItemCount5", &ItemExchange::BindOriginItemCount5},
			{"nExchangeItemNum1", &ItemExchange::BindExchangeItemNumber1},
			{"nExchangeItemCount1", &ItemExchange::BindExchangeItemCount1},
			{"nExchangeItemNum2", &ItemExchange::BindExchangeItemNumber2},
			{"nExchangeItemCount2", &ItemExchange::BindExchangeItemCount2},
			{"nExchangeItemNum3", &ItemExchange::BindExchangeItemNumber3},
			{"nExchangeItemCount3", &ItemExchange::BindExchangeItemCount3},
			{"nExchangeItemNum4", &ItemExchange::BindExchangeItemNumber4},
			{"nExchangeItemCount4", &ItemExchange::BindExchangeItemCount4},
			{"nExchangeItemNum5", &ItemExchange::BindExchangeItemNumber5},
			{"nExchangeItemCount5", &ItemExchange::BindExchangeItemCount5}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Index
	void ItemExchange::BindIndex(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to NpcNumber
	void ItemExchange::BindNpcNumber(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NpcNumber);
	}

	/// \brief Binds a result's column to RandomFlag
	void ItemExchange::BindRandomFlag(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RandomFlag);
	}

	/// \brief Binds a result's column to OriginItemNumber1
	void ItemExchange::BindOriginItemNumber1(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.OriginItemNumber1);
	}

	/// \brief Binds a result's column to OriginItemCount1
	void ItemExchange::BindOriginItemCount1(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItemCount1);
	}

	/// \brief Binds a result's column to OriginItemNumber2
	void ItemExchange::BindOriginItemNumber2(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.OriginItemNumber2);
	}

	/// \brief Binds a result's column to OriginItemCount2
	void ItemExchange::BindOriginItemCount2(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItemCount2);
	}

	/// \brief Binds a result's column to OriginItemNumber3
	void ItemExchange::BindOriginItemNumber3(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.OriginItemNumber3);
	}

	/// \brief Binds a result's column to OriginItemCount3
	void ItemExchange::BindOriginItemCount3(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItemCount3);
	}

	/// \brief Binds a result's column to OriginItemNumber4
	void ItemExchange::BindOriginItemNumber4(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.OriginItemNumber4);
	}

	/// \brief Binds a result's column to OriginItemCount4
	void ItemExchange::BindOriginItemCount4(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItemCount4);
	}

	/// \brief Binds a result's column to OriginItemNumber5
	void ItemExchange::BindOriginItemNumber5(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.OriginItemNumber5);
	}

	/// \brief Binds a result's column to OriginItemCount5
	void ItemExchange::BindOriginItemCount5(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItemCount5);
	}

	/// \brief Binds a result's column to ExchangeItemNumber1
	void ItemExchange::BindExchangeItemNumber1(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber1);
	}

	/// \brief Binds a result's column to ExchangeItemCount1
	void ItemExchange::BindExchangeItemCount1(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExchangeItemCount1);
	}

	/// \brief Binds a result's column to ExchangeItemNumber2
	void ItemExchange::BindExchangeItemNumber2(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber2);
	}

	/// \brief Binds a result's column to ExchangeItemCount2
	void ItemExchange::BindExchangeItemCount2(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExchangeItemCount2);
	}

	/// \brief Binds a result's column to ExchangeItemNumber3
	void ItemExchange::BindExchangeItemNumber3(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber3);
	}

	/// \brief Binds a result's column to ExchangeItemCount3
	void ItemExchange::BindExchangeItemCount3(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExchangeItemCount3);
	}

	/// \brief Binds a result's column to ExchangeItemNumber4
	void ItemExchange::BindExchangeItemNumber4(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber4);
	}

	/// \brief Binds a result's column to ExchangeItemCount4
	void ItemExchange::BindExchangeItemCount4(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExchangeItemCount4);
	}

	/// \brief Binds a result's column to ExchangeItemNumber5
	void ItemExchange::BindExchangeItemNumber5(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber5);
	}

	/// \brief Binds a result's column to ExchangeItemCount5
	void ItemExchange::BindExchangeItemCount5(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExchangeItemCount5);
	}

	/// \brief Returns the binding function associated with the column name
	const ItemUpgrade::BindingsMapType& ItemUpgrade::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nIndex", &ItemUpgrade::BindIndex},
			{"nNPCNum", &ItemUpgrade::BindNpcNumber},
			{"nOriginType", &ItemUpgrade::BindOriginType},
			{"nOriginItem", &ItemUpgrade::BindOriginItem},
			{"nReqItem1", &ItemUpgrade::BindRequiredItem1},
			{"nReqItem2", &ItemUpgrade::BindRequiredItem2},
			{"nReqItem3", &ItemUpgrade::BindRequiredItem3},
			{"nReqItem4", &ItemUpgrade::BindRequiredItem4},
			{"nReqItem5", &ItemUpgrade::BindRequiredItem5},
			{"nReqItem6", &ItemUpgrade::BindRequiredItem6},
			{"nReqItem7", &ItemUpgrade::BindRequiredItem7},
			{"nReqItem8", &ItemUpgrade::BindRequiredItem8},
			{"nReqNoah", &ItemUpgrade::BindRequiredCoins},
			{"bRateType", &ItemUpgrade::BindRateType},
			{"nGenRate", &ItemUpgrade::BindGenRate},
			{"nGiveItem", &ItemUpgrade::BindGiveItem}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Index
	void ItemUpgrade::BindIndex(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to NpcNumber
	void ItemUpgrade::BindNpcNumber(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NpcNumber);
	}

	/// \brief Binds a result's column to OriginType
	void ItemUpgrade::BindOriginType(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginType);
	}

	/// \brief Binds a result's column to OriginItem
	void ItemUpgrade::BindOriginItem(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItem);
	}

	/// \brief Binds a result's column to RequiredItem1
	void ItemUpgrade::BindRequiredItem1(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem1);
	}

	/// \brief Binds a result's column to RequiredItem2
	void ItemUpgrade::BindRequiredItem2(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem2);
	}

	/// \brief Binds a result's column to RequiredItem3
	void ItemUpgrade::BindRequiredItem3(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem3);
	}

	/// \brief Binds a result's column to RequiredItem4
	void ItemUpgrade::BindRequiredItem4(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem4);
	}

	/// \brief Binds a result's column to RequiredItem5
	void ItemUpgrade::BindRequiredItem5(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem5);
	}

	/// \brief Binds a result's column to RequiredItem6
	void ItemUpgrade::BindRequiredItem6(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem6);
	}

	/// \brief Binds a result's column to RequiredItem7
	void ItemUpgrade::BindRequiredItem7(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem7);
	}

	/// \brief Binds a result's column to RequiredItem8
	void ItemUpgrade::BindRequiredItem8(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem8);
	}

	/// \brief Binds a result's column to RequiredCoins
	void ItemUpgrade::BindRequiredCoins(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredCoins);
	}

	/// \brief Binds a result's column to RateType
	void ItemUpgrade::BindRateType(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RateType);
	}

	/// \brief Binds a result's column to GenRate
	void ItemUpgrade::BindGenRate(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.GenRate);
	}

	/// \brief Binds a result's column to GiveItem
	void ItemUpgrade::BindGiveItem(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.GiveItem);
	}

	/// \brief Returns the binding function associated with the column name
	const Knights::BindingsMapType& Knights::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"IDNum", &Knights::BindID},
			{"Flag", &Knights::BindFlag},
			{"Nation", &Knights::BindNation},
			{"Ranking", &Knights::BindRanking},
			{"IDName", &Knights::BindName},
			{"Members", &Knights::BindMembers},
			{"Chief", &Knights::BindChief},
			{"ViceChief_1", &Knights::BindViceChief1},
			{"ViceChief_2", &Knights::BindViceChief2},
			{"ViceChief_3", &Knights::BindViceChief3},
			{"strEnemyName", &Knights::BindEnemyName},
			{"byOldWarResult", &Knights::BindOldWarResult},
			{"nWarEnemyID", &Knights::BindWarEnemyId},
			{"nVictory", &Knights::BindVictory},
			{"nLose", &Knights::BindLose},
			{"Gold", &Knights::BindGold},
			{"Domination", &Knights::BindDomination},
			{"Points", &Knights::BindPoints},
			{"sMarkVersion", &Knights::BindMarkVersion},
			{"sMarkLen", &Knights::BindMarkLength},
			{"Mark", &Knights::BindMark},
			{"bySiegeFlag", &Knights::BindSiegeFlag},
			{"sAllianceKnights", &Knights::BindAllianceKnights},
			{"sCape", &Knights::BindCape}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ID
	void Knights::BindID(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Flag
	void Knights::BindFlag(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Flag);
	}

	/// \brief Binds a result's column to Nation
	void Knights::BindNation(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	/// \brief Binds a result's column to Ranking
	void Knights::BindRanking(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Ranking);
	}

	/// \brief Binds a result's column to Name
	void Knights::BindName(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Members
	void Knights::BindMembers(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Members);
	}

	/// \brief Binds a result's column to Chief
	void Knights::BindChief(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Chief);
	}

	/// \brief Binds a result's column to ViceChief1
	void Knights::BindViceChief1(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ViceChief1);
	}

	/// \brief Binds a result's column to ViceChief2
	void Knights::BindViceChief2(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ViceChief2);
	}

	/// \brief Binds a result's column to ViceChief3
	void Knights::BindViceChief3(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ViceChief3);
	}

	/// \brief Binds a result's column to EnemyName
	void Knights::BindEnemyName(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.EnemyName);
	}

	/// \brief Binds a result's column to OldWarResult
	void Knights::BindOldWarResult(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.OldWarResult);
	}

	/// \brief Binds a result's column to WarEnemyId
	void Knights::BindWarEnemyId(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.WarEnemyId);
	}

	/// \brief Binds a result's column to Victory
	void Knights::BindVictory(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Victory);
	}

	/// \brief Binds a result's column to Lose
	void Knights::BindLose(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Lose);
	}

	/// \brief Binds a result's column to Gold
	void Knights::BindGold(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int64_t>(colIndex, m.Gold);
	}

	/// \brief Binds a result's column to Domination
	void Knights::BindDomination(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Domination);
	}

	/// \brief Binds a result's column to Points
	void Knights::BindPoints(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Points);
	}

	/// \brief Binds a result's column to MarkVersion
	void Knights::BindMarkVersion(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MarkVersion);
	}

	/// \brief Binds a result's column to MarkLength
	void Knights::BindMarkLength(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MarkLength);
	}

	/// \brief Binds a result's column to Mark
	void Knights::BindMark(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.Mark);
	}

	/// \brief Binds a result's column to SiegeFlag
	void Knights::BindSiegeFlag(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SiegeFlag);
	}

	/// \brief Binds a result's column to AllianceKnights
	void Knights::BindAllianceKnights(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AllianceKnights);
	}

	/// \brief Binds a result's column to Cape
	void Knights::BindCape(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Cape);
	}

	/// \brief Returns the binding function associated with the column name
	const KnightsAlliance::BindingsMapType& KnightsAlliance::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sMainAllianceKnights", &KnightsAlliance::BindMainAllianceKnights},
			{"sSubAllianceKnights", &KnightsAlliance::BindSubAllianceKnights},
			{"sMercenaryClan_1", &KnightsAlliance::BindMercenaryClan1},
			{"sMercenaryClan_2", &KnightsAlliance::BindMercenaryClan2}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to MainAllianceKnights
	void KnightsAlliance::BindMainAllianceKnights(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MainAllianceKnights);
	}

	/// \brief Binds a result's column to SubAllianceKnights
	void KnightsAlliance::BindSubAllianceKnights(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.SubAllianceKnights);
	}

	/// \brief Binds a result's column to MercenaryClan1
	void KnightsAlliance::BindMercenaryClan1(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MercenaryClan1);
	}

	/// \brief Binds a result's column to MercenaryClan2
	void KnightsAlliance::BindMercenaryClan2(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MercenaryClan2);
	}

	/// \brief Returns the binding function associated with the column name
	const KnightsCape::BindingsMapType& KnightsCape::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sCapeIndex", &KnightsCape::BindCapeIndex},
			{"nBuyPrice", &KnightsCape::BindBuyPrice},
			{"nDuration", &KnightsCape::BindDuration},
			{"byGrade", &KnightsCape::BindGrade}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to CapeIndex
	void KnightsCape::BindCapeIndex(ebenezer_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CapeIndex);
	}

	/// \brief Binds a result's column to BuyPrice
	void KnightsCape::BindBuyPrice(ebenezer_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BuyPrice);
	}

	/// \brief Binds a result's column to Duration
	void KnightsCape::BindDuration(ebenezer_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Duration);
	}

	/// \brief Binds a result's column to Grade
	void KnightsCape::BindGrade(ebenezer_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Grade);
	}

	/// \brief Returns the binding function associated with the column name
	const KnightsRating::BindingsMapType& KnightsRating::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nRank", &KnightsRating::BindRank},
			{"shIndex", &KnightsRating::BindIndex},
			{"strName", &KnightsRating::BindName},
			{"nPoints", &KnightsRating::BindPoints}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Rank
	void KnightsRating::BindRank(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Rank);
	}

	/// \brief Binds a result's column to Index
	void KnightsRating::BindIndex(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to Name
	void KnightsRating::BindName(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Points
	void KnightsRating::BindPoints(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Points);
	}

	/// \brief Returns the binding function associated with the column name
	const KnightsSiegeWarfare::BindingsMapType& KnightsSiegeWarfare::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sCastleIndex", &KnightsSiegeWarfare::BindCastleIndex},
			{"sMasterKnights", &KnightsSiegeWarfare::BindMasterKnights},
			{"bySiegeType", &KnightsSiegeWarfare::BindSiegeType},
			{"byWarDay", &KnightsSiegeWarfare::BindWarDay},
			{"byWarTime", &KnightsSiegeWarfare::BindWarHour},
			{"byWarMinute", &KnightsSiegeWarfare::BindWarMinute},
			{"sChallengeList_1", &KnightsSiegeWarfare::BindChallengeList1},
			{"sChallengeList_2", &KnightsSiegeWarfare::BindChallengeList2},
			{"sChallengeList_3", &KnightsSiegeWarfare::BindChallengeList3},
			{"sChallengeList_4", &KnightsSiegeWarfare::BindChallengeList4},
			{"sChallengeList_5", &KnightsSiegeWarfare::BindChallengeList5},
			{"sChallengeList_6", &KnightsSiegeWarfare::BindChallengeList6},
			{"sChallengeList_7", &KnightsSiegeWarfare::BindChallengeList7},
			{"sChallengeList_8", &KnightsSiegeWarfare::BindChallengeList8},
			{"sChallengeList_9", &KnightsSiegeWarfare::BindChallengeList9},
			{"sChallengeList_10", &KnightsSiegeWarfare::BindChallengeList10},
			{"byWarRequestDay", &KnightsSiegeWarfare::BindWarRequestDay},
			{"byWarRequestTime", &KnightsSiegeWarfare::BindWarRequestTime},
			{"byWarRequestMinute", &KnightsSiegeWarfare::BindWarRequestMinute},
			{"byGuerrillaWarDay", &KnightsSiegeWarfare::BindGuerrillaWarDay},
			{"byGuerrillaWarTime", &KnightsSiegeWarfare::BindGuerrillaWarTime},
			{"byGuerrillaWarMinute", &KnightsSiegeWarfare::BindGuerrillaWarMinute},
			{"strChallengeList", &KnightsSiegeWarfare::BindChallengeList},
			{"sMoradonTariff", &KnightsSiegeWarfare::BindMoradonTariff},
			{"sDellosTariff", &KnightsSiegeWarfare::BindDelosTariff},
			{"nDungeonCharge", &KnightsSiegeWarfare::BindDungeonCharge},
			{"nMoradonTax", &KnightsSiegeWarfare::BindMoradonTax},
			{"nDellosTax", &KnightsSiegeWarfare::BindDelosTax},
			{"sRequestList_1", &KnightsSiegeWarfare::BindRequestList1},
			{"sRequestList_2", &KnightsSiegeWarfare::BindRequestList2},
			{"sRequestList_3", &KnightsSiegeWarfare::BindRequestList3},
			{"sRequestList_4", &KnightsSiegeWarfare::BindRequestList4},
			{"sRequestList_5", &KnightsSiegeWarfare::BindRequestList5},
			{"sRequestList_6", &KnightsSiegeWarfare::BindRequestList6},
			{"sRequestList_7", &KnightsSiegeWarfare::BindRequestList7},
			{"sRequestList_8", &KnightsSiegeWarfare::BindRequestList8},
			{"sRequestList_9", &KnightsSiegeWarfare::BindRequestList9},
			{"sRequestList_10", &KnightsSiegeWarfare::BindRequestList10}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to CastleIndex
	void KnightsSiegeWarfare::BindCastleIndex(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CastleIndex);
	}

	/// \brief Binds a result's column to MasterKnights
	void KnightsSiegeWarfare::BindMasterKnights(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MasterKnights);
	}

	/// \brief Binds a result's column to SiegeType
	void KnightsSiegeWarfare::BindSiegeType(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SiegeType);
	}

	/// \brief Binds a result's column to WarDay
	void KnightsSiegeWarfare::BindWarDay(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarDay);
	}

	/// \brief Binds a result's column to WarHour
	void KnightsSiegeWarfare::BindWarHour(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarHour);
	}

	/// \brief Binds a result's column to WarMinute
	void KnightsSiegeWarfare::BindWarMinute(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarMinute);
	}

	/// \brief Binds a result's column to ChallengeList1
	void KnightsSiegeWarfare::BindChallengeList1(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList1);
	}

	/// \brief Binds a result's column to ChallengeList2
	void KnightsSiegeWarfare::BindChallengeList2(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList2);
	}

	/// \brief Binds a result's column to ChallengeList3
	void KnightsSiegeWarfare::BindChallengeList3(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList3);
	}

	/// \brief Binds a result's column to ChallengeList4
	void KnightsSiegeWarfare::BindChallengeList4(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList4);
	}

	/// \brief Binds a result's column to ChallengeList5
	void KnightsSiegeWarfare::BindChallengeList5(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList5);
	}

	/// \brief Binds a result's column to ChallengeList6
	void KnightsSiegeWarfare::BindChallengeList6(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList6);
	}

	/// \brief Binds a result's column to ChallengeList7
	void KnightsSiegeWarfare::BindChallengeList7(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList7);
	}

	/// \brief Binds a result's column to ChallengeList8
	void KnightsSiegeWarfare::BindChallengeList8(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList8);
	}

	/// \brief Binds a result's column to ChallengeList9
	void KnightsSiegeWarfare::BindChallengeList9(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList9);
	}

	/// \brief Binds a result's column to ChallengeList10
	void KnightsSiegeWarfare::BindChallengeList10(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList10);
	}

	/// \brief Binds a result's column to WarRequestDay
	void KnightsSiegeWarfare::BindWarRequestDay(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarRequestDay);
	}

	/// \brief Binds a result's column to WarRequestTime
	void KnightsSiegeWarfare::BindWarRequestTime(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarRequestTime);
	}

	/// \brief Binds a result's column to WarRequestMinute
	void KnightsSiegeWarfare::BindWarRequestMinute(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarRequestMinute);
	}

	/// \brief Binds a result's column to GuerrillaWarDay
	void KnightsSiegeWarfare::BindGuerrillaWarDay(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.GuerrillaWarDay);
	}

	/// \brief Binds a result's column to GuerrillaWarTime
	void KnightsSiegeWarfare::BindGuerrillaWarTime(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.GuerrillaWarTime);
	}

	/// \brief Binds a result's column to GuerrillaWarMinute
	void KnightsSiegeWarfare::BindGuerrillaWarMinute(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.GuerrillaWarMinute);
	}

	/// \brief Binds a result's column to ChallengeList
	void KnightsSiegeWarfare::BindChallengeList(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.ChallengeList);
	}

	/// \brief Binds a result's column to MoradonTariff
	void KnightsSiegeWarfare::BindMoradonTariff(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MoradonTariff);
	}

	/// \brief Binds a result's column to DelosTariff
	void KnightsSiegeWarfare::BindDelosTariff(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DelosTariff);
	}

	/// \brief Binds a result's column to DungeonCharge
	void KnightsSiegeWarfare::BindDungeonCharge(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.DungeonCharge);
	}

	/// \brief Binds a result's column to MoradonTax
	void KnightsSiegeWarfare::BindMoradonTax(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.MoradonTax);
	}

	/// \brief Binds a result's column to DelosTax
	void KnightsSiegeWarfare::BindDelosTax(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.DelosTax);
	}

	/// \brief Binds a result's column to RequestList1
	void KnightsSiegeWarfare::BindRequestList1(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList1);
	}

	/// \brief Binds a result's column to RequestList2
	void KnightsSiegeWarfare::BindRequestList2(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList2);
	}

	/// \brief Binds a result's column to RequestList3
	void KnightsSiegeWarfare::BindRequestList3(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList3);
	}

	/// \brief Binds a result's column to RequestList4
	void KnightsSiegeWarfare::BindRequestList4(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList4);
	}

	/// \brief Binds a result's column to RequestList5
	void KnightsSiegeWarfare::BindRequestList5(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList5);
	}

	/// \brief Binds a result's column to RequestList6
	void KnightsSiegeWarfare::BindRequestList6(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList6);
	}

	/// \brief Binds a result's column to RequestList7
	void KnightsSiegeWarfare::BindRequestList7(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList7);
	}

	/// \brief Binds a result's column to RequestList8
	void KnightsSiegeWarfare::BindRequestList8(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList8);
	}

	/// \brief Binds a result's column to RequestList9
	void KnightsSiegeWarfare::BindRequestList9(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList9);
	}

	/// \brief Binds a result's column to RequestList10
	void KnightsSiegeWarfare::BindRequestList10(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList10);
	}

	/// \brief Returns the binding function associated with the column name
	const KnightsUser::BindingsMapType& KnightsUser::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIDNum", &KnightsUser::BindKnightsId},
			{"strUserID", &KnightsUser::BindUserId}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to KnightsId
	void KnightsUser::BindKnightsId(ebenezer_model::KnightsUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KnightsId);
	}

	/// \brief Binds a result's column to UserId
	void KnightsUser::BindUserId(ebenezer_model::KnightsUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.UserId);
	}

	/// \brief Returns the binding function associated with the column name
	const LevelUp::BindingsMapType& LevelUp::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"level", &LevelUp::BindLevel},
			{"Exp", &LevelUp::BindRequiredExp}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Level
	void LevelUp::BindLevel(ebenezer_model::LevelUp& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Level);
	}

	/// \brief Binds a result's column to RequiredExp
	void LevelUp::BindRequiredExp(ebenezer_model::LevelUp& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredExp);
	}

	/// \brief Returns the binding function associated with the column name
	const Magic::BindingsMapType& Magic::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"MagicNum", &Magic::BindID},
			{"BeforeAction", &Magic::BindBeforeAction},
			{"TargetAction", &Magic::BindTargetAction},
			{"SelfEffect", &Magic::BindSelfEffect},
			{"FlyingEffect", &Magic::BindFlyingEffect},
			{"TargetEffect", &Magic::BindTargetEffect},
			{"Moral", &Magic::BindMoral},
			{"SkillLevel", &Magic::BindSkillLevel},
			{"Skill", &Magic::BindSkill},
			{"Msp", &Magic::BindManaCost},
			{"HP", &Magic::BindHpCost},
			{"ItemGroup", &Magic::BindItemGroup},
			{"UseItem", &Magic::BindUseItem},
			{"CastTime", &Magic::BindCastTime},
			{"ReCastTime", &Magic::BindRecastTime},
			{"SuccessRate", &Magic::BindSuccessRate},
			{"Type1", &Magic::BindType1},
			{"Type2", &Magic::BindType2},
			{"Range", &Magic::BindRange},
			{"Etc", &Magic::BindEtc},
			{"Event", &Magic::BindEvent}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ID
	void Magic::BindID(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to BeforeAction
	void Magic::BindBeforeAction(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BeforeAction);
	}

	/// \brief Binds a result's column to TargetAction
	void Magic::BindTargetAction(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TargetAction);
	}

	/// \brief Binds a result's column to SelfEffect
	void Magic::BindSelfEffect(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SelfEffect);
	}

	/// \brief Binds a result's column to FlyingEffect
	void Magic::BindFlyingEffect(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FlyingEffect);
	}

	/// \brief Binds a result's column to TargetEffect
	void Magic::BindTargetEffect(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TargetEffect);
	}

	/// \brief Binds a result's column to Moral
	void Magic::BindMoral(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Moral);
	}

	/// \brief Binds a result's column to SkillLevel
	void Magic::BindSkillLevel(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.SkillLevel);
	}

	/// \brief Binds a result's column to Skill
	void Magic::BindSkill(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Skill);
	}

	/// \brief Binds a result's column to ManaCost
	void Magic::BindManaCost(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ManaCost);
	}

	/// \brief Binds a result's column to HpCost
	void Magic::BindHpCost(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HpCost);
	}

	/// \brief Binds a result's column to ItemGroup
	void Magic::BindItemGroup(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ItemGroup);
	}

	/// \brief Binds a result's column to UseItem
	void Magic::BindUseItem(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.UseItem);
	}

	/// \brief Binds a result's column to CastTime
	void Magic::BindCastTime(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.CastTime);
	}

	/// \brief Binds a result's column to RecastTime
	void Magic::BindRecastTime(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RecastTime);
	}

	/// \brief Binds a result's column to SuccessRate
	void Magic::BindSuccessRate(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SuccessRate);
	}

	/// \brief Binds a result's column to Type1
	void Magic::BindType1(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type1);
	}

	/// \brief Binds a result's column to Type2
	void Magic::BindType2(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type2);
	}

	/// \brief Binds a result's column to Range
	void Magic::BindRange(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Range);
	}

	/// \brief Binds a result's column to Etc
	void Magic::BindEtc(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Etc);
	}

	/// \brief Binds a result's column to Event
	void Magic::BindEvent(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Event);
	}

	/// \brief Returns the binding function associated with the column name
	const MagicType1::BindingsMapType& MagicType1::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType1::BindID},
			{"Type", &MagicType1::BindType},
			{"HitRate", &MagicType1::BindHitRateMod},
			{"Hit", &MagicType1::BindDamageMod},
			{"AddDamage", &MagicType1::BindAddDamage},
			{"Delay", &MagicType1::BindDelay},
			{"ComboType", &MagicType1::BindComboType},
			{"ComboCount", &MagicType1::BindComboCount},
			{"ComboDamage", &MagicType1::BindComboDamage},
			{"Range", &MagicType1::BindRange}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ID
	void MagicType1::BindID(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Type
	void MagicType1::BindType(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	/// \brief Binds a result's column to HitRateMod
	void MagicType1::BindHitRateMod(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRateMod);
	}

	/// \brief Binds a result's column to DamageMod
	void MagicType1::BindDamageMod(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DamageMod);
	}

	/// \brief Binds a result's column to AddDamage
	void MagicType1::BindAddDamage(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AddDamage);
	}

	/// \brief Binds a result's column to Delay
	void MagicType1::BindDelay(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Delay);
	}

	/// \brief Binds a result's column to ComboType
	void MagicType1::BindComboType(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ComboType);
	}

	/// \brief Binds a result's column to ComboCount
	void MagicType1::BindComboCount(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ComboCount);
	}

	/// \brief Binds a result's column to ComboDamage
	void MagicType1::BindComboDamage(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ComboDamage);
	}

	/// \brief Binds a result's column to Range
	void MagicType1::BindRange(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Range);
	}

	/// \brief Returns the binding function associated with the column name
	const MagicType2::BindingsMapType& MagicType2::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType2::BindID},
			{"HitType", &MagicType2::BindHitType},
			{"HitRate", &MagicType2::BindHitRateMod},
			{"AddDamage", &MagicType2::BindDamageMod},
			{"AddRange", &MagicType2::BindRangeMod},
			{"NeedArrow", &MagicType2::BindNeedArrow},
			{"AddDamagePlus", &MagicType2::BindAddDamagePlus}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ID
	void MagicType2::BindID(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to HitType
	void MagicType2::BindHitType(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.HitType);
	}

	/// \brief Binds a result's column to HitRateMod
	void MagicType2::BindHitRateMod(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRateMod);
	}

	/// \brief Binds a result's column to DamageMod
	void MagicType2::BindDamageMod(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DamageMod);
	}

	/// \brief Binds a result's column to RangeMod
	void MagicType2::BindRangeMod(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RangeMod);
	}

	/// \brief Binds a result's column to NeedArrow
	void MagicType2::BindNeedArrow(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NeedArrow);
	}

	/// \brief Binds a result's column to AddDamagePlus
	void MagicType2::BindAddDamagePlus(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AddDamagePlus);
	}

	/// \brief Returns the binding function associated with the column name
	const MagicType3::BindingsMapType& MagicType3::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType3::BindID},
			{"Radius", &MagicType3::BindRadius},
			{"Angle", &MagicType3::BindAngle},
			{"DirectType", &MagicType3::BindDirectType},
			{"FirstDamage", &MagicType3::BindFirstDamage},
			{"EndDamage", &MagicType3::BindEndDamage},
			{"TimeDamage", &MagicType3::BindTimeDamage},
			{"Duration", &MagicType3::BindDuration},
			{"Attribute", &MagicType3::BindAttribute}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ID
	void MagicType3::BindID(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Radius
	void MagicType3::BindRadius(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Radius);
	}

	/// \brief Binds a result's column to Angle
	void MagicType3::BindAngle(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Angle);
	}

	/// \brief Binds a result's column to DirectType
	void MagicType3::BindDirectType(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DirectType);
	}

	/// \brief Binds a result's column to FirstDamage
	void MagicType3::BindFirstDamage(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.FirstDamage);
	}

	/// \brief Binds a result's column to EndDamage
	void MagicType3::BindEndDamage(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EndDamage);
	}

	/// \brief Binds a result's column to TimeDamage
	void MagicType3::BindTimeDamage(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TimeDamage);
	}

	/// \brief Binds a result's column to Duration
	void MagicType3::BindDuration(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Duration);
	}

	/// \brief Binds a result's column to Attribute
	void MagicType3::BindAttribute(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Attribute);
	}

	/// \brief Returns the binding function associated with the column name
	const MagicType4::BindingsMapType& MagicType4::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType4::BindID},
			{"BuffType", &MagicType4::BindBuffType},
			{"Radius", &MagicType4::BindRadius},
			{"Duration", &MagicType4::BindDuration},
			{"AttackSpeed", &MagicType4::BindAttackSpeed},
			{"Speed", &MagicType4::BindSpeed},
			{"AC", &MagicType4::BindArmor},
			{"ACPct", &MagicType4::BindArmorPercent},
			{"Attack", &MagicType4::BindAttackPower},
			{"MagicAttack", &MagicType4::BindMagicPower},
			{"MaxHP", &MagicType4::BindMaxHp},
			{"MaxHpPct", &MagicType4::BindMaxHpPercent},
			{"MaxMP", &MagicType4::BindMaxMp},
			{"MaxMpPct", &MagicType4::BindMaxMpPercent},
			{"HitRate", &MagicType4::BindHitRate},
			{"AvoidRate", &MagicType4::BindAvoidRate},
			{"Str", &MagicType4::BindStrength},
			{"Sta", &MagicType4::BindStamina},
			{"Dex", &MagicType4::BindDexterity},
			{"Intel", &MagicType4::BindIntelligence},
			{"Cha", &MagicType4::BindCharisma},
			{"FireR", &MagicType4::BindFireResist},
			{"ColdR", &MagicType4::BindColdResist},
			{"LightningR", &MagicType4::BindLightningResist},
			{"MagicR", &MagicType4::BindMagicResist},
			{"DiseaseR", &MagicType4::BindDiseaseResist},
			{"PoisonR", &MagicType4::BindPoisonResist},
			{"ExpPct", &MagicType4::BindExpPercent}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ID
	void MagicType4::BindID(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to BuffType
	void MagicType4::BindBuffType(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BuffType);
	}

	/// \brief Binds a result's column to Radius
	void MagicType4::BindRadius(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Radius);
	}

	/// \brief Binds a result's column to Duration
	void MagicType4::BindDuration(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Duration);
	}

	/// \brief Binds a result's column to AttackSpeed
	void MagicType4::BindAttackSpeed(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.AttackSpeed);
	}

	/// \brief Binds a result's column to Speed
	void MagicType4::BindSpeed(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Speed);
	}

	/// \brief Binds a result's column to Armor
	void MagicType4::BindArmor(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Armor);
	}

	/// \brief Binds a result's column to ArmorPercent
	void MagicType4::BindArmorPercent(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ArmorPercent);
	}

	/// \brief Binds a result's column to AttackPower
	void MagicType4::BindAttackPower(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.AttackPower);
	}

	/// \brief Binds a result's column to MagicPower
	void MagicType4::BindMagicPower(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MagicPower);
	}

	/// \brief Binds a result's column to MaxHp
	void MagicType4::BindMaxHp(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxHp);
	}

	/// \brief Binds a result's column to MaxHpPercent
	void MagicType4::BindMaxHpPercent(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxHpPercent);
	}

	/// \brief Binds a result's column to MaxMp
	void MagicType4::BindMaxMp(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxMp);
	}

	/// \brief Binds a result's column to MaxMpPercent
	void MagicType4::BindMaxMpPercent(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxMpPercent);
	}

	/// \brief Binds a result's column to HitRate
	void MagicType4::BindHitRate(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.HitRate);
	}

	/// \brief Binds a result's column to AvoidRate
	void MagicType4::BindAvoidRate(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AvoidRate);
	}

	/// \brief Binds a result's column to Strength
	void MagicType4::BindStrength(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Strength);
	}

	/// \brief Binds a result's column to Stamina
	void MagicType4::BindStamina(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Stamina);
	}

	/// \brief Binds a result's column to Dexterity
	void MagicType4::BindDexterity(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Dexterity);
	}

	/// \brief Binds a result's column to Intelligence
	void MagicType4::BindIntelligence(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Intelligence);
	}

	/// \brief Binds a result's column to Charisma
	void MagicType4::BindCharisma(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Charisma);
	}

	/// \brief Binds a result's column to FireResist
	void MagicType4::BindFireResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FireResist);
	}

	/// \brief Binds a result's column to ColdResist
	void MagicType4::BindColdResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ColdResist);
	}

	/// \brief Binds a result's column to LightningResist
	void MagicType4::BindLightningResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LightningResist);
	}

	/// \brief Binds a result's column to MagicResist
	void MagicType4::BindMagicResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MagicResist);
	}

	/// \brief Binds a result's column to DiseaseResist
	void MagicType4::BindDiseaseResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DiseaseResist);
	}

	/// \brief Binds a result's column to PoisonResist
	void MagicType4::BindPoisonResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.PoisonResist);
	}

	/// \brief Binds a result's column to ExpPercent
	void MagicType4::BindExpPercent(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ExpPercent);
	}

	/// \brief Returns the binding function associated with the column name
	const MagicType5::BindingsMapType& MagicType5::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType5::BindID},
			{"Type", &MagicType5::BindType},
			{"ExpRecover", &MagicType5::BindExpRecover},
			{"NeedStone", &MagicType5::BindNeedStone}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ID
	void MagicType5::BindID(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Type
	void MagicType5::BindType(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	/// \brief Binds a result's column to ExpRecover
	void MagicType5::BindExpRecover(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ExpRecover);
	}

	/// \brief Binds a result's column to NeedStone
	void MagicType5::BindNeedStone(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NeedStone);
	}

	/// \brief Returns the binding function associated with the column name
	const MagicType6::BindingsMapType& MagicType6::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType6::BindID},
			{"Size", &MagicType6::BindSize},
			{"TransformID", &MagicType6::BindTransformId},
			{"Duration", &MagicType6::BindDuration},
			{"MaxHp", &MagicType6::BindMaxHp},
			{"MaxMp", &MagicType6::BindMaxMp},
			{"Speed", &MagicType6::BindSpeed},
			{"AttackSpeed", &MagicType6::BindAttackSpeed},
			{"TotalHit", &MagicType6::BindTotalHit},
			{"TotalAc", &MagicType6::BindTotalArmor},
			{"TotalHitRate", &MagicType6::BindTotalHitRate},
			{"TotalEvasionRate", &MagicType6::BindTotalEvasionRate},
			{"TotalFireR", &MagicType6::BindTotalFireResist},
			{"TotalColdR", &MagicType6::BindTotalColdResist},
			{"TotalLightningR", &MagicType6::BindTotalLightningResist},
			{"TotalMagicR", &MagicType6::BindTotalMagicResist},
			{"TotalDiseaseR", &MagicType6::BindTotalDiseaseResist},
			{"TotalPoisonR", &MagicType6::BindTotalPoisonResist},
			{"Class", &MagicType6::BindClass},
			{"UserSkillUse", &MagicType6::BindUserSkillUse},
			{"NeedItem", &MagicType6::BindNeedItem},
			{"SkillSuccessRate", &MagicType6::BindSkillSuccessRate},
			{"MonsterFriendly", &MagicType6::BindMonsterFriendly}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ID
	void MagicType6::BindID(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Size
	void MagicType6::BindSize(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Size);
	}

	/// \brief Binds a result's column to TransformId
	void MagicType6::BindTransformId(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TransformId);
	}

	/// \brief Binds a result's column to Duration
	void MagicType6::BindDuration(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Duration);
	}

	/// \brief Binds a result's column to MaxHp
	void MagicType6::BindMaxHp(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxHp);
	}

	/// \brief Binds a result's column to MaxMp
	void MagicType6::BindMaxMp(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxMp);
	}

	/// \brief Binds a result's column to Speed
	void MagicType6::BindSpeed(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Speed);
	}

	/// \brief Binds a result's column to AttackSpeed
	void MagicType6::BindAttackSpeed(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AttackSpeed);
	}

	/// \brief Binds a result's column to TotalHit
	void MagicType6::BindTotalHit(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalHit);
	}

	/// \brief Binds a result's column to TotalArmor
	void MagicType6::BindTotalArmor(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalArmor);
	}

	/// \brief Binds a result's column to TotalHitRate
	void MagicType6::BindTotalHitRate(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalHitRate);
	}

	/// \brief Binds a result's column to TotalEvasionRate
	void MagicType6::BindTotalEvasionRate(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalEvasionRate);
	}

	/// \brief Binds a result's column to TotalFireResist
	void MagicType6::BindTotalFireResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalFireResist);
	}

	/// \brief Binds a result's column to TotalColdResist
	void MagicType6::BindTotalColdResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalColdResist);
	}

	/// \brief Binds a result's column to TotalLightningResist
	void MagicType6::BindTotalLightningResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalLightningResist);
	}

	/// \brief Binds a result's column to TotalMagicResist
	void MagicType6::BindTotalMagicResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalMagicResist);
	}

	/// \brief Binds a result's column to TotalDiseaseResist
	void MagicType6::BindTotalDiseaseResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalDiseaseResist);
	}

	/// \brief Binds a result's column to TotalPoisonResist
	void MagicType6::BindTotalPoisonResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalPoisonResist);
	}

	/// \brief Binds a result's column to Class
	void MagicType6::BindClass(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class);
	}

	/// \brief Binds a result's column to UserSkillUse
	void MagicType6::BindUserSkillUse(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.UserSkillUse);
	}

	/// \brief Binds a result's column to NeedItem
	void MagicType6::BindNeedItem(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NeedItem);
	}

	/// \brief Binds a result's column to SkillSuccessRate
	void MagicType6::BindSkillSuccessRate(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SkillSuccessRate);
	}

	/// \brief Binds a result's column to MonsterFriendly
	void MagicType6::BindMonsterFriendly(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MonsterFriendly);
	}

	/// \brief Returns the binding function associated with the column name
	const MagicType7::BindingsMapType& MagicType7::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nIndex", &MagicType7::BindID},
			{"byValidGroup", &MagicType7::BindValidGroup},
			{"byNatoinChange", &MagicType7::BindNationChange},
			{"shMonsterNum", &MagicType7::BindMonsterNumber},
			{"byTargetChange", &MagicType7::BindTargetChange},
			{"byStateChange", &MagicType7::BindStateChange},
			{"byRadius", &MagicType7::BindRadius},
			{"shHitrate", &MagicType7::BindHitRate},
			{"shDuration", &MagicType7::BindDuration},
			{"shDamage", &MagicType7::BindDamage},
			{"byVisoin", &MagicType7::BindVision},
			{"nNeedItem", &MagicType7::BindNeedItem}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ID
	void MagicType7::BindID(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to ValidGroup
	void MagicType7::BindValidGroup(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ValidGroup);
	}

	/// \brief Binds a result's column to NationChange
	void MagicType7::BindNationChange(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NationChange);
	}

	/// \brief Binds a result's column to MonsterNumber
	void MagicType7::BindMonsterNumber(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterNumber);
	}

	/// \brief Binds a result's column to TargetChange
	void MagicType7::BindTargetChange(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TargetChange);
	}

	/// \brief Binds a result's column to StateChange
	void MagicType7::BindStateChange(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StateChange);
	}

	/// \brief Binds a result's column to Radius
	void MagicType7::BindRadius(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Radius);
	}

	/// \brief Binds a result's column to HitRate
	void MagicType7::BindHitRate(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	/// \brief Binds a result's column to Duration
	void MagicType7::BindDuration(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Duration);
	}

	/// \brief Binds a result's column to Damage
	void MagicType7::BindDamage(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Damage);
	}

	/// \brief Binds a result's column to Vision
	void MagicType7::BindVision(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Vision);
	}

	/// \brief Binds a result's column to NeedItem
	void MagicType7::BindNeedItem(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.NeedItem);
	}

	/// \brief Returns the binding function associated with the column name
	const MagicType8::BindingsMapType& MagicType8::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType8::BindID},
			{"Target", &MagicType8::BindTarget},
			{"Radius", &MagicType8::BindRadius},
			{"WarpType", &MagicType8::BindWarpType},
			{"ExpRecover", &MagicType8::BindExpRecover}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ID
	void MagicType8::BindID(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Target
	void MagicType8::BindTarget(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Target);
	}

	/// \brief Binds a result's column to Radius
	void MagicType8::BindRadius(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Radius);
	}

	/// \brief Binds a result's column to WarpType
	void MagicType8::BindWarpType(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarpType);
	}

	/// \brief Binds a result's column to ExpRecover
	void MagicType8::BindExpRecover(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExpRecover);
	}

	/// \brief Returns the binding function associated with the column name
	const MagicType9::BindingsMapType& MagicType9::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType9::BindID},
			{"ValidGroup", &MagicType9::BindValidGroup},
			{"NationChange", &MagicType9::BindNationChange},
			{"MonsterNum", &MagicType9::BindMonsterNumber},
			{"TargetChange", &MagicType9::BindTargetChange},
			{"StateChange", &MagicType9::BindStateChange},
			{"Radius", &MagicType9::BindRadius},
			{"Hitrate", &MagicType9::BindHitRate},
			{"Duration", &MagicType9::BindDuration},
			{"AddDamage", &MagicType9::BindAddDamage},
			{"Vision", &MagicType9::BindVision},
			{"NeedItem", &MagicType9::BindNeedItem}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ID
	void MagicType9::BindID(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to ValidGroup
	void MagicType9::BindValidGroup(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ValidGroup);
	}

	/// \brief Binds a result's column to NationChange
	void MagicType9::BindNationChange(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NationChange);
	}

	/// \brief Binds a result's column to MonsterNumber
	void MagicType9::BindMonsterNumber(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterNumber);
	}

	/// \brief Binds a result's column to TargetChange
	void MagicType9::BindTargetChange(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TargetChange);
	}

	/// \brief Binds a result's column to StateChange
	void MagicType9::BindStateChange(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StateChange);
	}

	/// \brief Binds a result's column to Radius
	void MagicType9::BindRadius(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Radius);
	}

	/// \brief Binds a result's column to HitRate
	void MagicType9::BindHitRate(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	/// \brief Binds a result's column to Duration
	void MagicType9::BindDuration(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Duration);
	}

	/// \brief Binds a result's column to AddDamage
	void MagicType9::BindAddDamage(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AddDamage);
	}

	/// \brief Binds a result's column to Vision
	void MagicType9::BindVision(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Vision);
	}

	/// \brief Binds a result's column to NeedItem
	void MagicType9::BindNeedItem(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.NeedItem);
	}

	/// \brief Returns the binding function associated with the column name
	const MonsterChallenge::BindingsMapType& MonsterChallenge::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &MonsterChallenge::BindIndex},
			{"bStartTime1", &MonsterChallenge::BindStartTime1},
			{"bStartTime2", &MonsterChallenge::BindStartTime2},
			{"bStartTime3", &MonsterChallenge::BindStartTime3},
			{"bLevelMin", &MonsterChallenge::BindLevelMin},
			{"bLevelMax", &MonsterChallenge::BindLevelMax}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Index
	void MonsterChallenge::BindIndex(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to StartTime1
	void MonsterChallenge::BindStartTime1(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StartTime1);
	}

	/// \brief Binds a result's column to StartTime2
	void MonsterChallenge::BindStartTime2(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StartTime2);
	}

	/// \brief Binds a result's column to StartTime3
	void MonsterChallenge::BindStartTime3(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StartTime3);
	}

	/// \brief Binds a result's column to LevelMin
	void MonsterChallenge::BindLevelMin(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LevelMin);
	}

	/// \brief Binds a result's column to LevelMax
	void MonsterChallenge::BindLevelMax(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LevelMax);
	}

	/// \brief Returns the binding function associated with the column name
	const MonsterChallengeSummonList::BindingsMapType& MonsterChallengeSummonList::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &MonsterChallengeSummonList::BindIndex},
			{"bLevel", &MonsterChallengeSummonList::BindLevel},
			{"bStage", &MonsterChallengeSummonList::BindStage},
			{"bStageLevel", &MonsterChallengeSummonList::BindStageLevel},
			{"sTime", &MonsterChallengeSummonList::BindTime},
			{"sSid", &MonsterChallengeSummonList::BindMonsterId},
			{"sCount", &MonsterChallengeSummonList::BindCount},
			{"sPosX", &MonsterChallengeSummonList::BindPosX},
			{"sPosZ", &MonsterChallengeSummonList::BindPosZ},
			{"bRange", &MonsterChallengeSummonList::BindRange}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Index
	void MonsterChallengeSummonList::BindIndex(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to Level
	void MonsterChallengeSummonList::BindLevel(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Level);
	}

	/// \brief Binds a result's column to Stage
	void MonsterChallengeSummonList::BindStage(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Stage);
	}

	/// \brief Binds a result's column to StageLevel
	void MonsterChallengeSummonList::BindStageLevel(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StageLevel);
	}

	/// \brief Binds a result's column to Time
	void MonsterChallengeSummonList::BindTime(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Time);
	}

	/// \brief Binds a result's column to MonsterId
	void MonsterChallengeSummonList::BindMonsterId(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterId);
	}

	/// \brief Binds a result's column to Count
	void MonsterChallengeSummonList::BindCount(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Count);
	}

	/// \brief Binds a result's column to PosX
	void MonsterChallengeSummonList::BindPosX(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PosX);
	}

	/// \brief Binds a result's column to PosZ
	void MonsterChallengeSummonList::BindPosZ(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PosZ);
	}

	/// \brief Binds a result's column to Range
	void MonsterChallengeSummonList::BindRange(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Range);
	}

	/// \brief Returns the binding function associated with the column name
	const RentalItem::BindingsMapType& RentalItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nRentalIndex", &RentalItem::BindRentalIndex},
			{"nItemIndex", &RentalItem::BindItemIndex},
			{"sDurability", &RentalItem::BindDurability},
			{"nSerialNumber", &RentalItem::BindSerialNumber},
			{"byRegType", &RentalItem::BindRegType},
			{"byItemType", &RentalItem::BindItemType},
			{"byClass", &RentalItem::BindClass},
			{"sRentalTime", &RentalItem::BindRentalTime},
			{"nRentalMoney", &RentalItem::BindRentalMoney},
			{"strLenderCharID", &RentalItem::BindLenderCharId},
			{"strLenderAcID", &RentalItem::BindLenderAccountId},
			{"strBorrowerCharID", &RentalItem::BindBorrowerCharId},
			{"strBorrowerAcID", &RentalItem::BindBorrowerAccountId}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to RentalIndex
	void RentalItem::BindRentalIndex(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RentalIndex);
	}

	/// \brief Binds a result's column to ItemIndex
	void RentalItem::BindItemIndex(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemIndex);
	}

	/// \brief Binds a result's column to Durability
	void RentalItem::BindDurability(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Durability);
	}

	/// \brief Binds a result's column to SerialNumber
	void RentalItem::BindSerialNumber(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int64_t>(colIndex, m.SerialNumber);
	}

	/// \brief Binds a result's column to RegType
	void RentalItem::BindRegType(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RegType);
	}

	/// \brief Binds a result's column to ItemType
	void RentalItem::BindItemType(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ItemType);
	}

	/// \brief Binds a result's column to Class
	void RentalItem::BindClass(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Class);
	}

	/// \brief Binds a result's column to RentalTime
	void RentalItem::BindRentalTime(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RentalTime);
	}

	/// \brief Binds a result's column to RentalMoney
	void RentalItem::BindRentalMoney(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RentalMoney);
	}

	/// \brief Binds a result's column to LenderCharId
	void RentalItem::BindLenderCharId(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.LenderCharId);
	}

	/// \brief Binds a result's column to LenderAccountId
	void RentalItem::BindLenderAccountId(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.LenderAccountId);
	}

	/// \brief Binds a result's column to BorrowerCharId
	void RentalItem::BindBorrowerCharId(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.BorrowerCharId);
	}

	/// \brief Binds a result's column to BorrowerAccountId
	void RentalItem::BindBorrowerAccountId(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.BorrowerAccountId);
	}

	/// \brief Returns the binding function associated with the column name
	const ServerResource::BindingsMapType& ServerResource::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nResourceID", &ServerResource::BindResourceId},
			{"strResource", &ServerResource::BindResource}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ResourceId
	void ServerResource::BindResourceId(ebenezer_model::ServerResource& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ResourceId);
	}

	/// \brief Binds a result's column to Resource
	void ServerResource::BindResource(ebenezer_model::ServerResource& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Resource);
	}

	/// \brief Returns the binding function associated with the column name
	const StartPosition::BindingsMapType& StartPosition::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"ZoneID", &StartPosition::BindZoneId},
			{"sKarusX", &StartPosition::BindKarusX},
			{"sKarusZ", &StartPosition::BindKarusZ},
			{"sElmoradX", &StartPosition::BindElmoX},
			{"sElmoradZ", &StartPosition::BindElmoZ},
			{"bRangeX", &StartPosition::BindRangeX},
			{"bRangeZ", &StartPosition::BindRangeZ},
			{"sKarusGateX", &StartPosition::BindKarusGateX},
			{"sKarusGateZ", &StartPosition::BindKarusGateZ},
			{"sElmoGateX", &StartPosition::BindElmoGateX},
			{"sElmoGateZ", &StartPosition::BindElmoGateZ}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ZoneId
	void StartPosition::BindZoneId(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ZoneId);
	}

	/// \brief Binds a result's column to KarusX
	void StartPosition::BindKarusX(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KarusX);
	}

	/// \brief Binds a result's column to KarusZ
	void StartPosition::BindKarusZ(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KarusZ);
	}

	/// \brief Binds a result's column to ElmoX
	void StartPosition::BindElmoX(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ElmoX);
	}

	/// \brief Binds a result's column to ElmoZ
	void StartPosition::BindElmoZ(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ElmoZ);
	}

	/// \brief Binds a result's column to RangeX
	void StartPosition::BindRangeX(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RangeX);
	}

	/// \brief Binds a result's column to RangeZ
	void StartPosition::BindRangeZ(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RangeZ);
	}

	/// \brief Binds a result's column to KarusGateX
	void StartPosition::BindKarusGateX(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KarusGateX);
	}

	/// \brief Binds a result's column to KarusGateZ
	void StartPosition::BindKarusGateZ(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KarusGateZ);
	}

	/// \brief Binds a result's column to ElmoGateX
	void StartPosition::BindElmoGateX(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ElmoGateX);
	}

	/// \brief Binds a result's column to ElmoGateZ
	void StartPosition::BindElmoGateZ(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ElmoGateZ);
	}

	/// \brief Returns the binding function associated with the column name
	const UserKnightsRank::BindingsMapType& UserKnightsRank::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"shIndex", &UserKnightsRank::BindIndex},
			{"strElmoUserID", &UserKnightsRank::BindElmoUserId},
			{"strKarusUserID", &UserKnightsRank::BindKarusUserId},
			{"nMoney", &UserKnightsRank::BindMoney}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Index
	void UserKnightsRank::BindIndex(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to ElmoUserId
	void UserKnightsRank::BindElmoUserId(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ElmoUserId);
	}

	/// \brief Binds a result's column to KarusUserId
	void UserKnightsRank::BindKarusUserId(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.KarusUserId);
	}

	/// \brief Binds a result's column to Money
	void UserKnightsRank::BindMoney(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Money);
	}

	/// \brief Returns the binding function associated with the column name
	const UserPersonalRank::BindingsMapType& UserPersonalRank::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nRank", &UserPersonalRank::BindRank},
			{"strElmoUserID", &UserPersonalRank::BindElmoUserId},
			{"strKarusUserID", &UserPersonalRank::BindKarusUserId},
			{"nSalary", &UserPersonalRank::BindSalary}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Rank
	void UserPersonalRank::BindRank(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Rank);
	}

	/// \brief Binds a result's column to ElmoUserId
	void UserPersonalRank::BindElmoUserId(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ElmoUserId);
	}

	/// \brief Binds a result's column to KarusUserId
	void UserPersonalRank::BindKarusUserId(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.KarusUserId);
	}

	/// \brief Binds a result's column to Salary
	void UserPersonalRank::BindSalary(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Salary);
	}

	/// \brief Returns the binding function associated with the column name
	const WebpageAddress::BindingsMapType& WebpageAddress::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nIndex", &WebpageAddress::BindIndex},
			{"strWebPageAddress", &WebpageAddress::BindWebPageAddress}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Index
	void WebpageAddress::BindIndex(ebenezer_model::WebpageAddress& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to WebPageAddress
	void WebpageAddress::BindWebPageAddress(ebenezer_model::WebpageAddress& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.WebPageAddress);
	}

	/// \brief Returns the binding function associated with the column name
	const ZoneInfo::BindingsMapType& ZoneInfo::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"ServerNo", &ZoneInfo::BindServerId},
			{"ZoneNo", &ZoneInfo::BindZoneId},
			{"strZoneName", &ZoneInfo::BindName},
			{"InitX", &ZoneInfo::BindInitX},
			{"InitZ", &ZoneInfo::BindInitZ},
			{"InitY", &ZoneInfo::BindInitY},
			{"Type", &ZoneInfo::BindType},
			{"RoomEvent", &ZoneInfo::BindRoomEvent}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ServerId
	void ZoneInfo::BindServerId(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ServerId);
	}

	/// \brief Binds a result's column to ZoneId
	void ZoneInfo::BindZoneId(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ZoneId);
	}

	/// \brief Binds a result's column to Name
	void ZoneInfo::BindName(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to InitX
	void ZoneInfo::BindInitX(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.InitX);
	}

	/// \brief Binds a result's column to InitZ
	void ZoneInfo::BindInitZ(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.InitZ);
	}

	/// \brief Binds a result's column to InitY
	void ZoneInfo::BindInitY(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.InitY);
	}

	/// \brief Binds a result's column to Type
	void ZoneInfo::BindType(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	/// \brief Binds a result's column to RoomEvent
	void ZoneInfo::BindRoomEvent(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RoomEvent);
	}
}