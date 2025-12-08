#include "FullBinder.h"
#include <Full/model/FullModel.h>
#include <BinderUtil/BinderUtil.h>
#include <nanodbc/nanodbc.h>

namespace full_binder
{
	/// \brief Returns the binding function associated with the column name
	const AccountChar::BindingsMapType& AccountChar::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strAccountID", &AccountChar::BindAccountId},
			{"bNation", &AccountChar::BindNation},
			{"bCharNum", &AccountChar::BindCharNum},
			{"strCharID1", &AccountChar::BindCharId1},
			{"strCharID2", &AccountChar::BindCharId2},
			{"strCharID3", &AccountChar::BindCharId3}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to AccountId
	void AccountChar::BindAccountId(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	/// \brief Binds a result's column to Nation
	void AccountChar::BindNation(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	/// \brief Binds a result's column to CharNum
	void AccountChar::BindCharNum(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.CharNum);
	}

	/// \brief Binds a result's column to CharId1
	void AccountChar::BindCharId1(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.CharId1);
	}

	/// \brief Binds a result's column to CharId2
	void AccountChar::BindCharId2(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.CharId2);
	}

	/// \brief Binds a result's column to CharId3
	void AccountChar::BindCharId3(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.CharId3);
	}

	/// \brief Returns the binding function associated with the column name
	const Battle::BindingsMapType& Battle::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &Battle::BindIndex},
			{"byNation", &Battle::BindNation},
			{"strUserName", &Battle::BindUserName},
			{"byElmoArea", &Battle::BindElmoArea},
			{"byKarusArea", &Battle::BindKarusArea},
			{"byElmoAdvantage", &Battle::BindElmoAdvantage},
			{"byKarusAdvantage", &Battle::BindKarusAdvantage},
			{"byArea_1", &Battle::BindArea1},
			{"byArea_2", &Battle::BindArea2},
			{"byArea_3", &Battle::BindArea3},
			{"byArea_4", &Battle::BindArea4},
			{"byArea_5", &Battle::BindArea5},
			{"byArea_6", &Battle::BindArea6},
			{"byArea_7", &Battle::BindArea7},
			{"byArea_8", &Battle::BindArea8},
			{"byArea_9", &Battle::BindArea9},
			{"byArea_10", &Battle::BindArea10},
			{"byArea_11", &Battle::BindArea11}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Index
	void Battle::BindIndex(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to Nation
	void Battle::BindNation(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	/// \brief Binds a result's column to UserName
	void Battle::BindUserName(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.UserName);
	}

	/// \brief Binds a result's column to ElmoArea
	void Battle::BindElmoArea(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ElmoArea);
	}

	/// \brief Binds a result's column to KarusArea
	void Battle::BindKarusArea(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.KarusArea);
	}

	/// \brief Binds a result's column to ElmoAdvantage
	void Battle::BindElmoAdvantage(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ElmoAdvantage);
	}

	/// \brief Binds a result's column to KarusAdvantage
	void Battle::BindKarusAdvantage(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.KarusAdvantage);
	}

	/// \brief Binds a result's column to Area1
	void Battle::BindArea1(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area1);
	}

	/// \brief Binds a result's column to Area2
	void Battle::BindArea2(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area2);
	}

	/// \brief Binds a result's column to Area3
	void Battle::BindArea3(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area3);
	}

	/// \brief Binds a result's column to Area4
	void Battle::BindArea4(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area4);
	}

	/// \brief Binds a result's column to Area5
	void Battle::BindArea5(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area5);
	}

	/// \brief Binds a result's column to Area6
	void Battle::BindArea6(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area6);
	}

	/// \brief Binds a result's column to Area7
	void Battle::BindArea7(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area7);
	}

	/// \brief Binds a result's column to Area8
	void Battle::BindArea8(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area8);
	}

	/// \brief Binds a result's column to Area9
	void Battle::BindArea9(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area9);
	}

	/// \brief Binds a result's column to Area10
	void Battle::BindArea10(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area10);
	}

	/// \brief Binds a result's column to Area11
	void Battle::BindArea11(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area11);
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
	void Coefficient::BindClassId(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ClassId);
	}

	/// \brief Binds a result's column to ShortSword
	void Coefficient::BindShortSword(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.ShortSword);
	}

	/// \brief Binds a result's column to Sword
	void Coefficient::BindSword(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Sword);
	}

	/// \brief Binds a result's column to Axe
	void Coefficient::BindAxe(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Axe);
	}

	/// \brief Binds a result's column to Club
	void Coefficient::BindClub(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Club);
	}

	/// \brief Binds a result's column to Spear
	void Coefficient::BindSpear(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Spear);
	}

	/// \brief Binds a result's column to Pole
	void Coefficient::BindPole(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Pole);
	}

	/// \brief Binds a result's column to Staff
	void Coefficient::BindStaff(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Staff);
	}

	/// \brief Binds a result's column to Bow
	void Coefficient::BindBow(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Bow);
	}

	/// \brief Binds a result's column to HitPoint
	void Coefficient::BindHitPoint(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.HitPoint);
	}

	/// \brief Binds a result's column to ManaPoint
	void Coefficient::BindManaPoint(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.ManaPoint);
	}

	/// \brief Binds a result's column to Sp
	void Coefficient::BindSp(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Sp);
	}

	/// \brief Binds a result's column to Armor
	void Coefficient::BindArmor(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Armor);
	}

	/// \brief Binds a result's column to HitRate
	void Coefficient::BindHitRate(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.HitRate);
	}

	/// \brief Binds a result's column to Evasionrate
	void Coefficient::BindEvasionrate(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Evasionrate);
	}

	/// \brief Returns the binding function associated with the column name
	const Concurrent::BindingsMapType& Concurrent::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"serverid", &Concurrent::BindServerId},
			{"zone1_count", &Concurrent::BindZone1Count},
			{"zone2_count", &Concurrent::BindZone2Count},
			{"zone3_count", &Concurrent::BindZone3Count},
			{"bz", &Concurrent::BindBz}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ServerId
	void Concurrent::BindServerId(full_model::Concurrent& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ServerId);
	}

	/// \brief Binds a result's column to Zone1Count
	void Concurrent::BindZone1Count(full_model::Concurrent& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Zone1Count);
	}

	/// \brief Binds a result's column to Zone2Count
	void Concurrent::BindZone2Count(full_model::Concurrent& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Zone2Count);
	}

	/// \brief Binds a result's column to Zone3Count
	void Concurrent::BindZone3Count(full_model::Concurrent& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Zone3Count);
	}

	/// \brief Binds a result's column to Bz
	void Concurrent::BindBz(full_model::Concurrent& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Bz);
	}

	/// \brief Returns the binding function associated with the column name
	const CopySerialItem::BindingsMapType& CopySerialItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strUserId", &CopySerialItem::BindUserId},
			{"byType", &CopySerialItem::BindType},
			{"nPos", &CopySerialItem::BindPos},
			{"ItemNum", &CopySerialItem::BindItemNum},
			{"ItemSerial", &CopySerialItem::BindItemSerial}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to UserId
	void CopySerialItem::BindUserId(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.UserId);
	}

	/// \brief Binds a result's column to Type
	void CopySerialItem::BindType(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<uint8_t>>(colIndex, m.Type);
	}

	/// \brief Binds a result's column to Pos
	void CopySerialItem::BindPos(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.Pos);
	}

	/// \brief Binds a result's column to ItemNum
	void CopySerialItem::BindItemNum(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.ItemNum);
	}

	/// \brief Binds a result's column to ItemSerial
	void CopySerialItem::BindItemSerial(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.ItemSerial);
	}

	/// \brief Returns the binding function associated with the column name
	const CopyTest::BindingsMapType& CopyTest::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"ITEMSERIAL", &CopyTest::BindItemSerial}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ItemSerial
	void CopyTest::BindItemSerial(full_model::CopyTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int64_t>(colIndex, m.ItemSerial);
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
	void CouponSerialList::BindIndex(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to SerialNum
	void CouponSerialList::BindSerialNum(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.SerialNum);
	}

	/// \brief Binds a result's column to ItemNumber
	void CouponSerialList::BindItemNumber(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemNumber);
	}

	/// \brief Binds a result's column to ItemCount
	void CouponSerialList::BindItemCount(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ItemCount);
	}

	/// \brief Returns the binding function associated with the column name
	const CurrentUser::BindingsMapType& CurrentUser::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nServerNo", &CurrentUser::BindServerId},
			{"strServerIP", &CurrentUser::BindServerIP},
			{"strAccountID", &CurrentUser::BindAccountId},
			{"strCharID", &CurrentUser::BindCharId},
			{"strClientIP", &CurrentUser::BindClientIP}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ServerId
	void CurrentUser::BindServerId(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ServerId);
	}

	/// \brief Binds a result's column to ServerIP
	void CurrentUser::BindServerIP(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.ServerIP);
	}

	/// \brief Binds a result's column to AccountId
	void CurrentUser::BindAccountId(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	/// \brief Binds a result's column to CharId
	void CurrentUser::BindCharId(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	/// \brief Binds a result's column to ClientIP
	void CurrentUser::BindClientIP(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.ClientIP);
	}

	/// \brief Returns the binding function associated with the column name
	const Event::BindingsMapType& Event::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"ZoneNum", &Event::BindZoneNumber},
			{"EventNum", &Event::BindEventNumber},
			{"Type", &Event::BindEventType},
			{"Cond1", &Event::BindCondition1},
			{"Cond2", &Event::BindCondition2},
			{"Cond3", &Event::BindCondition3},
			{"Cond4", &Event::BindCondition4},
			{"Cond5", &Event::BindCondition5},
			{"Exec1", &Event::BindExecute1},
			{"Exec2", &Event::BindExecute2},
			{"Exec3", &Event::BindExecute3},
			{"Exec4", &Event::BindExecute4},
			{"Exec5", &Event::BindExecute5}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ZoneNumber
	void Event::BindZoneNumber(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ZoneNumber);
	}

	/// \brief Binds a result's column to EventNumber
	void Event::BindEventNumber(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EventNumber);
	}

	/// \brief Binds a result's column to EventType
	void Event::BindEventType(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.EventType);
	}

	/// \brief Binds a result's column to Condition1
	void Event::BindCondition1(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Condition1);
	}

	/// \brief Binds a result's column to Condition2
	void Event::BindCondition2(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Condition2);
	}

	/// \brief Binds a result's column to Condition3
	void Event::BindCondition3(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Condition3);
	}

	/// \brief Binds a result's column to Condition4
	void Event::BindCondition4(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Condition4);
	}

	/// \brief Binds a result's column to Condition5
	void Event::BindCondition5(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Condition5);
	}

	/// \brief Binds a result's column to Execute1
	void Event::BindExecute1(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Execute1);
	}

	/// \brief Binds a result's column to Execute2
	void Event::BindExecute2(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Execute2);
	}

	/// \brief Binds a result's column to Execute3
	void Event::BindExecute3(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Execute3);
	}

	/// \brief Binds a result's column to Execute4
	void Event::BindExecute4(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Execute4);
	}

	/// \brief Binds a result's column to Execute5
	void Event::BindExecute5(full_model::Event& m, const nanodbc::result& result, short colIndex)
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
	void EventTrigger::BindIndex(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to NpcType
	void EventTrigger::BindNpcType(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NpcType);
	}

	/// \brief Binds a result's column to NpcId
	void EventTrigger::BindNpcId(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NpcId);
	}

	/// \brief Binds a result's column to TriggerNumber
	void EventTrigger::BindTriggerNumber(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.TriggerNumber);
	}

	/// \brief Returns the binding function associated with the column name
	const FriendList::BindingsMapType& FriendList::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strUserID", &FriendList::BindUserId},
			{"strFriend1", &FriendList::BindFriend1},
			{"strFriend2", &FriendList::BindFriend2},
			{"strFriend3", &FriendList::BindFriend3},
			{"strFriend4", &FriendList::BindFriend4},
			{"strFriend5", &FriendList::BindFriend5},
			{"strFriend6", &FriendList::BindFriend6},
			{"strFriend7", &FriendList::BindFriend7},
			{"strFriend8", &FriendList::BindFriend8},
			{"strFriend9", &FriendList::BindFriend9},
			{"strFriend10", &FriendList::BindFriend10},
			{"strFriend11", &FriendList::BindFriend11},
			{"strFriend12", &FriendList::BindFriend12},
			{"strFriend13", &FriendList::BindFriend13},
			{"strFriend14", &FriendList::BindFriend14},
			{"strFriend15", &FriendList::BindFriend15},
			{"strFriend16", &FriendList::BindFriend16},
			{"strFriend17", &FriendList::BindFriend17},
			{"strFriend18", &FriendList::BindFriend18},
			{"strFriend19", &FriendList::BindFriend19},
			{"strFriend20", &FriendList::BindFriend20},
			{"strFriend21", &FriendList::BindFriend21},
			{"strFriend22", &FriendList::BindFriend22},
			{"strFriend23", &FriendList::BindFriend23},
			{"strFriend24", &FriendList::BindFriend24}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to UserId
	void FriendList::BindUserId(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.UserId);
	}

	/// \brief Binds a result's column to Friend1
	void FriendList::BindFriend1(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend1);
	}

	/// \brief Binds a result's column to Friend2
	void FriendList::BindFriend2(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend2);
	}

	/// \brief Binds a result's column to Friend3
	void FriendList::BindFriend3(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend3);
	}

	/// \brief Binds a result's column to Friend4
	void FriendList::BindFriend4(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend4);
	}

	/// \brief Binds a result's column to Friend5
	void FriendList::BindFriend5(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend5);
	}

	/// \brief Binds a result's column to Friend6
	void FriendList::BindFriend6(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend6);
	}

	/// \brief Binds a result's column to Friend7
	void FriendList::BindFriend7(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend7);
	}

	/// \brief Binds a result's column to Friend8
	void FriendList::BindFriend8(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend8);
	}

	/// \brief Binds a result's column to Friend9
	void FriendList::BindFriend9(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend9);
	}

	/// \brief Binds a result's column to Friend10
	void FriendList::BindFriend10(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend10);
	}

	/// \brief Binds a result's column to Friend11
	void FriendList::BindFriend11(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend11);
	}

	/// \brief Binds a result's column to Friend12
	void FriendList::BindFriend12(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend12);
	}

	/// \brief Binds a result's column to Friend13
	void FriendList::BindFriend13(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend13);
	}

	/// \brief Binds a result's column to Friend14
	void FriendList::BindFriend14(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend14);
	}

	/// \brief Binds a result's column to Friend15
	void FriendList::BindFriend15(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend15);
	}

	/// \brief Binds a result's column to Friend16
	void FriendList::BindFriend16(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend16);
	}

	/// \brief Binds a result's column to Friend17
	void FriendList::BindFriend17(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend17);
	}

	/// \brief Binds a result's column to Friend18
	void FriendList::BindFriend18(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend18);
	}

	/// \brief Binds a result's column to Friend19
	void FriendList::BindFriend19(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend19);
	}

	/// \brief Binds a result's column to Friend20
	void FriendList::BindFriend20(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend20);
	}

	/// \brief Binds a result's column to Friend21
	void FriendList::BindFriend21(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend21);
	}

	/// \brief Binds a result's column to Friend22
	void FriendList::BindFriend22(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend22);
	}

	/// \brief Binds a result's column to Friend23
	void FriendList::BindFriend23(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend23);
	}

	/// \brief Binds a result's column to Friend24
	void FriendList::BindFriend24(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend24);
	}

	/// \brief Returns the binding function associated with the column name
	const HacktoolUserLog::BindingsMapType& HacktoolUserLog::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strAccountID", &HacktoolUserLog::BindAccountId},
			{"strCharID", &HacktoolUserLog::BindCharId},
			{"strHackToolName", &HacktoolUserLog::BindHackToolName},
			{"tWriteTime", &HacktoolUserLog::BindWriteTime}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to AccountId
	void HacktoolUserLog::BindAccountId(full_model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	/// \brief Binds a result's column to CharId
	void HacktoolUserLog::BindCharId(full_model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	/// \brief Binds a result's column to HackToolName
	void HacktoolUserLog::BindHackToolName(full_model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.HackToolName);
	}

	/// \brief Binds a result's column to WriteTime
	void HacktoolUserLog::BindWriteTime(full_model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.WriteTime = binderUtil::CTimeFromDbTime(tmpValue);
	}

	/// \brief Returns the binding function associated with the column name
	const HeroUser::BindingsMapType& HeroUser::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"shIndex", &HeroUser::BindIndex},
			{"strUserID", &HeroUser::BindUserId},
			{"strNation", &HeroUser::BindNation},
			{"strClass", &HeroUser::BindClassName},
			{"strAchievement", &HeroUser::BindAchievement}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Index
	void HeroUser::BindIndex(full_model::HeroUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to UserId
	void HeroUser::BindUserId(full_model::HeroUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.UserId);
	}

	/// \brief Binds a result's column to Nation
	void HeroUser::BindNation(full_model::HeroUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Nation);
	}

	/// \brief Binds a result's column to ClassName
	void HeroUser::BindClassName(full_model::HeroUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ClassName);
	}

	/// \brief Binds a result's column to Achievement
	void HeroUser::BindAchievement(full_model::HeroUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Achievement);
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
	void Home::BindNation(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	/// \brief Binds a result's column to ElmoZoneX
	void Home::BindElmoZoneX(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ElmoZoneX);
	}

	/// \brief Binds a result's column to ElmoZoneZ
	void Home::BindElmoZoneZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ElmoZoneZ);
	}

	/// \brief Binds a result's column to ElmoZoneLX
	void Home::BindElmoZoneLX(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ElmoZoneLX);
	}

	/// \brief Binds a result's column to ElmoZoneLZ
	void Home::BindElmoZoneLZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ElmoZoneLZ);
	}

	/// \brief Binds a result's column to KarusZoneX
	void Home::BindKarusZoneX(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.KarusZoneX);
	}

	/// \brief Binds a result's column to KarusZoneZ
	void Home::BindKarusZoneZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.KarusZoneZ);
	}

	/// \brief Binds a result's column to KarusZoneLX
	void Home::BindKarusZoneLX(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.KarusZoneLX);
	}

	/// \brief Binds a result's column to KarusZoneLZ
	void Home::BindKarusZoneLZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.KarusZoneLZ);
	}

	/// \brief Binds a result's column to FreeZoneX
	void Home::BindFreeZoneX(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.FreeZoneX);
	}

	/// \brief Binds a result's column to FreeZoneZ
	void Home::BindFreeZoneZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.FreeZoneZ);
	}

	/// \brief Binds a result's column to FreeZoneLX
	void Home::BindFreeZoneLX(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FreeZoneLX);
	}

	/// \brief Binds a result's column to FreeZoneLZ
	void Home::BindFreeZoneLZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FreeZoneLZ);
	}

	/// \brief Binds a result's column to BattleZoneX
	void Home::BindBattleZoneX(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BattleZoneX);
	}

	/// \brief Binds a result's column to BattleZoneZ
	void Home::BindBattleZoneZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BattleZoneZ);
	}

	/// \brief Binds a result's column to BattleZoneLX
	void Home::BindBattleZoneLX(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BattleZoneLX);
	}

	/// \brief Binds a result's column to BattleZoneLZ
	void Home::BindBattleZoneLZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BattleZoneLZ);
	}

	/// \brief Binds a result's column to BattleZone2X
	void Home::BindBattleZone2X(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BattleZone2X);
	}

	/// \brief Binds a result's column to BattleZone2Z
	void Home::BindBattleZone2Z(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BattleZone2Z);
	}

	/// \brief Binds a result's column to BattleZone2LX
	void Home::BindBattleZone2LX(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BattleZone2LX);
	}

	/// \brief Binds a result's column to BattleZone2LZ
	void Home::BindBattleZone2LZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
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
			{"ReqLevelMax", &Item::BindMaxLevel},
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
	void Item::BindID(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Name
	void Item::BindName(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Kind
	void Item::BindKind(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Kind);
	}

	/// \brief Binds a result's column to Slot
	void Item::BindSlot(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Slot);
	}

	/// \brief Binds a result's column to Race
	void Item::BindRace(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Race);
	}

	/// \brief Binds a result's column to ClassId
	void Item::BindClassId(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ClassId);
	}

	/// \brief Binds a result's column to Damage
	void Item::BindDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Damage);
	}

	/// \brief Binds a result's column to Delay
	void Item::BindDelay(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Delay);
	}

	/// \brief Binds a result's column to Range
	void Item::BindRange(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Range);
	}

	/// \brief Binds a result's column to Weight
	void Item::BindWeight(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Weight);
	}

	/// \brief Binds a result's column to Durability
	void Item::BindDurability(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Durability);
	}

	/// \brief Binds a result's column to BuyPrice
	void Item::BindBuyPrice(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BuyPrice);
	}

	/// \brief Binds a result's column to SellPrice
	void Item::BindSellPrice(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.SellPrice);
	}

	/// \brief Binds a result's column to Armor
	void Item::BindArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Armor);
	}

	/// \brief Binds a result's column to Countable
	void Item::BindCountable(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Countable);
	}

	/// \brief Binds a result's column to MagicEffect
	void Item::BindMagicEffect(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.MagicEffect);
	}

	/// \brief Binds a result's column to SpecialEffect
	void Item::BindSpecialEffect(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.SpecialEffect);
	}

	/// \brief Binds a result's column to MinLevel
	void Item::BindMinLevel(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MinLevel);
	}

	/// \brief Binds a result's column to MaxLevel
	void Item::BindMaxLevel(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MaxLevel);
	}

	/// \brief Binds a result's column to RequiredRank
	void Item::BindRequiredRank(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredRank);
	}

	/// \brief Binds a result's column to RequiredTitle
	void Item::BindRequiredTitle(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredTitle);
	}

	/// \brief Binds a result's column to RequiredStrength
	void Item::BindRequiredStrength(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredStrength);
	}

	/// \brief Binds a result's column to RequiredStamina
	void Item::BindRequiredStamina(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredStamina);
	}

	/// \brief Binds a result's column to RequiredDexterity
	void Item::BindRequiredDexterity(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredDexterity);
	}

	/// \brief Binds a result's column to RequiredIntelligence
	void Item::BindRequiredIntelligence(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredIntelligence);
	}

	/// \brief Binds a result's column to RequiredCharisma
	void Item::BindRequiredCharisma(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredCharisma);
	}

	/// \brief Binds a result's column to SellingGroup
	void Item::BindSellingGroup(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SellingGroup);
	}

	/// \brief Binds a result's column to Type
	void Item::BindType(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	/// \brief Binds a result's column to HitRate
	void Item::BindHitRate(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	/// \brief Binds a result's column to EvasionRate
	void Item::BindEvasionRate(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EvasionRate);
	}

	/// \brief Binds a result's column to DaggerArmor
	void Item::BindDaggerArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DaggerArmor);
	}

	/// \brief Binds a result's column to SwordArmor
	void Item::BindSwordArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.SwordArmor);
	}

	/// \brief Binds a result's column to MaceArmor
	void Item::BindMaceArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaceArmor);
	}

	/// \brief Binds a result's column to AxeArmor
	void Item::BindAxeArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AxeArmor);
	}

	/// \brief Binds a result's column to SpearArmor
	void Item::BindSpearArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.SpearArmor);
	}

	/// \brief Binds a result's column to BowArmor
	void Item::BindBowArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.BowArmor);
	}

	/// \brief Binds a result's column to FireDamage
	void Item::BindFireDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FireDamage);
	}

	/// \brief Binds a result's column to IceDamage
	void Item::BindIceDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.IceDamage);
	}

	/// \brief Binds a result's column to LightningDamage
	void Item::BindLightningDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LightningDamage);
	}

	/// \brief Binds a result's column to PoisonDamage
	void Item::BindPoisonDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.PoisonDamage);
	}

	/// \brief Binds a result's column to HpDrain
	void Item::BindHpDrain(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.HpDrain);
	}

	/// \brief Binds a result's column to MpDamage
	void Item::BindMpDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MpDamage);
	}

	/// \brief Binds a result's column to MpDrain
	void Item::BindMpDrain(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MpDrain);
	}

	/// \brief Binds a result's column to MirrorDamage
	void Item::BindMirrorDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MirrorDamage);
	}

	/// \brief Binds a result's column to DropRate
	void Item::BindDropRate(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DropRate);
	}

	/// \brief Binds a result's column to StrengthBonus
	void Item::BindStrengthBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.StrengthBonus);
	}

	/// \brief Binds a result's column to StaminaBonus
	void Item::BindStaminaBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.StaminaBonus);
	}

	/// \brief Binds a result's column to DexterityBonus
	void Item::BindDexterityBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DexterityBonus);
	}

	/// \brief Binds a result's column to IntelligenceBonus
	void Item::BindIntelligenceBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.IntelligenceBonus);
	}

	/// \brief Binds a result's column to CharismaBonus
	void Item::BindCharismaBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CharismaBonus);
	}

	/// \brief Binds a result's column to MaxHpBonus
	void Item::BindMaxHpBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxHpBonus);
	}

	/// \brief Binds a result's column to MaxMpBonus
	void Item::BindMaxMpBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxMpBonus);
	}

	/// \brief Binds a result's column to FireResist
	void Item::BindFireResist(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.FireResist);
	}

	/// \brief Binds a result's column to ColdResist
	void Item::BindColdResist(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ColdResist);
	}

	/// \brief Binds a result's column to LightningResist
	void Item::BindLightningResist(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.LightningResist);
	}

	/// \brief Binds a result's column to MagicResist
	void Item::BindMagicResist(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MagicResist);
	}

	/// \brief Binds a result's column to PoisonResist
	void Item::BindPoisonResist(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PoisonResist);
	}

	/// \brief Binds a result's column to CurseResist
	void Item::BindCurseResist(full_model::Item& m, const nanodbc::result& result, short colIndex)
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
			{"strNpcName", &ItemExchange::BindNpcName},
			{"strNote", &ItemExchange::BindNote},
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
	void ItemExchange::BindIndex(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to NpcNumber
	void ItemExchange::BindNpcNumber(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NpcNumber);
	}

	/// \brief Binds a result's column to NpcName
	void ItemExchange::BindNpcName(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.NpcName);
	}

	/// \brief Binds a result's column to Note
	void ItemExchange::BindNote(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Note);
	}

	/// \brief Binds a result's column to RandomFlag
	void ItemExchange::BindRandomFlag(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RandomFlag);
	}

	/// \brief Binds a result's column to OriginItemNumber1
	void ItemExchange::BindOriginItemNumber1(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.OriginItemNumber1);
	}

	/// \brief Binds a result's column to OriginItemCount1
	void ItemExchange::BindOriginItemCount1(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItemCount1);
	}

	/// \brief Binds a result's column to OriginItemNumber2
	void ItemExchange::BindOriginItemNumber2(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.OriginItemNumber2);
	}

	/// \brief Binds a result's column to OriginItemCount2
	void ItemExchange::BindOriginItemCount2(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItemCount2);
	}

	/// \brief Binds a result's column to OriginItemNumber3
	void ItemExchange::BindOriginItemNumber3(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.OriginItemNumber3);
	}

	/// \brief Binds a result's column to OriginItemCount3
	void ItemExchange::BindOriginItemCount3(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItemCount3);
	}

	/// \brief Binds a result's column to OriginItemNumber4
	void ItemExchange::BindOriginItemNumber4(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.OriginItemNumber4);
	}

	/// \brief Binds a result's column to OriginItemCount4
	void ItemExchange::BindOriginItemCount4(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItemCount4);
	}

	/// \brief Binds a result's column to OriginItemNumber5
	void ItemExchange::BindOriginItemNumber5(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.OriginItemNumber5);
	}

	/// \brief Binds a result's column to OriginItemCount5
	void ItemExchange::BindOriginItemCount5(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItemCount5);
	}

	/// \brief Binds a result's column to ExchangeItemNumber1
	void ItemExchange::BindExchangeItemNumber1(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber1);
	}

	/// \brief Binds a result's column to ExchangeItemCount1
	void ItemExchange::BindExchangeItemCount1(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExchangeItemCount1);
	}

	/// \brief Binds a result's column to ExchangeItemNumber2
	void ItemExchange::BindExchangeItemNumber2(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber2);
	}

	/// \brief Binds a result's column to ExchangeItemCount2
	void ItemExchange::BindExchangeItemCount2(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExchangeItemCount2);
	}

	/// \brief Binds a result's column to ExchangeItemNumber3
	void ItemExchange::BindExchangeItemNumber3(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber3);
	}

	/// \brief Binds a result's column to ExchangeItemCount3
	void ItemExchange::BindExchangeItemCount3(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExchangeItemCount3);
	}

	/// \brief Binds a result's column to ExchangeItemNumber4
	void ItemExchange::BindExchangeItemNumber4(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber4);
	}

	/// \brief Binds a result's column to ExchangeItemCount4
	void ItemExchange::BindExchangeItemCount4(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExchangeItemCount4);
	}

	/// \brief Binds a result's column to ExchangeItemNumber5
	void ItemExchange::BindExchangeItemNumber5(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber5);
	}

	/// \brief Binds a result's column to ExchangeItemCount5
	void ItemExchange::BindExchangeItemCount5(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExchangeItemCount5);
	}

	/// \brief Returns the binding function associated with the column name
	const ItemGroup::BindingsMapType& ItemGroup::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"group", &ItemGroup::BindGroup},
			{"name", &ItemGroup::BindName},
			{"item1", &ItemGroup::BindItem1},
			{"item2", &ItemGroup::BindItem2},
			{"item3", &ItemGroup::BindItem3},
			{"item4", &ItemGroup::BindItem4},
			{"item5", &ItemGroup::BindItem5},
			{"item6", &ItemGroup::BindItem6},
			{"item7", &ItemGroup::BindItem7},
			{"item8", &ItemGroup::BindItem8},
			{"item9", &ItemGroup::BindItem9},
			{"item10", &ItemGroup::BindItem10},
			{"item11", &ItemGroup::BindItem11},
			{"item12", &ItemGroup::BindItem12},
			{"item13", &ItemGroup::BindItem13},
			{"item14", &ItemGroup::BindItem14},
			{"item15", &ItemGroup::BindItem15},
			{"item16", &ItemGroup::BindItem16},
			{"item17", &ItemGroup::BindItem17},
			{"item18", &ItemGroup::BindItem18},
			{"item19", &ItemGroup::BindItem19},
			{"item20", &ItemGroup::BindItem20},
			{"item21", &ItemGroup::BindItem21},
			{"item22", &ItemGroup::BindItem22},
			{"item23", &ItemGroup::BindItem23},
			{"item24", &ItemGroup::BindItem24},
			{"item25", &ItemGroup::BindItem25},
			{"item26", &ItemGroup::BindItem26},
			{"item27", &ItemGroup::BindItem27},
			{"item28", &ItemGroup::BindItem28},
			{"item29", &ItemGroup::BindItem29},
			{"item30", &ItemGroup::BindItem30}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Group
	void ItemGroup::BindGroup(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Group);
	}

	/// \brief Binds a result's column to Name
	void ItemGroup::BindName(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Item1
	void ItemGroup::BindItem1(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item1);
	}

	/// \brief Binds a result's column to Item2
	void ItemGroup::BindItem2(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item2);
	}

	/// \brief Binds a result's column to Item3
	void ItemGroup::BindItem3(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item3);
	}

	/// \brief Binds a result's column to Item4
	void ItemGroup::BindItem4(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item4);
	}

	/// \brief Binds a result's column to Item5
	void ItemGroup::BindItem5(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item5);
	}

	/// \brief Binds a result's column to Item6
	void ItemGroup::BindItem6(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item6);
	}

	/// \brief Binds a result's column to Item7
	void ItemGroup::BindItem7(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item7);
	}

	/// \brief Binds a result's column to Item8
	void ItemGroup::BindItem8(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item8);
	}

	/// \brief Binds a result's column to Item9
	void ItemGroup::BindItem9(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item9);
	}

	/// \brief Binds a result's column to Item10
	void ItemGroup::BindItem10(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item10);
	}

	/// \brief Binds a result's column to Item11
	void ItemGroup::BindItem11(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item11);
	}

	/// \brief Binds a result's column to Item12
	void ItemGroup::BindItem12(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item12);
	}

	/// \brief Binds a result's column to Item13
	void ItemGroup::BindItem13(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item13);
	}

	/// \brief Binds a result's column to Item14
	void ItemGroup::BindItem14(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item14);
	}

	/// \brief Binds a result's column to Item15
	void ItemGroup::BindItem15(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item15);
	}

	/// \brief Binds a result's column to Item16
	void ItemGroup::BindItem16(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item16);
	}

	/// \brief Binds a result's column to Item17
	void ItemGroup::BindItem17(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item17);
	}

	/// \brief Binds a result's column to Item18
	void ItemGroup::BindItem18(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item18);
	}

	/// \brief Binds a result's column to Item19
	void ItemGroup::BindItem19(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item19);
	}

	/// \brief Binds a result's column to Item20
	void ItemGroup::BindItem20(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item20);
	}

	/// \brief Binds a result's column to Item21
	void ItemGroup::BindItem21(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item21);
	}

	/// \brief Binds a result's column to Item22
	void ItemGroup::BindItem22(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item22);
	}

	/// \brief Binds a result's column to Item23
	void ItemGroup::BindItem23(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item23);
	}

	/// \brief Binds a result's column to Item24
	void ItemGroup::BindItem24(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item24);
	}

	/// \brief Binds a result's column to Item25
	void ItemGroup::BindItem25(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item25);
	}

	/// \brief Binds a result's column to Item26
	void ItemGroup::BindItem26(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item26);
	}

	/// \brief Binds a result's column to Item27
	void ItemGroup::BindItem27(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item27);
	}

	/// \brief Binds a result's column to Item28
	void ItemGroup::BindItem28(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item28);
	}

	/// \brief Binds a result's column to Item29
	void ItemGroup::BindItem29(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item29);
	}

	/// \brief Binds a result's column to Item30
	void ItemGroup::BindItem30(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item30);
	}

	/// \brief Returns the binding function associated with the column name
	const ItemUpgrade::BindingsMapType& ItemUpgrade::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nIndex", &ItemUpgrade::BindIndex},
			{"nNPCNum", &ItemUpgrade::BindNpcNumber},
			{"strName", &ItemUpgrade::BindName},
			{"strNote", &ItemUpgrade::BindNote},
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
	void ItemUpgrade::BindIndex(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to NpcNumber
	void ItemUpgrade::BindNpcNumber(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NpcNumber);
	}

	/// \brief Binds a result's column to Name
	void ItemUpgrade::BindName(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Note
	void ItemUpgrade::BindNote(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Note);
	}

	/// \brief Binds a result's column to OriginType
	void ItemUpgrade::BindOriginType(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginType);
	}

	/// \brief Binds a result's column to OriginItem
	void ItemUpgrade::BindOriginItem(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItem);
	}

	/// \brief Binds a result's column to RequiredItem1
	void ItemUpgrade::BindRequiredItem1(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem1);
	}

	/// \brief Binds a result's column to RequiredItem2
	void ItemUpgrade::BindRequiredItem2(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem2);
	}

	/// \brief Binds a result's column to RequiredItem3
	void ItemUpgrade::BindRequiredItem3(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem3);
	}

	/// \brief Binds a result's column to RequiredItem4
	void ItemUpgrade::BindRequiredItem4(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem4);
	}

	/// \brief Binds a result's column to RequiredItem5
	void ItemUpgrade::BindRequiredItem5(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem5);
	}

	/// \brief Binds a result's column to RequiredItem6
	void ItemUpgrade::BindRequiredItem6(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem6);
	}

	/// \brief Binds a result's column to RequiredItem7
	void ItemUpgrade::BindRequiredItem7(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem7);
	}

	/// \brief Binds a result's column to RequiredItem8
	void ItemUpgrade::BindRequiredItem8(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem8);
	}

	/// \brief Binds a result's column to RequiredCoins
	void ItemUpgrade::BindRequiredCoins(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredCoins);
	}

	/// \brief Binds a result's column to RateType
	void ItemUpgrade::BindRateType(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RateType);
	}

	/// \brief Binds a result's column to GenRate
	void ItemUpgrade::BindGenRate(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.GenRate);
	}

	/// \brief Binds a result's column to GiveItem
	void ItemUpgrade::BindGiveItem(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.GiveItem);
	}

	/// \brief Returns the binding function associated with the column name
	const ItemUpProbability::BindingsMapType& ItemUpProbability::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"bType", &ItemUpProbability::BindType},
			{"nMaxSuccess", &ItemUpProbability::BindMaxSuccess},
			{"nMaxFail", &ItemUpProbability::BindMaxFail},
			{"nCurSuccess", &ItemUpProbability::BindCurrentSuccess},
			{"nCurFail", &ItemUpProbability::BindCurrentFailure}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Type
	void ItemUpProbability::BindType(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	/// \brief Binds a result's column to MaxSuccess
	void ItemUpProbability::BindMaxSuccess(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxSuccess);
	}

	/// \brief Binds a result's column to MaxFail
	void ItemUpProbability::BindMaxFail(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxFail);
	}

	/// \brief Binds a result's column to CurrentSuccess
	void ItemUpProbability::BindCurrentSuccess(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CurrentSuccess);
	}

	/// \brief Binds a result's column to CurrentFailure
	void ItemUpProbability::BindCurrentFailure(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CurrentFailure);
	}

	/// \brief Returns the binding function associated with the column name
	const Monster::BindingsMapType& Monster::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sSid", &Monster::BindMonsterId},
			{"strName", &Monster::BindName},
			{"sPid", &Monster::BindPictureId},
			{"sSize", &Monster::BindSize},
			{"iWeapon1", &Monster::BindWeapon1},
			{"iWeapon2", &Monster::BindWeapon2},
			{"byGroup", &Monster::BindGroup},
			{"byActType", &Monster::BindActType},
			{"byType", &Monster::BindType},
			{"byFamily", &Monster::BindFamily},
			{"byRank", &Monster::BindRank},
			{"byTitle", &Monster::BindTitle},
			{"iSellingGroup", &Monster::BindSellingGroup},
			{"sLevel", &Monster::BindLevel},
			{"iExp", &Monster::BindExp},
			{"iLoyalty", &Monster::BindLoyalty},
			{"iHpPoint", &Monster::BindHitPoints},
			{"sMpPoint", &Monster::BindManaPoints},
			{"sAtk", &Monster::BindAttack},
			{"sAc", &Monster::BindArmor},
			{"sHitRate", &Monster::BindHitRate},
			{"sEvadeRate", &Monster::BindEvadeRate},
			{"sDamage", &Monster::BindDamage},
			{"sAttackDelay", &Monster::BindAttackDelay},
			{"bySpeed1", &Monster::BindWalkSpeed},
			{"bySpeed2", &Monster::BindRunSpeed},
			{"sStandtime", &Monster::BindStandTime},
			{"iMagic1", &Monster::BindMagic1},
			{"iMagic2", &Monster::BindMagic2},
			{"iMagic3", &Monster::BindMagic3},
			{"sFireR", &Monster::BindFireResist},
			{"sColdR", &Monster::BindColdResist},
			{"sLightningR", &Monster::BindLightningResist},
			{"sMagicR", &Monster::BindMagicResist},
			{"sDiseaseR", &Monster::BindDiseaseResist},
			{"sPoisonR", &Monster::BindPoisonResist},
			{"sLightR", &Monster::BindLightResist},
			{"sBulk", &Monster::BindBulk},
			{"byAttackRange", &Monster::BindAttackRange},
			{"bySearchRange", &Monster::BindSearchRange},
			{"byTracingRange", &Monster::BindTracingRange},
			{"iMoney", &Monster::BindMoney},
			{"sItem", &Monster::BindItem},
			{"byDirectAttack", &Monster::BindDirectAttack},
			{"byMagicAttack", &Monster::BindMagicAttack},
			{"byMoneyType", &Monster::BindMoneyType}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to MonsterId
	void Monster::BindMonsterId(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterId);
	}

	/// \brief Binds a result's column to Name
	void Monster::BindName(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to PictureId
	void Monster::BindPictureId(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PictureId);
	}

	/// \brief Binds a result's column to Size
	void Monster::BindSize(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Size);
	}

	/// \brief Binds a result's column to Weapon1
	void Monster::BindWeapon1(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Weapon1);
	}

	/// \brief Binds a result's column to Weapon2
	void Monster::BindWeapon2(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Weapon2);
	}

	/// \brief Binds a result's column to Group
	void Monster::BindGroup(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Group);
	}

	/// \brief Binds a result's column to ActType
	void Monster::BindActType(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ActType);
	}

	/// \brief Binds a result's column to Type
	void Monster::BindType(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	/// \brief Binds a result's column to Family
	void Monster::BindFamily(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Family);
	}

	/// \brief Binds a result's column to Rank
	void Monster::BindRank(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Rank);
	}

	/// \brief Binds a result's column to Title
	void Monster::BindTitle(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Title);
	}

	/// \brief Binds a result's column to SellingGroup
	void Monster::BindSellingGroup(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.SellingGroup);
	}

	/// \brief Binds a result's column to Level
	void Monster::BindLevel(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Level);
	}

	/// \brief Binds a result's column to Exp
	void Monster::BindExp(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Exp);
	}

	/// \brief Binds a result's column to Loyalty
	void Monster::BindLoyalty(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Loyalty);
	}

	/// \brief Binds a result's column to HitPoints
	void Monster::BindHitPoints(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.HitPoints);
	}

	/// \brief Binds a result's column to ManaPoints
	void Monster::BindManaPoints(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ManaPoints);
	}

	/// \brief Binds a result's column to Attack
	void Monster::BindAttack(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Attack);
	}

	/// \brief Binds a result's column to Armor
	void Monster::BindArmor(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Armor);
	}

	/// \brief Binds a result's column to HitRate
	void Monster::BindHitRate(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	/// \brief Binds a result's column to EvadeRate
	void Monster::BindEvadeRate(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EvadeRate);
	}

	/// \brief Binds a result's column to Damage
	void Monster::BindDamage(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Damage);
	}

	/// \brief Binds a result's column to AttackDelay
	void Monster::BindAttackDelay(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AttackDelay);
	}

	/// \brief Binds a result's column to WalkSpeed
	void Monster::BindWalkSpeed(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WalkSpeed);
	}

	/// \brief Binds a result's column to RunSpeed
	void Monster::BindRunSpeed(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RunSpeed);
	}

	/// \brief Binds a result's column to StandTime
	void Monster::BindStandTime(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.StandTime);
	}

	/// \brief Binds a result's column to Magic1
	void Monster::BindMagic1(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic1);
	}

	/// \brief Binds a result's column to Magic2
	void Monster::BindMagic2(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic2);
	}

	/// \brief Binds a result's column to Magic3
	void Monster::BindMagic3(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic3);
	}

	/// \brief Binds a result's column to FireResist
	void Monster::BindFireResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.FireResist);
	}

	/// \brief Binds a result's column to ColdResist
	void Monster::BindColdResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ColdResist);
	}

	/// \brief Binds a result's column to LightningResist
	void Monster::BindLightningResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.LightningResist);
	}

	/// \brief Binds a result's column to MagicResist
	void Monster::BindMagicResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MagicResist);
	}

	/// \brief Binds a result's column to DiseaseResist
	void Monster::BindDiseaseResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DiseaseResist);
	}

	/// \brief Binds a result's column to PoisonResist
	void Monster::BindPoisonResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PoisonResist);
	}

	/// \brief Binds a result's column to LightResist
	void Monster::BindLightResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.LightResist);
	}

	/// \brief Binds a result's column to Bulk
	void Monster::BindBulk(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Bulk);
	}

	/// \brief Binds a result's column to AttackRange
	void Monster::BindAttackRange(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.AttackRange);
	}

	/// \brief Binds a result's column to SearchRange
	void Monster::BindSearchRange(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SearchRange);
	}

	/// \brief Binds a result's column to TracingRange
	void Monster::BindTracingRange(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TracingRange);
	}

	/// \brief Binds a result's column to Money
	void Monster::BindMoney(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Money);
	}

	/// \brief Binds a result's column to Item
	void Monster::BindItem(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Item);
	}

	/// \brief Binds a result's column to DirectAttack
	void Monster::BindDirectAttack(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DirectAttack);
	}

	/// \brief Binds a result's column to MagicAttack
	void Monster::BindMagicAttack(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MagicAttack);
	}

	/// \brief Binds a result's column to MoneyType
	void Monster::BindMoneyType(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MoneyType);
	}

	/// \brief Returns the binding function associated with the column name
	const MonsterItem::BindingsMapType& MonsterItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &MonsterItem::BindMonsterId},
			{"iItem01", &MonsterItem::BindItemId1},
			{"sPersent01", &MonsterItem::BindDropChance1},
			{"iItem02", &MonsterItem::BindItemId2},
			{"sPersent02", &MonsterItem::BindDropChance2},
			{"iItem03", &MonsterItem::BindItemId3},
			{"sPersent03", &MonsterItem::BindDropChance3},
			{"iItem04", &MonsterItem::BindItemId4},
			{"sPersent04", &MonsterItem::BindDropChance4},
			{"iItem05", &MonsterItem::BindItemId5},
			{"sPersent05", &MonsterItem::BindDropChance5}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to MonsterId
	void MonsterItem::BindMonsterId(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterId);
	}

	/// \brief Binds a result's column to ItemId1
	void MonsterItem::BindItemId1(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId1);
	}

	/// \brief Binds a result's column to DropChance1
	void MonsterItem::BindDropChance1(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DropChance1);
	}

	/// \brief Binds a result's column to ItemId2
	void MonsterItem::BindItemId2(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId2);
	}

	/// \brief Binds a result's column to DropChance2
	void MonsterItem::BindDropChance2(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DropChance2);
	}

	/// \brief Binds a result's column to ItemId3
	void MonsterItem::BindItemId3(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId3);
	}

	/// \brief Binds a result's column to DropChance3
	void MonsterItem::BindDropChance3(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DropChance3);
	}

	/// \brief Binds a result's column to ItemId4
	void MonsterItem::BindItemId4(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId4);
	}

	/// \brief Binds a result's column to DropChance4
	void MonsterItem::BindDropChance4(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DropChance4);
	}

	/// \brief Binds a result's column to ItemId5
	void MonsterItem::BindItemId5(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId5);
	}

	/// \brief Binds a result's column to DropChance5
	void MonsterItem::BindDropChance5(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DropChance5);
	}

	/// \brief Returns the binding function associated with the column name
	const Npc::BindingsMapType& Npc::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sSid", &Npc::BindNpcId},
			{"strName", &Npc::BindName},
			{"sPid", &Npc::BindPictureId},
			{"sSize", &Npc::BindSize},
			{"iWeapon1", &Npc::BindWeapon1},
			{"iWeapon2", &Npc::BindWeapon2},
			{"byGroup", &Npc::BindGroup},
			{"byActType", &Npc::BindActType},
			{"byType", &Npc::BindType},
			{"byFamily", &Npc::BindFamily},
			{"byRank", &Npc::BindRank},
			{"byTitle", &Npc::BindTitle},
			{"iSellingGroup", &Npc::BindSellingGroup},
			{"sLevel", &Npc::BindLevel},
			{"iExp", &Npc::BindExp},
			{"iLoyalty", &Npc::BindLoyalty},
			{"iHpPoint", &Npc::BindHitPoints},
			{"sMpPoint", &Npc::BindManaPoints},
			{"sAtk", &Npc::BindAttack},
			{"sAc", &Npc::BindArmor},
			{"sHitRate", &Npc::BindHitRate},
			{"sEvadeRate", &Npc::BindEvadeRate},
			{"sDamage", &Npc::BindDamage},
			{"sAttackDelay", &Npc::BindAttackDelay},
			{"bySpeed1", &Npc::BindWalkSpeed},
			{"bySpeed2", &Npc::BindRunSpeed},
			{"sStandtime", &Npc::BindStandTime},
			{"iMagic1", &Npc::BindMagic1},
			{"iMagic2", &Npc::BindMagic2},
			{"iMagic3", &Npc::BindMagic3},
			{"sFireR", &Npc::BindFireResist},
			{"sColdR", &Npc::BindColdResist},
			{"sLightningR", &Npc::BindLightningResist},
			{"sMagicR", &Npc::BindMagicResist},
			{"sDiseaseR", &Npc::BindDiseaseResist},
			{"sPoisonR", &Npc::BindPoisonResist},
			{"sLightR", &Npc::BindLightResist},
			{"sBulk", &Npc::BindBulk},
			{"byAttackRange", &Npc::BindAttackRange},
			{"bySearchRange", &Npc::BindSearchRange},
			{"byTracingRange", &Npc::BindTracingRange},
			{"iMoney", &Npc::BindMoney},
			{"sItem", &Npc::BindItem},
			{"byDirectAttack", &Npc::BindDirectAttack},
			{"byMagicAttack", &Npc::BindMagicAttack},
			{"byMoneyType", &Npc::BindMoneyType}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to NpcId
	void Npc::BindNpcId(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NpcId);
	}

	/// \brief Binds a result's column to Name
	void Npc::BindName(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to PictureId
	void Npc::BindPictureId(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PictureId);
	}

	/// \brief Binds a result's column to Size
	void Npc::BindSize(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Size);
	}

	/// \brief Binds a result's column to Weapon1
	void Npc::BindWeapon1(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Weapon1);
	}

	/// \brief Binds a result's column to Weapon2
	void Npc::BindWeapon2(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Weapon2);
	}

	/// \brief Binds a result's column to Group
	void Npc::BindGroup(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Group);
	}

	/// \brief Binds a result's column to ActType
	void Npc::BindActType(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ActType);
	}

	/// \brief Binds a result's column to Type
	void Npc::BindType(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	/// \brief Binds a result's column to Family
	void Npc::BindFamily(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Family);
	}

	/// \brief Binds a result's column to Rank
	void Npc::BindRank(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Rank);
	}

	/// \brief Binds a result's column to Title
	void Npc::BindTitle(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Title);
	}

	/// \brief Binds a result's column to SellingGroup
	void Npc::BindSellingGroup(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.SellingGroup);
	}

	/// \brief Binds a result's column to Level
	void Npc::BindLevel(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Level);
	}

	/// \brief Binds a result's column to Exp
	void Npc::BindExp(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Exp);
	}

	/// \brief Binds a result's column to Loyalty
	void Npc::BindLoyalty(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Loyalty);
	}

	/// \brief Binds a result's column to HitPoints
	void Npc::BindHitPoints(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.HitPoints);
	}

	/// \brief Binds a result's column to ManaPoints
	void Npc::BindManaPoints(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ManaPoints);
	}

	/// \brief Binds a result's column to Attack
	void Npc::BindAttack(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Attack);
	}

	/// \brief Binds a result's column to Armor
	void Npc::BindArmor(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Armor);
	}

	/// \brief Binds a result's column to HitRate
	void Npc::BindHitRate(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	/// \brief Binds a result's column to EvadeRate
	void Npc::BindEvadeRate(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EvadeRate);
	}

	/// \brief Binds a result's column to Damage
	void Npc::BindDamage(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Damage);
	}

	/// \brief Binds a result's column to AttackDelay
	void Npc::BindAttackDelay(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AttackDelay);
	}

	/// \brief Binds a result's column to WalkSpeed
	void Npc::BindWalkSpeed(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WalkSpeed);
	}

	/// \brief Binds a result's column to RunSpeed
	void Npc::BindRunSpeed(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RunSpeed);
	}

	/// \brief Binds a result's column to StandTime
	void Npc::BindStandTime(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.StandTime);
	}

	/// \brief Binds a result's column to Magic1
	void Npc::BindMagic1(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic1);
	}

	/// \brief Binds a result's column to Magic2
	void Npc::BindMagic2(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic2);
	}

	/// \brief Binds a result's column to Magic3
	void Npc::BindMagic3(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic3);
	}

	/// \brief Binds a result's column to FireResist
	void Npc::BindFireResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.FireResist);
	}

	/// \brief Binds a result's column to ColdResist
	void Npc::BindColdResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ColdResist);
	}

	/// \brief Binds a result's column to LightningResist
	void Npc::BindLightningResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.LightningResist);
	}

	/// \brief Binds a result's column to MagicResist
	void Npc::BindMagicResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MagicResist);
	}

	/// \brief Binds a result's column to DiseaseResist
	void Npc::BindDiseaseResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DiseaseResist);
	}

	/// \brief Binds a result's column to PoisonResist
	void Npc::BindPoisonResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PoisonResist);
	}

	/// \brief Binds a result's column to LightResist
	void Npc::BindLightResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.LightResist);
	}

	/// \brief Binds a result's column to Bulk
	void Npc::BindBulk(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Bulk);
	}

	/// \brief Binds a result's column to AttackRange
	void Npc::BindAttackRange(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.AttackRange);
	}

	/// \brief Binds a result's column to SearchRange
	void Npc::BindSearchRange(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SearchRange);
	}

	/// \brief Binds a result's column to TracingRange
	void Npc::BindTracingRange(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TracingRange);
	}

	/// \brief Binds a result's column to Money
	void Npc::BindMoney(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Money);
	}

	/// \brief Binds a result's column to Item
	void Npc::BindItem(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Item);
	}

	/// \brief Binds a result's column to DirectAttack
	void Npc::BindDirectAttack(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DirectAttack);
	}

	/// \brief Binds a result's column to MagicAttack
	void Npc::BindMagicAttack(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MagicAttack);
	}

	/// \brief Binds a result's column to MoneyType
	void Npc::BindMoneyType(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MoneyType);
	}

	/// \brief Returns the binding function associated with the column name
	const NpcItem::BindingsMapType& NpcItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &NpcItem::BindNpcId},
			{"iItem01", &NpcItem::BindItemId1},
			{"sPersent01", &NpcItem::BindDropChance1},
			{"iItem02", &NpcItem::BindItemId2},
			{"sPersent02", &NpcItem::BindDropChance2},
			{"iItem03", &NpcItem::BindItemId3},
			{"sPersent03", &NpcItem::BindDropChance3},
			{"iItem04", &NpcItem::BindItemId4},
			{"sPersent04", &NpcItem::BindDropChance4},
			{"iItem05", &NpcItem::BindItemId5},
			{"sPersent05", &NpcItem::BindDropChance5}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to NpcId
	void NpcItem::BindNpcId(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NpcId);
	}

	/// \brief Binds a result's column to ItemId1
	void NpcItem::BindItemId1(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId1);
	}

	/// \brief Binds a result's column to DropChance1
	void NpcItem::BindDropChance1(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.DropChance1);
	}

	/// \brief Binds a result's column to ItemId2
	void NpcItem::BindItemId2(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.ItemId2);
	}

	/// \brief Binds a result's column to DropChance2
	void NpcItem::BindDropChance2(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.DropChance2);
	}

	/// \brief Binds a result's column to ItemId3
	void NpcItem::BindItemId3(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.ItemId3);
	}

	/// \brief Binds a result's column to DropChance3
	void NpcItem::BindDropChance3(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.DropChance3);
	}

	/// \brief Binds a result's column to ItemId4
	void NpcItem::BindItemId4(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.ItemId4);
	}

	/// \brief Binds a result's column to DropChance4
	void NpcItem::BindDropChance4(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.DropChance4);
	}

	/// \brief Binds a result's column to ItemId5
	void NpcItem::BindItemId5(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.ItemId5);
	}

	/// \brief Binds a result's column to DropChance5
	void NpcItem::BindDropChance5(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.DropChance5);
	}

	/// \brief Returns the binding function associated with the column name
	const NpcMoveItem::BindingsMapType& NpcMoveItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sCastleIndex", &NpcMoveItem::BindCastleIndex},
			{"byChangeItem", &NpcMoveItem::BindChangeItem},
			{"sChangeSid", &NpcMoveItem::BindChangeId},
			{"byMoveItem", &NpcMoveItem::BindMoveItem},
			{"sMoveMinX", &NpcMoveItem::BindMoveMinX},
			{"sMoveMinY", &NpcMoveItem::BindMoveMinY},
			{"sMoveMaxX", &NpcMoveItem::BindMoveMaxX},
			{"sMoveMaxY", &NpcMoveItem::BindMoveMaxY}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to CastleIndex
	void NpcMoveItem::BindCastleIndex(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CastleIndex);
	}

	/// \brief Binds a result's column to ChangeItem
	void NpcMoveItem::BindChangeItem(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.ChangeItem);
	}

	/// \brief Binds a result's column to ChangeId
	void NpcMoveItem::BindChangeId(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.ChangeId);
	}

	/// \brief Binds a result's column to MoveItem
	void NpcMoveItem::BindMoveItem(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.MoveItem);
	}

	/// \brief Binds a result's column to MoveMinX
	void NpcMoveItem::BindMoveMinX(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMinX);
	}

	/// \brief Binds a result's column to MoveMinY
	void NpcMoveItem::BindMoveMinY(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMinY);
	}

	/// \brief Binds a result's column to MoveMaxX
	void NpcMoveItem::BindMoveMaxX(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMaxX);
	}

	/// \brief Binds a result's column to MoveMaxY
	void NpcMoveItem::BindMoveMaxY(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMaxY);
	}

	/// \brief Returns the binding function associated with the column name
	const NpcPos::BindingsMapType& NpcPos::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"ZoneID", &NpcPos::BindZoneId},
			{"NpcID", &NpcPos::BindNpcId},
			{"ActType", &NpcPos::BindActType},
			{"RegenType", &NpcPos::BindRegenType},
			{"DungeonFamily", &NpcPos::BindDungeonFamily},
			{"SpecialType", &NpcPos::BindSpecialType},
			{"TrapNumber", &NpcPos::BindTrapNumber},
			{"LeftX", &NpcPos::BindLeftX},
			{"TopZ", &NpcPos::BindTopZ},
			{"RightX", &NpcPos::BindRightX},
			{"BottomZ", &NpcPos::BindBottomZ},
			{"LimitMinZ", &NpcPos::BindLimitMinZ},
			{"LimitMinX", &NpcPos::BindLimitMinX},
			{"LimitMaxX", &NpcPos::BindLimitMaxX},
			{"LimitMaxZ", &NpcPos::BindLimitMaxZ},
			{"NumNPC", &NpcPos::BindNumNpc},
			{"RegTime", &NpcPos::BindRespawnTime},
			{"byDirection", &NpcPos::BindDirection},
			{"DotCnt", &NpcPos::BindPathPointCount},
			{"path", &NpcPos::BindPath}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ZoneId
	void NpcPos::BindZoneId(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ZoneId);
	}

	/// \brief Binds a result's column to NpcId
	void NpcPos::BindNpcId(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.NpcId);
	}

	/// \brief Binds a result's column to ActType
	void NpcPos::BindActType(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ActType);
	}

	/// \brief Binds a result's column to RegenType
	void NpcPos::BindRegenType(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RegenType);
	}

	/// \brief Binds a result's column to DungeonFamily
	void NpcPos::BindDungeonFamily(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DungeonFamily);
	}

	/// \brief Binds a result's column to SpecialType
	void NpcPos::BindSpecialType(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SpecialType);
	}

	/// \brief Binds a result's column to TrapNumber
	void NpcPos::BindTrapNumber(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TrapNumber);
	}

	/// \brief Binds a result's column to LeftX
	void NpcPos::BindLeftX(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LeftX);
	}

	/// \brief Binds a result's column to TopZ
	void NpcPos::BindTopZ(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.TopZ);
	}

	/// \brief Binds a result's column to RightX
	void NpcPos::BindRightX(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RightX);
	}

	/// \brief Binds a result's column to BottomZ
	void NpcPos::BindBottomZ(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BottomZ);
	}

	/// \brief Binds a result's column to LimitMinZ
	void NpcPos::BindLimitMinZ(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LimitMinZ);
	}

	/// \brief Binds a result's column to LimitMinX
	void NpcPos::BindLimitMinX(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LimitMinX);
	}

	/// \brief Binds a result's column to LimitMaxX
	void NpcPos::BindLimitMaxX(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LimitMaxX);
	}

	/// \brief Binds a result's column to LimitMaxZ
	void NpcPos::BindLimitMaxZ(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LimitMaxZ);
	}

	/// \brief Binds a result's column to NumNpc
	void NpcPos::BindNumNpc(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NumNpc);
	}

	/// \brief Binds a result's column to RespawnTime
	void NpcPos::BindRespawnTime(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RespawnTime);
	}

	/// \brief Binds a result's column to Direction
	void NpcPos::BindDirection(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Direction);
	}

	/// \brief Binds a result's column to PathPointCount
	void NpcPos::BindPathPointCount(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.PathPointCount);
	}

	/// \brief Binds a result's column to Path
	void NpcPos::BindPath(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Path);
	}

	/// \brief Returns the binding function associated with the column name
	const KingBallotBox::BindingsMapType& KingBallotBox::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strAccountID", &KingBallotBox::BindAccountId},
			{"strCharID", &KingBallotBox::BindCharId},
			{"byNation", &KingBallotBox::BindNation},
			{"strCandidacyID", &KingBallotBox::BindCandidateId}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to AccountId
	void KingBallotBox::BindAccountId(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	/// \brief Binds a result's column to CharId
	void KingBallotBox::BindCharId(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	/// \brief Binds a result's column to Nation
	void KingBallotBox::BindNation(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	/// \brief Binds a result's column to CandidateId
	void KingBallotBox::BindCandidateId(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CandidateId);
	}

	/// \brief Returns the binding function associated with the column name
	const KingCandidacyNoticeBoard::BindingsMapType& KingCandidacyNoticeBoard::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strUserID", &KingCandidacyNoticeBoard::BindCandidateId},
			{"byNation", &KingCandidacyNoticeBoard::BindNation},
			{"sNoticeLen", &KingCandidacyNoticeBoard::BindNoticeLength},
			{"strNotice", &KingCandidacyNoticeBoard::BindNotice}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to CandidateId
	void KingCandidacyNoticeBoard::BindCandidateId(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CandidateId);
	}

	/// \brief Binds a result's column to Nation
	void KingCandidacyNoticeBoard::BindNation(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	/// \brief Binds a result's column to NoticeLength
	void KingCandidacyNoticeBoard::BindNoticeLength(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NoticeLength);
	}

	/// \brief Binds a result's column to Notice
	void KingCandidacyNoticeBoard::BindNotice(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.Notice);
	}

	/// \brief Returns the binding function associated with the column name
	const KingElectionList::BindingsMapType& KingElectionList::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"byType", &KingElectionList::BindType},
			{"byNation", &KingElectionList::BindNation},
			{"nKnights", &KingElectionList::BindKnights},
			{"strName", &KingElectionList::BindName},
			{"nMoney", &KingElectionList::BindMoney}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Type
	void KingElectionList::BindType(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	/// \brief Binds a result's column to Nation
	void KingElectionList::BindNation(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	/// \brief Binds a result's column to Knights
	void KingElectionList::BindKnights(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Knights);
	}

	/// \brief Binds a result's column to Name
	void KingElectionList::BindName(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Money
	void KingElectionList::BindMoney(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Money);
	}

	/// \brief Returns the binding function associated with the column name
	const KingSystem::BindingsMapType& KingSystem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"byNation", &KingSystem::BindNation},
			{"byType", &KingSystem::BindType},
			{"sYear", &KingSystem::BindYear},
			{"byMonth", &KingSystem::BindMonth},
			{"byDay", &KingSystem::BindDay},
			{"byHour", &KingSystem::BindHour},
			{"byMinute", &KingSystem::BindMinute},
			{"byImType", &KingSystem::BindImType},
			{"sImYear", &KingSystem::BindImYear},
			{"byImMonth", &KingSystem::BindImMonth},
			{"byImDay", &KingSystem::BindImDay},
			{"byImHour", &KingSystem::BindImHour},
			{"byImMinute", &KingSystem::BindImMinute},
			{"byNoahEvent", &KingSystem::BindNoahEvent},
			{"byNoahEvent_Day", &KingSystem::BindNoahEventDay},
			{"byNoahEvent_Hour", &KingSystem::BindNoahEventHour},
			{"byNoahEvent_Minute", &KingSystem::BindNoahEventMinute},
			{"sNoahEvent_Duration", &KingSystem::BindNoahEventDuration},
			{"byExpEvent", &KingSystem::BindExpEvent},
			{"byExpEvent_Day", &KingSystem::BindExpEventDay},
			{"byExpEvent_Hour", &KingSystem::BindExpEventHour},
			{"byExpEvent_Minute", &KingSystem::BindExpEventMinute},
			{"sExpEvent_Duration", &KingSystem::BindExpEventDuration},
			{"nTribute", &KingSystem::BindTribute},
			{"byTerritoryTariff", &KingSystem::BindTerritoryTariff},
			{"nTerritoryTax", &KingSystem::BindTerritoryTax},
			{"nNationalTreasury", &KingSystem::BindNationalTreasury},
			{"strKingName", &KingSystem::BindKingName},
			{"strImRequestID", &KingSystem::BindImRequestId}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Nation
	void KingSystem::BindNation(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	/// \brief Binds a result's column to Type
	void KingSystem::BindType(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	/// \brief Binds a result's column to Year
	void KingSystem::BindYear(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Year);
	}

	/// \brief Binds a result's column to Month
	void KingSystem::BindMonth(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Month);
	}

	/// \brief Binds a result's column to Day
	void KingSystem::BindDay(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Day);
	}

	/// \brief Binds a result's column to Hour
	void KingSystem::BindHour(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Hour);
	}

	/// \brief Binds a result's column to Minute
	void KingSystem::BindMinute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Minute);
	}

	/// \brief Binds a result's column to ImType
	void KingSystem::BindImType(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ImType);
	}

	/// \brief Binds a result's column to ImYear
	void KingSystem::BindImYear(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ImYear);
	}

	/// \brief Binds a result's column to ImMonth
	void KingSystem::BindImMonth(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ImMonth);
	}

	/// \brief Binds a result's column to ImDay
	void KingSystem::BindImDay(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ImDay);
	}

	/// \brief Binds a result's column to ImHour
	void KingSystem::BindImHour(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ImHour);
	}

	/// \brief Binds a result's column to ImMinute
	void KingSystem::BindImMinute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ImMinute);
	}

	/// \brief Binds a result's column to NoahEvent
	void KingSystem::BindNoahEvent(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NoahEvent);
	}

	/// \brief Binds a result's column to NoahEventDay
	void KingSystem::BindNoahEventDay(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NoahEventDay);
	}

	/// \brief Binds a result's column to NoahEventHour
	void KingSystem::BindNoahEventHour(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NoahEventHour);
	}

	/// \brief Binds a result's column to NoahEventMinute
	void KingSystem::BindNoahEventMinute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NoahEventMinute);
	}

	/// \brief Binds a result's column to NoahEventDuration
	void KingSystem::BindNoahEventDuration(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NoahEventDuration);
	}

	/// \brief Binds a result's column to ExpEvent
	void KingSystem::BindExpEvent(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ExpEvent);
	}

	/// \brief Binds a result's column to ExpEventDay
	void KingSystem::BindExpEventDay(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ExpEventDay);
	}

	/// \brief Binds a result's column to ExpEventHour
	void KingSystem::BindExpEventHour(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ExpEventHour);
	}

	/// \brief Binds a result's column to ExpEventMinute
	void KingSystem::BindExpEventMinute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ExpEventMinute);
	}

	/// \brief Binds a result's column to ExpEventDuration
	void KingSystem::BindExpEventDuration(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExpEventDuration);
	}

	/// \brief Binds a result's column to Tribute
	void KingSystem::BindTribute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Tribute);
	}

	/// \brief Binds a result's column to TerritoryTariff
	void KingSystem::BindTerritoryTariff(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TerritoryTariff);
	}

	/// \brief Binds a result's column to TerritoryTax
	void KingSystem::BindTerritoryTax(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.TerritoryTax);
	}

	/// \brief Binds a result's column to NationalTreasury
	void KingSystem::BindNationalTreasury(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.NationalTreasury);
	}

	/// \brief Binds a result's column to KingName
	void KingSystem::BindKingName(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.KingName);
	}

	/// \brief Binds a result's column to ImRequestId
	void KingSystem::BindImRequestId(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ImRequestId);
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
			{"CreateTime", &Knights::BindCreateTime},
			{"sMarkVersion", &Knights::BindMarkVersion},
			{"sMarkLen", &Knights::BindMarkLength},
			{"Mark", &Knights::BindMark},
			{"Stash", &Knights::BindStash},
			{"bySiegeFlag", &Knights::BindSiegeFlag},
			{"sAllianceKnights", &Knights::BindAllianceKnights},
			{"sCape", &Knights::BindCape}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ID
	void Knights::BindID(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Flag
	void Knights::BindFlag(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Flag);
	}

	/// \brief Binds a result's column to Nation
	void Knights::BindNation(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	/// \brief Binds a result's column to Ranking
	void Knights::BindRanking(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Ranking);
	}

	/// \brief Binds a result's column to Name
	void Knights::BindName(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Members
	void Knights::BindMembers(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Members);
	}

	/// \brief Binds a result's column to Chief
	void Knights::BindChief(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Chief);
	}

	/// \brief Binds a result's column to ViceChief1
	void Knights::BindViceChief1(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ViceChief1);
	}

	/// \brief Binds a result's column to ViceChief2
	void Knights::BindViceChief2(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ViceChief2);
	}

	/// \brief Binds a result's column to ViceChief3
	void Knights::BindViceChief3(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ViceChief3);
	}

	/// \brief Binds a result's column to EnemyName
	void Knights::BindEnemyName(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.EnemyName);
	}

	/// \brief Binds a result's column to OldWarResult
	void Knights::BindOldWarResult(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.OldWarResult);
	}

	/// \brief Binds a result's column to WarEnemyId
	void Knights::BindWarEnemyId(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.WarEnemyId);
	}

	/// \brief Binds a result's column to Victory
	void Knights::BindVictory(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Victory);
	}

	/// \brief Binds a result's column to Lose
	void Knights::BindLose(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Lose);
	}

	/// \brief Binds a result's column to Gold
	void Knights::BindGold(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int64_t>(colIndex, m.Gold);
	}

	/// \brief Binds a result's column to Domination
	void Knights::BindDomination(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Domination);
	}

	/// \brief Binds a result's column to Points
	void Knights::BindPoints(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Points);
	}

	/// \brief Binds a result's column to CreateTime
	void Knights::BindCreateTime(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.CreateTime = binderUtil::CTimeFromDbTime(tmpValue);
	}

	/// \brief Binds a result's column to MarkVersion
	void Knights::BindMarkVersion(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MarkVersion);
	}

	/// \brief Binds a result's column to MarkLength
	void Knights::BindMarkLength(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MarkLength);
	}

	/// \brief Binds a result's column to Mark
	void Knights::BindMark(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.Mark);
	}

	/// \brief Binds a result's column to Stash
	void Knights::BindStash(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.Stash);
	}

	/// \brief Binds a result's column to SiegeFlag
	void Knights::BindSiegeFlag(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SiegeFlag);
	}

	/// \brief Binds a result's column to AllianceKnights
	void Knights::BindAllianceKnights(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AllianceKnights);
	}

	/// \brief Binds a result's column to Cape
	void Knights::BindCape(full_model::Knights& m, const nanodbc::result& result, short colIndex)
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
	void KnightsAlliance::BindMainAllianceKnights(full_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MainAllianceKnights);
	}

	/// \brief Binds a result's column to SubAllianceKnights
	void KnightsAlliance::BindSubAllianceKnights(full_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.SubAllianceKnights);
	}

	/// \brief Binds a result's column to MercenaryClan1
	void KnightsAlliance::BindMercenaryClan1(full_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MercenaryClan1);
	}

	/// \brief Binds a result's column to MercenaryClan2
	void KnightsAlliance::BindMercenaryClan2(full_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MercenaryClan2);
	}

	/// \brief Returns the binding function associated with the column name
	const KnightsCape::BindingsMapType& KnightsCape::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sCapeIndex", &KnightsCape::BindCapeIndex},
			{"strName", &KnightsCape::BindName},
			{"nBuyPrice", &KnightsCape::BindBuyPrice},
			{"nDuration", &KnightsCape::BindDuration},
			{"byGrade", &KnightsCape::BindGrade}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to CapeIndex
	void KnightsCape::BindCapeIndex(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CapeIndex);
	}

	/// \brief Binds a result's column to Name
	void KnightsCape::BindName(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to BuyPrice
	void KnightsCape::BindBuyPrice(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BuyPrice);
	}

	/// \brief Binds a result's column to Duration
	void KnightsCape::BindDuration(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Duration);
	}

	/// \brief Binds a result's column to Grade
	void KnightsCape::BindGrade(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
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
	void KnightsRating::BindRank(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Rank);
	}

	/// \brief Binds a result's column to Index
	void KnightsRating::BindIndex(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to Name
	void KnightsRating::BindName(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Points
	void KnightsRating::BindPoints(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
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
	void KnightsSiegeWarfare::BindCastleIndex(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CastleIndex);
	}

	/// \brief Binds a result's column to MasterKnights
	void KnightsSiegeWarfare::BindMasterKnights(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MasterKnights);
	}

	/// \brief Binds a result's column to SiegeType
	void KnightsSiegeWarfare::BindSiegeType(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SiegeType);
	}

	/// \brief Binds a result's column to WarDay
	void KnightsSiegeWarfare::BindWarDay(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarDay);
	}

	/// \brief Binds a result's column to WarHour
	void KnightsSiegeWarfare::BindWarHour(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarHour);
	}

	/// \brief Binds a result's column to WarMinute
	void KnightsSiegeWarfare::BindWarMinute(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarMinute);
	}

	/// \brief Binds a result's column to ChallengeList1
	void KnightsSiegeWarfare::BindChallengeList1(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList1);
	}

	/// \brief Binds a result's column to ChallengeList2
	void KnightsSiegeWarfare::BindChallengeList2(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList2);
	}

	/// \brief Binds a result's column to ChallengeList3
	void KnightsSiegeWarfare::BindChallengeList3(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList3);
	}

	/// \brief Binds a result's column to ChallengeList4
	void KnightsSiegeWarfare::BindChallengeList4(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList4);
	}

	/// \brief Binds a result's column to ChallengeList5
	void KnightsSiegeWarfare::BindChallengeList5(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList5);
	}

	/// \brief Binds a result's column to ChallengeList6
	void KnightsSiegeWarfare::BindChallengeList6(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList6);
	}

	/// \brief Binds a result's column to ChallengeList7
	void KnightsSiegeWarfare::BindChallengeList7(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList7);
	}

	/// \brief Binds a result's column to ChallengeList8
	void KnightsSiegeWarfare::BindChallengeList8(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList8);
	}

	/// \brief Binds a result's column to ChallengeList9
	void KnightsSiegeWarfare::BindChallengeList9(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList9);
	}

	/// \brief Binds a result's column to ChallengeList10
	void KnightsSiegeWarfare::BindChallengeList10(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList10);
	}

	/// \brief Binds a result's column to WarRequestDay
	void KnightsSiegeWarfare::BindWarRequestDay(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarRequestDay);
	}

	/// \brief Binds a result's column to WarRequestTime
	void KnightsSiegeWarfare::BindWarRequestTime(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarRequestTime);
	}

	/// \brief Binds a result's column to WarRequestMinute
	void KnightsSiegeWarfare::BindWarRequestMinute(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarRequestMinute);
	}

	/// \brief Binds a result's column to GuerrillaWarDay
	void KnightsSiegeWarfare::BindGuerrillaWarDay(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.GuerrillaWarDay);
	}

	/// \brief Binds a result's column to GuerrillaWarTime
	void KnightsSiegeWarfare::BindGuerrillaWarTime(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.GuerrillaWarTime);
	}

	/// \brief Binds a result's column to GuerrillaWarMinute
	void KnightsSiegeWarfare::BindGuerrillaWarMinute(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.GuerrillaWarMinute);
	}

	/// \brief Binds a result's column to ChallengeList
	void KnightsSiegeWarfare::BindChallengeList(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.ChallengeList);
	}

	/// \brief Binds a result's column to MoradonTariff
	void KnightsSiegeWarfare::BindMoradonTariff(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MoradonTariff);
	}

	/// \brief Binds a result's column to DelosTariff
	void KnightsSiegeWarfare::BindDelosTariff(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DelosTariff);
	}

	/// \brief Binds a result's column to DungeonCharge
	void KnightsSiegeWarfare::BindDungeonCharge(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.DungeonCharge);
	}

	/// \brief Binds a result's column to MoradonTax
	void KnightsSiegeWarfare::BindMoradonTax(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.MoradonTax);
	}

	/// \brief Binds a result's column to DelosTax
	void KnightsSiegeWarfare::BindDelosTax(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.DelosTax);
	}

	/// \brief Binds a result's column to RequestList1
	void KnightsSiegeWarfare::BindRequestList1(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList1);
	}

	/// \brief Binds a result's column to RequestList2
	void KnightsSiegeWarfare::BindRequestList2(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList2);
	}

	/// \brief Binds a result's column to RequestList3
	void KnightsSiegeWarfare::BindRequestList3(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList3);
	}

	/// \brief Binds a result's column to RequestList4
	void KnightsSiegeWarfare::BindRequestList4(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList4);
	}

	/// \brief Binds a result's column to RequestList5
	void KnightsSiegeWarfare::BindRequestList5(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList5);
	}

	/// \brief Binds a result's column to RequestList6
	void KnightsSiegeWarfare::BindRequestList6(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList6);
	}

	/// \brief Binds a result's column to RequestList7
	void KnightsSiegeWarfare::BindRequestList7(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList7);
	}

	/// \brief Binds a result's column to RequestList8
	void KnightsSiegeWarfare::BindRequestList8(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList8);
	}

	/// \brief Binds a result's column to RequestList9
	void KnightsSiegeWarfare::BindRequestList9(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList9);
	}

	/// \brief Binds a result's column to RequestList10
	void KnightsSiegeWarfare::BindRequestList10(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
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
	void KnightsUser::BindKnightsId(full_model::KnightsUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KnightsId);
	}

	/// \brief Binds a result's column to UserId
	void KnightsUser::BindUserId(full_model::KnightsUser& m, const nanodbc::result& result, short colIndex)
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
	void LevelUp::BindLevel(full_model::LevelUp& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Level);
	}

	/// \brief Binds a result's column to RequiredExp
	void LevelUp::BindRequiredExp(full_model::LevelUp& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredExp);
	}

	/// \brief Returns the binding function associated with the column name
	const Magic::BindingsMapType& Magic::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"MagicNum", &Magic::BindID},
			{"EnName", &Magic::BindEnglishName},
			{"KrName", &Magic::BindKoreanName},
			{"Description", &Magic::BindDescription},
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
	void Magic::BindID(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to EnglishName
	void Magic::BindEnglishName(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.EnglishName);
	}

	/// \brief Binds a result's column to KoreanName
	void Magic::BindKoreanName(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.KoreanName);
	}

	/// \brief Binds a result's column to Description
	void Magic::BindDescription(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Description);
	}

	/// \brief Binds a result's column to BeforeAction
	void Magic::BindBeforeAction(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BeforeAction);
	}

	/// \brief Binds a result's column to TargetAction
	void Magic::BindTargetAction(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TargetAction);
	}

	/// \brief Binds a result's column to SelfEffect
	void Magic::BindSelfEffect(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SelfEffect);
	}

	/// \brief Binds a result's column to FlyingEffect
	void Magic::BindFlyingEffect(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FlyingEffect);
	}

	/// \brief Binds a result's column to TargetEffect
	void Magic::BindTargetEffect(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TargetEffect);
	}

	/// \brief Binds a result's column to Moral
	void Magic::BindMoral(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Moral);
	}

	/// \brief Binds a result's column to SkillLevel
	void Magic::BindSkillLevel(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.SkillLevel);
	}

	/// \brief Binds a result's column to Skill
	void Magic::BindSkill(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Skill);
	}

	/// \brief Binds a result's column to ManaCost
	void Magic::BindManaCost(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ManaCost);
	}

	/// \brief Binds a result's column to HpCost
	void Magic::BindHpCost(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HpCost);
	}

	/// \brief Binds a result's column to ItemGroup
	void Magic::BindItemGroup(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ItemGroup);
	}

	/// \brief Binds a result's column to UseItem
	void Magic::BindUseItem(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.UseItem);
	}

	/// \brief Binds a result's column to CastTime
	void Magic::BindCastTime(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.CastTime);
	}

	/// \brief Binds a result's column to RecastTime
	void Magic::BindRecastTime(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RecastTime);
	}

	/// \brief Binds a result's column to SuccessRate
	void Magic::BindSuccessRate(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SuccessRate);
	}

	/// \brief Binds a result's column to Type1
	void Magic::BindType1(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type1);
	}

	/// \brief Binds a result's column to Type2
	void Magic::BindType2(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type2);
	}

	/// \brief Binds a result's column to Range
	void Magic::BindRange(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Range);
	}

	/// \brief Binds a result's column to Etc
	void Magic::BindEtc(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Etc);
	}

	/// \brief Binds a result's column to Event
	void Magic::BindEvent(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Event);
	}

	/// \brief Returns the binding function associated with the column name
	const MagicType1::BindingsMapType& MagicType1::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType1::BindID},
			{"Name", &MagicType1::BindName},
			{"Description", &MagicType1::BindDescription},
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
	void MagicType1::BindID(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Name
	void MagicType1::BindName(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Description
	void MagicType1::BindDescription(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Description);
	}

	/// \brief Binds a result's column to Type
	void MagicType1::BindType(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	/// \brief Binds a result's column to HitRateMod
	void MagicType1::BindHitRateMod(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRateMod);
	}

	/// \brief Binds a result's column to DamageMod
	void MagicType1::BindDamageMod(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DamageMod);
	}

	/// \brief Binds a result's column to AddDamage
	void MagicType1::BindAddDamage(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AddDamage);
	}

	/// \brief Binds a result's column to Delay
	void MagicType1::BindDelay(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Delay);
	}

	/// \brief Binds a result's column to ComboType
	void MagicType1::BindComboType(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ComboType);
	}

	/// \brief Binds a result's column to ComboCount
	void MagicType1::BindComboCount(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ComboCount);
	}

	/// \brief Binds a result's column to ComboDamage
	void MagicType1::BindComboDamage(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ComboDamage);
	}

	/// \brief Binds a result's column to Range
	void MagicType1::BindRange(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Range);
	}

	/// \brief Returns the binding function associated with the column name
	const MagicType2::BindingsMapType& MagicType2::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType2::BindID},
			{"Name", &MagicType2::BindName},
			{"Description", &MagicType2::BindDescription},
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
	void MagicType2::BindID(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Name
	void MagicType2::BindName(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Description
	void MagicType2::BindDescription(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Description);
	}

	/// \brief Binds a result's column to HitType
	void MagicType2::BindHitType(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.HitType);
	}

	/// \brief Binds a result's column to HitRateMod
	void MagicType2::BindHitRateMod(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRateMod);
	}

	/// \brief Binds a result's column to DamageMod
	void MagicType2::BindDamageMod(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DamageMod);
	}

	/// \brief Binds a result's column to RangeMod
	void MagicType2::BindRangeMod(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RangeMod);
	}

	/// \brief Binds a result's column to NeedArrow
	void MagicType2::BindNeedArrow(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NeedArrow);
	}

	/// \brief Binds a result's column to AddDamagePlus
	void MagicType2::BindAddDamagePlus(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AddDamagePlus);
	}

	/// \brief Returns the binding function associated with the column name
	const MagicType3::BindingsMapType& MagicType3::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType3::BindID},
			{"Name", &MagicType3::BindName},
			{"Description", &MagicType3::BindDescription},
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
	void MagicType3::BindID(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Name
	void MagicType3::BindName(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Description
	void MagicType3::BindDescription(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Description);
	}

	/// \brief Binds a result's column to Radius
	void MagicType3::BindRadius(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Radius);
	}

	/// \brief Binds a result's column to Angle
	void MagicType3::BindAngle(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Angle);
	}

	/// \brief Binds a result's column to DirectType
	void MagicType3::BindDirectType(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DirectType);
	}

	/// \brief Binds a result's column to FirstDamage
	void MagicType3::BindFirstDamage(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.FirstDamage);
	}

	/// \brief Binds a result's column to EndDamage
	void MagicType3::BindEndDamage(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EndDamage);
	}

	/// \brief Binds a result's column to TimeDamage
	void MagicType3::BindTimeDamage(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TimeDamage);
	}

	/// \brief Binds a result's column to Duration
	void MagicType3::BindDuration(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Duration);
	}

	/// \brief Binds a result's column to Attribute
	void MagicType3::BindAttribute(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Attribute);
	}

	/// \brief Returns the binding function associated with the column name
	const MagicType4::BindingsMapType& MagicType4::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType4::BindID},
			{"Name", &MagicType4::BindName},
			{"Description", &MagicType4::BindDescription},
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
	void MagicType4::BindID(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Name
	void MagicType4::BindName(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Description
	void MagicType4::BindDescription(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Description);
	}

	/// \brief Binds a result's column to BuffType
	void MagicType4::BindBuffType(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BuffType);
	}

	/// \brief Binds a result's column to Radius
	void MagicType4::BindRadius(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Radius);
	}

	/// \brief Binds a result's column to Duration
	void MagicType4::BindDuration(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Duration);
	}

	/// \brief Binds a result's column to AttackSpeed
	void MagicType4::BindAttackSpeed(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.AttackSpeed);
	}

	/// \brief Binds a result's column to Speed
	void MagicType4::BindSpeed(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Speed);
	}

	/// \brief Binds a result's column to Armor
	void MagicType4::BindArmor(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Armor);
	}

	/// \brief Binds a result's column to ArmorPercent
	void MagicType4::BindArmorPercent(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ArmorPercent);
	}

	/// \brief Binds a result's column to AttackPower
	void MagicType4::BindAttackPower(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.AttackPower);
	}

	/// \brief Binds a result's column to MagicPower
	void MagicType4::BindMagicPower(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MagicPower);
	}

	/// \brief Binds a result's column to MaxHp
	void MagicType4::BindMaxHp(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxHp);
	}

	/// \brief Binds a result's column to MaxHpPercent
	void MagicType4::BindMaxHpPercent(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxHpPercent);
	}

	/// \brief Binds a result's column to MaxMp
	void MagicType4::BindMaxMp(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxMp);
	}

	/// \brief Binds a result's column to MaxMpPercent
	void MagicType4::BindMaxMpPercent(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxMpPercent);
	}

	/// \brief Binds a result's column to HitRate
	void MagicType4::BindHitRate(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.HitRate);
	}

	/// \brief Binds a result's column to AvoidRate
	void MagicType4::BindAvoidRate(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AvoidRate);
	}

	/// \brief Binds a result's column to Strength
	void MagicType4::BindStrength(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Strength);
	}

	/// \brief Binds a result's column to Stamina
	void MagicType4::BindStamina(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Stamina);
	}

	/// \brief Binds a result's column to Dexterity
	void MagicType4::BindDexterity(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Dexterity);
	}

	/// \brief Binds a result's column to Intelligence
	void MagicType4::BindIntelligence(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Intelligence);
	}

	/// \brief Binds a result's column to Charisma
	void MagicType4::BindCharisma(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Charisma);
	}

	/// \brief Binds a result's column to FireResist
	void MagicType4::BindFireResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FireResist);
	}

	/// \brief Binds a result's column to ColdResist
	void MagicType4::BindColdResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ColdResist);
	}

	/// \brief Binds a result's column to LightningResist
	void MagicType4::BindLightningResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LightningResist);
	}

	/// \brief Binds a result's column to MagicResist
	void MagicType4::BindMagicResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MagicResist);
	}

	/// \brief Binds a result's column to DiseaseResist
	void MagicType4::BindDiseaseResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DiseaseResist);
	}

	/// \brief Binds a result's column to PoisonResist
	void MagicType4::BindPoisonResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.PoisonResist);
	}

	/// \brief Binds a result's column to ExpPercent
	void MagicType4::BindExpPercent(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ExpPercent);
	}

	/// \brief Returns the binding function associated with the column name
	const MagicType5::BindingsMapType& MagicType5::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType5::BindID},
			{"Name", &MagicType5::BindName},
			{"Description", &MagicType5::BindDescription},
			{"Type", &MagicType5::BindType},
			{"ExpRecover", &MagicType5::BindExpRecover},
			{"NeedStone", &MagicType5::BindNeedStone}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ID
	void MagicType5::BindID(full_model::MagicType5& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Name
	void MagicType5::BindName(full_model::MagicType5& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Description
	void MagicType5::BindDescription(full_model::MagicType5& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Description);
	}

	/// \brief Binds a result's column to Type
	void MagicType5::BindType(full_model::MagicType5& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	/// \brief Binds a result's column to ExpRecover
	void MagicType5::BindExpRecover(full_model::MagicType5& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ExpRecover);
	}

	/// \brief Binds a result's column to NeedStone
	void MagicType5::BindNeedStone(full_model::MagicType5& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NeedStone);
	}

	/// \brief Returns the binding function associated with the column name
	const MagicType6::BindingsMapType& MagicType6::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType6::BindID},
			{"Name", &MagicType6::BindName},
			{"Description", &MagicType6::BindDescription},
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
	void MagicType6::BindID(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Name
	void MagicType6::BindName(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Description
	void MagicType6::BindDescription(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Description);
	}

	/// \brief Binds a result's column to Size
	void MagicType6::BindSize(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Size);
	}

	/// \brief Binds a result's column to TransformId
	void MagicType6::BindTransformId(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TransformId);
	}

	/// \brief Binds a result's column to Duration
	void MagicType6::BindDuration(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Duration);
	}

	/// \brief Binds a result's column to MaxHp
	void MagicType6::BindMaxHp(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxHp);
	}

	/// \brief Binds a result's column to MaxMp
	void MagicType6::BindMaxMp(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxMp);
	}

	/// \brief Binds a result's column to Speed
	void MagicType6::BindSpeed(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Speed);
	}

	/// \brief Binds a result's column to AttackSpeed
	void MagicType6::BindAttackSpeed(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AttackSpeed);
	}

	/// \brief Binds a result's column to TotalHit
	void MagicType6::BindTotalHit(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalHit);
	}

	/// \brief Binds a result's column to TotalArmor
	void MagicType6::BindTotalArmor(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalArmor);
	}

	/// \brief Binds a result's column to TotalHitRate
	void MagicType6::BindTotalHitRate(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalHitRate);
	}

	/// \brief Binds a result's column to TotalEvasionRate
	void MagicType6::BindTotalEvasionRate(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalEvasionRate);
	}

	/// \brief Binds a result's column to TotalFireResist
	void MagicType6::BindTotalFireResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalFireResist);
	}

	/// \brief Binds a result's column to TotalColdResist
	void MagicType6::BindTotalColdResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalColdResist);
	}

	/// \brief Binds a result's column to TotalLightningResist
	void MagicType6::BindTotalLightningResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalLightningResist);
	}

	/// \brief Binds a result's column to TotalMagicResist
	void MagicType6::BindTotalMagicResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalMagicResist);
	}

	/// \brief Binds a result's column to TotalDiseaseResist
	void MagicType6::BindTotalDiseaseResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalDiseaseResist);
	}

	/// \brief Binds a result's column to TotalPoisonResist
	void MagicType6::BindTotalPoisonResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalPoisonResist);
	}

	/// \brief Binds a result's column to Class
	void MagicType6::BindClass(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class);
	}

	/// \brief Binds a result's column to UserSkillUse
	void MagicType6::BindUserSkillUse(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.UserSkillUse);
	}

	/// \brief Binds a result's column to NeedItem
	void MagicType6::BindNeedItem(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NeedItem);
	}

	/// \brief Binds a result's column to SkillSuccessRate
	void MagicType6::BindSkillSuccessRate(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SkillSuccessRate);
	}

	/// \brief Binds a result's column to MonsterFriendly
	void MagicType6::BindMonsterFriendly(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MonsterFriendly);
	}

	/// \brief Returns the binding function associated with the column name
	const MagicType7::BindingsMapType& MagicType7::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nIndex", &MagicType7::BindID},
			{"strName", &MagicType7::BindName},
			{"strNote", &MagicType7::BindNote},
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
	void MagicType7::BindID(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Name
	void MagicType7::BindName(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Note
	void MagicType7::BindNote(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Note);
	}

	/// \brief Binds a result's column to ValidGroup
	void MagicType7::BindValidGroup(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ValidGroup);
	}

	/// \brief Binds a result's column to NationChange
	void MagicType7::BindNationChange(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NationChange);
	}

	/// \brief Binds a result's column to MonsterNumber
	void MagicType7::BindMonsterNumber(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterNumber);
	}

	/// \brief Binds a result's column to TargetChange
	void MagicType7::BindTargetChange(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TargetChange);
	}

	/// \brief Binds a result's column to StateChange
	void MagicType7::BindStateChange(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StateChange);
	}

	/// \brief Binds a result's column to Radius
	void MagicType7::BindRadius(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Radius);
	}

	/// \brief Binds a result's column to HitRate
	void MagicType7::BindHitRate(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	/// \brief Binds a result's column to Duration
	void MagicType7::BindDuration(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Duration);
	}

	/// \brief Binds a result's column to Damage
	void MagicType7::BindDamage(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Damage);
	}

	/// \brief Binds a result's column to Vision
	void MagicType7::BindVision(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Vision);
	}

	/// \brief Binds a result's column to NeedItem
	void MagicType7::BindNeedItem(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.NeedItem);
	}

	/// \brief Returns the binding function associated with the column name
	const MagicType8::BindingsMapType& MagicType8::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType8::BindID},
			{"Name", &MagicType8::BindName},
			{"Description", &MagicType8::BindDescription},
			{"Target", &MagicType8::BindTarget},
			{"Radius", &MagicType8::BindRadius},
			{"WarpType", &MagicType8::BindWarpType},
			{"ExpRecover", &MagicType8::BindExpRecover}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ID
	void MagicType8::BindID(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Name
	void MagicType8::BindName(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Description
	void MagicType8::BindDescription(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Description);
	}

	/// \brief Binds a result's column to Target
	void MagicType8::BindTarget(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Target);
	}

	/// \brief Binds a result's column to Radius
	void MagicType8::BindRadius(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Radius);
	}

	/// \brief Binds a result's column to WarpType
	void MagicType8::BindWarpType(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarpType);
	}

	/// \brief Binds a result's column to ExpRecover
	void MagicType8::BindExpRecover(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExpRecover);
	}

	/// \brief Returns the binding function associated with the column name
	const MagicType9::BindingsMapType& MagicType9::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType9::BindID},
			{"Name", &MagicType9::BindName},
			{"Description", &MagicType9::BindDescription},
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
	void MagicType9::BindID(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Name
	void MagicType9::BindName(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Description
	void MagicType9::BindDescription(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Description);
	}

	/// \brief Binds a result's column to ValidGroup
	void MagicType9::BindValidGroup(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ValidGroup);
	}

	/// \brief Binds a result's column to NationChange
	void MagicType9::BindNationChange(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NationChange);
	}

	/// \brief Binds a result's column to MonsterNumber
	void MagicType9::BindMonsterNumber(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterNumber);
	}

	/// \brief Binds a result's column to TargetChange
	void MagicType9::BindTargetChange(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TargetChange);
	}

	/// \brief Binds a result's column to StateChange
	void MagicType9::BindStateChange(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StateChange);
	}

	/// \brief Binds a result's column to Radius
	void MagicType9::BindRadius(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Radius);
	}

	/// \brief Binds a result's column to HitRate
	void MagicType9::BindHitRate(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	/// \brief Binds a result's column to Duration
	void MagicType9::BindDuration(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Duration);
	}

	/// \brief Binds a result's column to AddDamage
	void MagicType9::BindAddDamage(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AddDamage);
	}

	/// \brief Binds a result's column to Vision
	void MagicType9::BindVision(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Vision);
	}

	/// \brief Binds a result's column to NeedItem
	void MagicType9::BindNeedItem(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.NeedItem);
	}

	/// \brief Returns the binding function associated with the column name
	const MakeDefensive::BindingsMapType& MakeDefensive::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"byLevel", &MakeDefensive::BindLevel},
			{"sClass_1", &MakeDefensive::BindClass1},
			{"sClass_2", &MakeDefensive::BindClass2},
			{"sClass_3", &MakeDefensive::BindClass3},
			{"sClass_4", &MakeDefensive::BindClass4},
			{"sClass_5", &MakeDefensive::BindClass5},
			{"sClass_6", &MakeDefensive::BindClass6},
			{"sClass_7", &MakeDefensive::BindClass7}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Level
	void MakeDefensive::BindLevel(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Level);
	}

	/// \brief Binds a result's column to Class1
	void MakeDefensive::BindClass1(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class1);
	}

	/// \brief Binds a result's column to Class2
	void MakeDefensive::BindClass2(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class2);
	}

	/// \brief Binds a result's column to Class3
	void MakeDefensive::BindClass3(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class3);
	}

	/// \brief Binds a result's column to Class4
	void MakeDefensive::BindClass4(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class4);
	}

	/// \brief Binds a result's column to Class5
	void MakeDefensive::BindClass5(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class5);
	}

	/// \brief Binds a result's column to Class6
	void MakeDefensive::BindClass6(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class6);
	}

	/// \brief Binds a result's column to Class7
	void MakeDefensive::BindClass7(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class7);
	}

	/// \brief Returns the binding function associated with the column name
	const MakeItem::BindingsMapType& MakeItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &MakeItem::BindIndex},
			{"strItemInfo", &MakeItem::BindItemInfo},
			{"iItemCode", &MakeItem::BindItemCode},
			{"byItemLevel", &MakeItem::BindItemLevel}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Index
	void MakeItem::BindIndex(full_model::MakeItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to ItemInfo
	void MakeItem::BindItemInfo(full_model::MakeItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ItemInfo);
	}

	/// \brief Binds a result's column to ItemCode
	void MakeItem::BindItemCode(full_model::MakeItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemCode);
	}

	/// \brief Binds a result's column to ItemLevel
	void MakeItem::BindItemLevel(full_model::MakeItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ItemLevel);
	}

	/// \brief Returns the binding function associated with the column name
	const MakeItemGradeCode::BindingsMapType& MakeItemGradeCode::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"byItemIndex", &MakeItemGradeCode::BindItemIndex},
			{"byGrade_1", &MakeItemGradeCode::BindGrade1},
			{"byGrade_2", &MakeItemGradeCode::BindGrade2},
			{"byGrade_3", &MakeItemGradeCode::BindGrade3},
			{"byGrade_4", &MakeItemGradeCode::BindGrade4},
			{"byGrade_5", &MakeItemGradeCode::BindGrade5},
			{"byGrade_6", &MakeItemGradeCode::BindGrade6},
			{"byGrade_7", &MakeItemGradeCode::BindGrade7},
			{"byGrade_8", &MakeItemGradeCode::BindGrade8},
			{"byGrade_9", &MakeItemGradeCode::BindGrade9}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ItemIndex
	void MakeItemGradeCode::BindItemIndex(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ItemIndex);
	}

	/// \brief Binds a result's column to Grade1
	void MakeItemGradeCode::BindGrade1(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade1);
	}

	/// \brief Binds a result's column to Grade2
	void MakeItemGradeCode::BindGrade2(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade2);
	}

	/// \brief Binds a result's column to Grade3
	void MakeItemGradeCode::BindGrade3(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade3);
	}

	/// \brief Binds a result's column to Grade4
	void MakeItemGradeCode::BindGrade4(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade4);
	}

	/// \brief Binds a result's column to Grade5
	void MakeItemGradeCode::BindGrade5(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade5);
	}

	/// \brief Binds a result's column to Grade6
	void MakeItemGradeCode::BindGrade6(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade6);
	}

	/// \brief Binds a result's column to Grade7
	void MakeItemGradeCode::BindGrade7(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade7);
	}

	/// \brief Binds a result's column to Grade8
	void MakeItemGradeCode::BindGrade8(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade8);
	}

	/// \brief Binds a result's column to Grade9
	void MakeItemGradeCode::BindGrade9(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade9);
	}

	/// \brief Returns the binding function associated with the column name
	const MakeItemGroup::BindingsMapType& MakeItemGroup::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iItemGroupNum", &MakeItemGroup::BindItemGroupNumber},
			{"iItem_1", &MakeItemGroup::BindItem1},
			{"iItem_2", &MakeItemGroup::BindItem2},
			{"iItem_3", &MakeItemGroup::BindItem3},
			{"iItem_4", &MakeItemGroup::BindItem4},
			{"iItem_5", &MakeItemGroup::BindItem5},
			{"iItem_6", &MakeItemGroup::BindItem6},
			{"iItem_7", &MakeItemGroup::BindItem7},
			{"iItem_8", &MakeItemGroup::BindItem8},
			{"iItem_9", &MakeItemGroup::BindItem9},
			{"iItem_10", &MakeItemGroup::BindItem10},
			{"iItem_11", &MakeItemGroup::BindItem11},
			{"iItem_12", &MakeItemGroup::BindItem12},
			{"iItem_13", &MakeItemGroup::BindItem13},
			{"iItem_14", &MakeItemGroup::BindItem14},
			{"iItem_15", &MakeItemGroup::BindItem15},
			{"iItem_16", &MakeItemGroup::BindItem16},
			{"iItem_17", &MakeItemGroup::BindItem17},
			{"iItem_18", &MakeItemGroup::BindItem18},
			{"iItem_19", &MakeItemGroup::BindItem19},
			{"iItem_20", &MakeItemGroup::BindItem20},
			{"iItem_21", &MakeItemGroup::BindItem21},
			{"iItem_22", &MakeItemGroup::BindItem22},
			{"iItem_23", &MakeItemGroup::BindItem23},
			{"iItem_24", &MakeItemGroup::BindItem24},
			{"iItem_25", &MakeItemGroup::BindItem25},
			{"iItem_26", &MakeItemGroup::BindItem26},
			{"iItem_27", &MakeItemGroup::BindItem27},
			{"iItem_28", &MakeItemGroup::BindItem28},
			{"iItem_29", &MakeItemGroup::BindItem29},
			{"iItem_30", &MakeItemGroup::BindItem30}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ItemGroupNumber
	void MakeItemGroup::BindItemGroupNumber(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemGroupNumber);
	}

	/// \brief Binds a result's column to Item1
	void MakeItemGroup::BindItem1(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item1);
	}

	/// \brief Binds a result's column to Item2
	void MakeItemGroup::BindItem2(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item2);
	}

	/// \brief Binds a result's column to Item3
	void MakeItemGroup::BindItem3(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item3);
	}

	/// \brief Binds a result's column to Item4
	void MakeItemGroup::BindItem4(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item4);
	}

	/// \brief Binds a result's column to Item5
	void MakeItemGroup::BindItem5(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item5);
	}

	/// \brief Binds a result's column to Item6
	void MakeItemGroup::BindItem6(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item6);
	}

	/// \brief Binds a result's column to Item7
	void MakeItemGroup::BindItem7(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item7);
	}

	/// \brief Binds a result's column to Item8
	void MakeItemGroup::BindItem8(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item8);
	}

	/// \brief Binds a result's column to Item9
	void MakeItemGroup::BindItem9(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item9);
	}

	/// \brief Binds a result's column to Item10
	void MakeItemGroup::BindItem10(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item10);
	}

	/// \brief Binds a result's column to Item11
	void MakeItemGroup::BindItem11(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item11);
	}

	/// \brief Binds a result's column to Item12
	void MakeItemGroup::BindItem12(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item12);
	}

	/// \brief Binds a result's column to Item13
	void MakeItemGroup::BindItem13(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item13);
	}

	/// \brief Binds a result's column to Item14
	void MakeItemGroup::BindItem14(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item14);
	}

	/// \brief Binds a result's column to Item15
	void MakeItemGroup::BindItem15(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item15);
	}

	/// \brief Binds a result's column to Item16
	void MakeItemGroup::BindItem16(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item16);
	}

	/// \brief Binds a result's column to Item17
	void MakeItemGroup::BindItem17(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item17);
	}

	/// \brief Binds a result's column to Item18
	void MakeItemGroup::BindItem18(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item18);
	}

	/// \brief Binds a result's column to Item19
	void MakeItemGroup::BindItem19(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item19);
	}

	/// \brief Binds a result's column to Item20
	void MakeItemGroup::BindItem20(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item20);
	}

	/// \brief Binds a result's column to Item21
	void MakeItemGroup::BindItem21(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item21);
	}

	/// \brief Binds a result's column to Item22
	void MakeItemGroup::BindItem22(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item22);
	}

	/// \brief Binds a result's column to Item23
	void MakeItemGroup::BindItem23(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item23);
	}

	/// \brief Binds a result's column to Item24
	void MakeItemGroup::BindItem24(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item24);
	}

	/// \brief Binds a result's column to Item25
	void MakeItemGroup::BindItem25(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item25);
	}

	/// \brief Binds a result's column to Item26
	void MakeItemGroup::BindItem26(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item26);
	}

	/// \brief Binds a result's column to Item27
	void MakeItemGroup::BindItem27(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item27);
	}

	/// \brief Binds a result's column to Item28
	void MakeItemGroup::BindItem28(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item28);
	}

	/// \brief Binds a result's column to Item29
	void MakeItemGroup::BindItem29(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item29);
	}

	/// \brief Binds a result's column to Item30
	void MakeItemGroup::BindItem30(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item30);
	}

	/// \brief Returns the binding function associated with the column name
	const MakeItemRareCode::BindingsMapType& MakeItemRareCode::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"byLevelGrade", &MakeItemRareCode::BindLevelGrade},
			{"sUpgradeItem", &MakeItemRareCode::BindUpgradeItem},
			{"sLareItem", &MakeItemRareCode::BindRareItem},
			{"sMagicItem", &MakeItemRareCode::BindMagicItem},
			{"sGereralItem", &MakeItemRareCode::BindGeneralItem}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to LevelGrade
	void MakeItemRareCode::BindLevelGrade(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LevelGrade);
	}

	/// \brief Binds a result's column to UpgradeItem
	void MakeItemRareCode::BindUpgradeItem(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.UpgradeItem);
	}

	/// \brief Binds a result's column to RareItem
	void MakeItemRareCode::BindRareItem(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RareItem);
	}

	/// \brief Binds a result's column to MagicItem
	void MakeItemRareCode::BindMagicItem(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MagicItem);
	}

	/// \brief Binds a result's column to GeneralItem
	void MakeItemRareCode::BindGeneralItem(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.GeneralItem);
	}

	/// \brief Returns the binding function associated with the column name
	const MakeWeapon::BindingsMapType& MakeWeapon::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"byLevel", &MakeWeapon::BindLevel},
			{"sClass_1", &MakeWeapon::BindClass1},
			{"sClass_2", &MakeWeapon::BindClass2},
			{"sClass_3", &MakeWeapon::BindClass3},
			{"sClass_4", &MakeWeapon::BindClass4},
			{"sClass_5", &MakeWeapon::BindClass5},
			{"sClass_6", &MakeWeapon::BindClass6},
			{"sClass_7", &MakeWeapon::BindClass7},
			{"sClass_8", &MakeWeapon::BindClass8},
			{"sClass_9", &MakeWeapon::BindClass9},
			{"sClass_10", &MakeWeapon::BindClass10},
			{"sClass_11", &MakeWeapon::BindClass11},
			{"sClass_12", &MakeWeapon::BindClass12}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Level
	void MakeWeapon::BindLevel(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Level);
	}

	/// \brief Binds a result's column to Class1
	void MakeWeapon::BindClass1(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class1);
	}

	/// \brief Binds a result's column to Class2
	void MakeWeapon::BindClass2(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class2);
	}

	/// \brief Binds a result's column to Class3
	void MakeWeapon::BindClass3(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class3);
	}

	/// \brief Binds a result's column to Class4
	void MakeWeapon::BindClass4(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class4);
	}

	/// \brief Binds a result's column to Class5
	void MakeWeapon::BindClass5(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class5);
	}

	/// \brief Binds a result's column to Class6
	void MakeWeapon::BindClass6(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class6);
	}

	/// \brief Binds a result's column to Class7
	void MakeWeapon::BindClass7(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class7);
	}

	/// \brief Binds a result's column to Class8
	void MakeWeapon::BindClass8(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class8);
	}

	/// \brief Binds a result's column to Class9
	void MakeWeapon::BindClass9(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class9);
	}

	/// \brief Binds a result's column to Class10
	void MakeWeapon::BindClass10(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class10);
	}

	/// \brief Binds a result's column to Class11
	void MakeWeapon::BindClass11(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class11);
	}

	/// \brief Binds a result's column to Class12
	void MakeWeapon::BindClass12(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class12);
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
	void MonsterChallenge::BindIndex(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to StartTime1
	void MonsterChallenge::BindStartTime1(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StartTime1);
	}

	/// \brief Binds a result's column to StartTime2
	void MonsterChallenge::BindStartTime2(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StartTime2);
	}

	/// \brief Binds a result's column to StartTime3
	void MonsterChallenge::BindStartTime3(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StartTime3);
	}

	/// \brief Binds a result's column to LevelMin
	void MonsterChallenge::BindLevelMin(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LevelMin);
	}

	/// \brief Binds a result's column to LevelMax
	void MonsterChallenge::BindLevelMax(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
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
	void MonsterChallengeSummonList::BindIndex(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to Level
	void MonsterChallengeSummonList::BindLevel(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Level);
	}

	/// \brief Binds a result's column to Stage
	void MonsterChallengeSummonList::BindStage(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Stage);
	}

	/// \brief Binds a result's column to StageLevel
	void MonsterChallengeSummonList::BindStageLevel(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StageLevel);
	}

	/// \brief Binds a result's column to Time
	void MonsterChallengeSummonList::BindTime(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Time);
	}

	/// \brief Binds a result's column to MonsterId
	void MonsterChallengeSummonList::BindMonsterId(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterId);
	}

	/// \brief Binds a result's column to Count
	void MonsterChallengeSummonList::BindCount(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Count);
	}

	/// \brief Binds a result's column to PosX
	void MonsterChallengeSummonList::BindPosX(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PosX);
	}

	/// \brief Binds a result's column to PosZ
	void MonsterChallengeSummonList::BindPosZ(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PosZ);
	}

	/// \brief Binds a result's column to Range
	void MonsterChallengeSummonList::BindRange(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Range);
	}

	/// \brief Returns the binding function associated with the column name
	const MonsterItemTest::BindingsMapType& MonsterItemTest::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &MonsterItemTest::BindIndex},
			{"iItem01", &MonsterItemTest::BindItem1},
			{"sPersent01", &MonsterItemTest::BindPercent1},
			{"iItem02", &MonsterItemTest::BindItem2},
			{"sPersent02", &MonsterItemTest::BindPercent2},
			{"iItem03", &MonsterItemTest::BindItem3},
			{"sPersent03", &MonsterItemTest::BindPercent3},
			{"iItem04", &MonsterItemTest::BindItem4},
			{"sPersent04", &MonsterItemTest::BindPercent4},
			{"iItem05", &MonsterItemTest::BindItem5},
			{"sPersent05", &MonsterItemTest::BindPercent5}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Index
	void MonsterItemTest::BindIndex(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to Item1
	void MonsterItemTest::BindItem1(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.Item1);
	}

	/// \brief Binds a result's column to Percent1
	void MonsterItemTest::BindPercent1(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.Percent1);
	}

	/// \brief Binds a result's column to Item2
	void MonsterItemTest::BindItem2(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.Item2);
	}

	/// \brief Binds a result's column to Percent2
	void MonsterItemTest::BindPercent2(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.Percent2);
	}

	/// \brief Binds a result's column to Item3
	void MonsterItemTest::BindItem3(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.Item3);
	}

	/// \brief Binds a result's column to Percent3
	void MonsterItemTest::BindPercent3(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.Percent3);
	}

	/// \brief Binds a result's column to Item4
	void MonsterItemTest::BindItem4(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.Item4);
	}

	/// \brief Binds a result's column to Percent4
	void MonsterItemTest::BindPercent4(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.Percent4);
	}

	/// \brief Binds a result's column to Item5
	void MonsterItemTest::BindItem5(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.Item5);
	}

	/// \brief Binds a result's column to Percent5
	void MonsterItemTest::BindPercent5(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.Percent5);
	}

	/// \brief Returns the binding function associated with the column name
	const MonsterSummonList::BindingsMapType& MonsterSummonList::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sSid", &MonsterSummonList::BindMonsterId},
			{"strName", &MonsterSummonList::BindName},
			{"sLevel", &MonsterSummonList::BindLevel},
			{"sProbability", &MonsterSummonList::BindProbability},
			{"bType", &MonsterSummonList::BindType}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to MonsterId
	void MonsterSummonList::BindMonsterId(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterId);
	}

	/// \brief Binds a result's column to Name
	void MonsterSummonList::BindName(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Level
	void MonsterSummonList::BindLevel(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Level);
	}

	/// \brief Binds a result's column to Probability
	void MonsterSummonList::BindProbability(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Probability);
	}

	/// \brief Binds a result's column to Type
	void MonsterSummonList::BindType(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	/// \brief Returns the binding function associated with the column name
	const ProgramListLog::BindingsMapType& ProgramListLog::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"id", &ProgramListLog::BindId},
			{"strAccountID", &ProgramListLog::BindAccountId},
			{"strCharID", &ProgramListLog::BindCharId},
			{"strHackToolName", &ProgramListLog::BindHackToolName},
			{"tWriteTime", &ProgramListLog::BindWriteTime}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Id
	void ProgramListLog::BindId(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Id);
	}

	/// \brief Binds a result's column to AccountId
	void ProgramListLog::BindAccountId(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	/// \brief Binds a result's column to CharId
	void ProgramListLog::BindCharId(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	/// \brief Binds a result's column to HackToolName
	void ProgramListLog::BindHackToolName(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.HackToolName);
	}

	/// \brief Binds a result's column to WriteTime
	void ProgramListLog::BindWriteTime(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.WriteTime = binderUtil::CTimeFromDbTime(tmpValue);
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
			{"strBorrowerAcID", &RentalItem::BindBorrowerAccountId},
			{"timeLender", &RentalItem::BindLendTime},
			{"timeRegister", &RentalItem::BindRegisterTime}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to RentalIndex
	void RentalItem::BindRentalIndex(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RentalIndex);
	}

	/// \brief Binds a result's column to ItemIndex
	void RentalItem::BindItemIndex(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemIndex);
	}

	/// \brief Binds a result's column to Durability
	void RentalItem::BindDurability(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Durability);
	}

	/// \brief Binds a result's column to SerialNumber
	void RentalItem::BindSerialNumber(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int64_t>(colIndex, m.SerialNumber);
	}

	/// \brief Binds a result's column to RegType
	void RentalItem::BindRegType(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RegType);
	}

	/// \brief Binds a result's column to ItemType
	void RentalItem::BindItemType(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ItemType);
	}

	/// \brief Binds a result's column to Class
	void RentalItem::BindClass(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Class);
	}

	/// \brief Binds a result's column to RentalTime
	void RentalItem::BindRentalTime(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RentalTime);
	}

	/// \brief Binds a result's column to RentalMoney
	void RentalItem::BindRentalMoney(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RentalMoney);
	}

	/// \brief Binds a result's column to LenderCharId
	void RentalItem::BindLenderCharId(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.LenderCharId);
	}

	/// \brief Binds a result's column to LenderAccountId
	void RentalItem::BindLenderAccountId(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.LenderAccountId);
	}

	/// \brief Binds a result's column to BorrowerCharId
	void RentalItem::BindBorrowerCharId(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.BorrowerCharId);
	}

	/// \brief Binds a result's column to BorrowerAccountId
	void RentalItem::BindBorrowerAccountId(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.BorrowerAccountId);
	}

	/// \brief Binds a result's column to LendTime
	void RentalItem::BindLendTime(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		std::optional<nanodbc::timestamp> tmpValue;
		result.get_ref<std::optional<nanodbc::timestamp>>(colIndex, tmpValue);

		if (tmpValue.has_value())
			m.LendTime = binderUtil::CTimeFromDbTime(*tmpValue);
		else
			m.LendTime.reset();
	}

	/// \brief Binds a result's column to RegisterTime
	void RentalItem::BindRegisterTime(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.RegisterTime = binderUtil::CTimeFromDbTime(tmpValue);
	}

	/// \brief Returns the binding function associated with the column name
	const RentalItemList::BindingsMapType& RentalItemList::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nRentalIndex", &RentalItemList::BindRentalIndex},
			{"nItemIndex", &RentalItemList::BindItemIndex},
			{"sDurability", &RentalItemList::BindDurability},
			{"nSerialNumber", &RentalItemList::BindSerialNumber},
			{"byRegType", &RentalItemList::BindRegType},
			{"byItemType", &RentalItemList::BindItemType},
			{"byClass", &RentalItemList::BindClass},
			{"sRentalTime", &RentalItemList::BindRentalTime},
			{"nRentalMoney", &RentalItemList::BindRentalMoney},
			{"strLenderCharID", &RentalItemList::BindLenderCharId},
			{"strLenderAcID", &RentalItemList::BindLenderAccountId},
			{"strBorrowerCharID", &RentalItemList::BindBorrowerCharId},
			{"strBorrowerAcID", &RentalItemList::BindBorrowerAccountId},
			{"timeLender", &RentalItemList::BindLendTime},
			{"timeRegister", &RentalItemList::BindRegisterTime}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to RentalIndex
	void RentalItemList::BindRentalIndex(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RentalIndex);
	}

	/// \brief Binds a result's column to ItemIndex
	void RentalItemList::BindItemIndex(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemIndex);
	}

	/// \brief Binds a result's column to Durability
	void RentalItemList::BindDurability(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Durability);
	}

	/// \brief Binds a result's column to SerialNumber
	void RentalItemList::BindSerialNumber(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int64_t>(colIndex, m.SerialNumber);
	}

	/// \brief Binds a result's column to RegType
	void RentalItemList::BindRegType(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RegType);
	}

	/// \brief Binds a result's column to ItemType
	void RentalItemList::BindItemType(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ItemType);
	}

	/// \brief Binds a result's column to Class
	void RentalItemList::BindClass(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Class);
	}

	/// \brief Binds a result's column to RentalTime
	void RentalItemList::BindRentalTime(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RentalTime);
	}

	/// \brief Binds a result's column to RentalMoney
	void RentalItemList::BindRentalMoney(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RentalMoney);
	}

	/// \brief Binds a result's column to LenderCharId
	void RentalItemList::BindLenderCharId(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.LenderCharId);
	}

	/// \brief Binds a result's column to LenderAccountId
	void RentalItemList::BindLenderAccountId(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.LenderAccountId);
	}

	/// \brief Binds a result's column to BorrowerCharId
	void RentalItemList::BindBorrowerCharId(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.BorrowerCharId);
	}

	/// \brief Binds a result's column to BorrowerAccountId
	void RentalItemList::BindBorrowerAccountId(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.BorrowerAccountId);
	}

	/// \brief Binds a result's column to LendTime
	void RentalItemList::BindLendTime(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		std::optional<nanodbc::timestamp> tmpValue;
		result.get_ref<std::optional<nanodbc::timestamp>>(colIndex, tmpValue);

		if (tmpValue.has_value())
			m.LendTime = binderUtil::CTimeFromDbTime(*tmpValue);
		else
			m.LendTime.reset();
	}

	/// \brief Binds a result's column to RegisterTime
	void RentalItemList::BindRegisterTime(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.RegisterTime = binderUtil::CTimeFromDbTime(tmpValue);
	}

	/// \brief Returns the binding function associated with the column name
	const ServerResource::BindingsMapType& ServerResource::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nResourceID", &ServerResource::BindResourceId},
			{"strName", &ServerResource::BindName},
			{"strResource", &ServerResource::BindResource}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ResourceId
	void ServerResource::BindResourceId(full_model::ServerResource& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ResourceId);
	}

	/// \brief Binds a result's column to Name
	void ServerResource::BindName(full_model::ServerResource& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Resource
	void ServerResource::BindResource(full_model::ServerResource& m, const nanodbc::result& result, short colIndex)
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
	void StartPosition::BindZoneId(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ZoneId);
	}

	/// \brief Binds a result's column to KarusX
	void StartPosition::BindKarusX(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KarusX);
	}

	/// \brief Binds a result's column to KarusZ
	void StartPosition::BindKarusZ(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KarusZ);
	}

	/// \brief Binds a result's column to ElmoX
	void StartPosition::BindElmoX(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ElmoX);
	}

	/// \brief Binds a result's column to ElmoZ
	void StartPosition::BindElmoZ(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ElmoZ);
	}

	/// \brief Binds a result's column to RangeX
	void StartPosition::BindRangeX(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RangeX);
	}

	/// \brief Binds a result's column to RangeZ
	void StartPosition::BindRangeZ(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RangeZ);
	}

	/// \brief Binds a result's column to KarusGateX
	void StartPosition::BindKarusGateX(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KarusGateX);
	}

	/// \brief Binds a result's column to KarusGateZ
	void StartPosition::BindKarusGateZ(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KarusGateZ);
	}

	/// \brief Binds a result's column to ElmoGateX
	void StartPosition::BindElmoGateX(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ElmoGateX);
	}

	/// \brief Binds a result's column to ElmoGateZ
	void StartPosition::BindElmoGateZ(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ElmoGateZ);
	}

	/// \brief Returns the binding function associated with the column name
	const TbUser::BindingsMapType& TbUser::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strAccountID", &TbUser::BindAccountId},
			{"strPasswd", &TbUser::BindPassword},
			{"strSocNo", &TbUser::BindSocNo},
			{"strEmail", &TbUser::BindEmail},
			{"strAuthority", &TbUser::BindAuthority},
			{"PremiumExpire", &TbUser::BindPremiumExpire}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to AccountId
	void TbUser::BindAccountId(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	/// \brief Binds a result's column to Password
	void TbUser::BindPassword(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Password);
	}

	/// \brief Binds a result's column to SocNo
	void TbUser::BindSocNo(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.SocNo);
	}

	/// \brief Binds a result's column to Email
	void TbUser::BindEmail(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Email);
	}

	/// \brief Binds a result's column to Authority
	void TbUser::BindAuthority(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Authority);
	}

	/// \brief Binds a result's column to PremiumExpire
	void TbUser::BindPremiumExpire(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.PremiumExpire = binderUtil::CTimeFromDbTime(tmpValue);
	}

	/// \brief Returns the binding function associated with the column name
	const UserEditor::BindingsMapType& UserEditor::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strCharID", &UserEditor::BindCharId},
			{"strAccountID", &UserEditor::BindAccountId},
			{"strOpID", &UserEditor::BindOpId},
			{"strOpIP", &UserEditor::BindOpIP},
			{"strOldUserValue", &UserEditor::BindOldUserValue},
			{"strNewUserValue", &UserEditor::BindNewUserValue},
			{"strOldUserSkill", &UserEditor::BindOldUserSkill},
			{"strNewUserSkill", &UserEditor::BindNewUserSkill},
			{"strOldUserItem", &UserEditor::BindOldUserItem},
			{"strNewUserItem", &UserEditor::BindNewUserItem},
			{"strOldWHValue", &UserEditor::BindOldWarehouseValue},
			{"strNewWHValue", &UserEditor::BindNewWarehouseValue},
			{"strOldWHItem", &UserEditor::BindOldWarehouseItem},
			{"strNewWHItem", &UserEditor::BindNewWarehouseItem},
			{"EditorTime", &UserEditor::BindEditorTime}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to CharId
	void UserEditor::BindCharId(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	/// \brief Binds a result's column to AccountId
	void UserEditor::BindAccountId(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	/// \brief Binds a result's column to OpId
	void UserEditor::BindOpId(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.OpId);
	}

	/// \brief Binds a result's column to OpIP
	void UserEditor::BindOpIP(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.OpIP);
	}

	/// \brief Binds a result's column to OldUserValue
	void UserEditor::BindOldUserValue(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.OldUserValue);
	}

	/// \brief Binds a result's column to NewUserValue
	void UserEditor::BindNewUserValue(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.NewUserValue);
	}

	/// \brief Binds a result's column to OldUserSkill
	void UserEditor::BindOldUserSkill(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.OldUserSkill);
	}

	/// \brief Binds a result's column to NewUserSkill
	void UserEditor::BindNewUserSkill(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.NewUserSkill);
	}

	/// \brief Binds a result's column to OldUserItem
	void UserEditor::BindOldUserItem(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.OldUserItem);
	}

	/// \brief Binds a result's column to NewUserItem
	void UserEditor::BindNewUserItem(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.NewUserItem);
	}

	/// \brief Binds a result's column to OldWarehouseValue
	void UserEditor::BindOldWarehouseValue(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.OldWarehouseValue);
	}

	/// \brief Binds a result's column to NewWarehouseValue
	void UserEditor::BindNewWarehouseValue(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.NewWarehouseValue);
	}

	/// \brief Binds a result's column to OldWarehouseItem
	void UserEditor::BindOldWarehouseItem(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.OldWarehouseItem);
	}

	/// \brief Binds a result's column to NewWarehouseItem
	void UserEditor::BindNewWarehouseItem(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.NewWarehouseItem);
	}

	/// \brief Binds a result's column to EditorTime
	void UserEditor::BindEditorTime(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.EditorTime = binderUtil::CTimeFromDbTime(tmpValue);
	}

	/// \brief Returns the binding function associated with the column name
	const UserEditorItem::BindingsMapType& UserEditorItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strCharID", &UserEditorItem::BindCharId},
			{"strAccountID", &UserEditorItem::BindAccountId},
			{"strOpID", &UserEditorItem::BindOpId},
			{"strOpIP", &UserEditorItem::BindOpIP},
			{"sDBIndex", &UserEditorItem::BindDbIndex},
			{"sPos", &UserEditorItem::BindPos},
			{"byType", &UserEditorItem::BindType},
			{"nItemID1", &UserEditorItem::BindItemId1},
			{"nItemID2", &UserEditorItem::BindItemId2},
			{"UpdateTime", &UserEditorItem::BindUpdateTime}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to CharId
	void UserEditorItem::BindCharId(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	/// \brief Binds a result's column to AccountId
	void UserEditorItem::BindAccountId(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	/// \brief Binds a result's column to OpId
	void UserEditorItem::BindOpId(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.OpId);
	}

	/// \brief Binds a result's column to OpIP
	void UserEditorItem::BindOpIP(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.OpIP);
	}

	/// \brief Binds a result's column to DbIndex
	void UserEditorItem::BindDbIndex(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DbIndex);
	}

	/// \brief Binds a result's column to Pos
	void UserEditorItem::BindPos(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Pos);
	}

	/// \brief Binds a result's column to Type
	void UserEditorItem::BindType(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	/// \brief Binds a result's column to ItemId1
	void UserEditorItem::BindItemId1(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId1);
	}

	/// \brief Binds a result's column to ItemId2
	void UserEditorItem::BindItemId2(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId2);
	}

	/// \brief Binds a result's column to UpdateTime
	void UserEditorItem::BindUpdateTime(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
	{
		std::optional<nanodbc::timestamp> tmpValue;
		result.get_ref<std::optional<nanodbc::timestamp>>(colIndex, tmpValue);

		if (tmpValue.has_value())
			m.UpdateTime = binderUtil::CTimeFromDbTime(*tmpValue);
		else
			m.UpdateTime.reset();
	}

	/// \brief Returns the binding function associated with the column name
	const UserKnightsRank::BindingsMapType& UserKnightsRank::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"shIndex", &UserKnightsRank::BindIndex},
			{"strName", &UserKnightsRank::BindName},
			{"strElmoUserID", &UserKnightsRank::BindElmoUserId},
			{"strElmoKnightsName", &UserKnightsRank::BindElmoKnightsName},
			{"nElmoLoyalty", &UserKnightsRank::BindElmoLoyalty},
			{"strKarusUserID", &UserKnightsRank::BindKarusUserId},
			{"strKarusKnightsName", &UserKnightsRank::BindKarusKnightsName},
			{"nKarusLoyalty", &UserKnightsRank::BindKarusLoyalty},
			{"nMoney", &UserKnightsRank::BindMoney}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Index
	void UserKnightsRank::BindIndex(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to Name
	void UserKnightsRank::BindName(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to ElmoUserId
	void UserKnightsRank::BindElmoUserId(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ElmoUserId);
	}

	/// \brief Binds a result's column to ElmoKnightsName
	void UserKnightsRank::BindElmoKnightsName(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ElmoKnightsName);
	}

	/// \brief Binds a result's column to ElmoLoyalty
	void UserKnightsRank::BindElmoLoyalty(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.ElmoLoyalty);
	}

	/// \brief Binds a result's column to KarusUserId
	void UserKnightsRank::BindKarusUserId(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.KarusUserId);
	}

	/// \brief Binds a result's column to KarusKnightsName
	void UserKnightsRank::BindKarusKnightsName(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.KarusKnightsName);
	}

	/// \brief Binds a result's column to KarusLoyalty
	void UserKnightsRank::BindKarusLoyalty(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.KarusLoyalty);
	}

	/// \brief Binds a result's column to Money
	void UserKnightsRank::BindMoney(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Money);
	}

	/// \brief Returns the binding function associated with the column name
	const UserPersonalRank::BindingsMapType& UserPersonalRank::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nRank", &UserPersonalRank::BindRank},
			{"strPosition", &UserPersonalRank::BindPosition},
			{"nElmoUP", &UserPersonalRank::BindElmoUp},
			{"strElmoUserID", &UserPersonalRank::BindElmoUserId},
			{"nElmoLoyaltyMonthly", &UserPersonalRank::BindElmoLoyaltyMonthly},
			{"nElmoCheck", &UserPersonalRank::BindElmoCheck},
			{"nKarusUP", &UserPersonalRank::BindKarusUp},
			{"strKarusUserID", &UserPersonalRank::BindKarusUserId},
			{"nKarusLoyaltyMonthly", &UserPersonalRank::BindKarusLoyaltyMonthly},
			{"nKarusCheck", &UserPersonalRank::BindKarusCheck},
			{"nSalary", &UserPersonalRank::BindSalary},
			{"UpdateDate", &UserPersonalRank::BindUpdateDate}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Rank
	void UserPersonalRank::BindRank(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Rank);
	}

	/// \brief Binds a result's column to Position
	void UserPersonalRank::BindPosition(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Position);
	}

	/// \brief Binds a result's column to ElmoUp
	void UserPersonalRank::BindElmoUp(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ElmoUp);
	}

	/// \brief Binds a result's column to ElmoUserId
	void UserPersonalRank::BindElmoUserId(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ElmoUserId);
	}

	/// \brief Binds a result's column to ElmoLoyaltyMonthly
	void UserPersonalRank::BindElmoLoyaltyMonthly(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.ElmoLoyaltyMonthly);
	}

	/// \brief Binds a result's column to ElmoCheck
	void UserPersonalRank::BindElmoCheck(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ElmoCheck);
	}

	/// \brief Binds a result's column to KarusUp
	void UserPersonalRank::BindKarusUp(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KarusUp);
	}

	/// \brief Binds a result's column to KarusUserId
	void UserPersonalRank::BindKarusUserId(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.KarusUserId);
	}

	/// \brief Binds a result's column to KarusLoyaltyMonthly
	void UserPersonalRank::BindKarusLoyaltyMonthly(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.KarusLoyaltyMonthly);
	}

	/// \brief Binds a result's column to KarusCheck
	void UserPersonalRank::BindKarusCheck(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.KarusCheck);
	}

	/// \brief Binds a result's column to Salary
	void UserPersonalRank::BindSalary(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Salary);
	}

	/// \brief Binds a result's column to UpdateDate
	void UserPersonalRank::BindUpdateDate(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.UpdateDate = binderUtil::CTimeFromDbTime(tmpValue);
	}

	/// \brief Returns the binding function associated with the column name
	const UserRentalItem::BindingsMapType& UserRentalItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strUserID", &UserRentalItem::BindUserId},
			{"strAccountID", &UserRentalItem::BindAccountId},
			{"byRentalType", &UserRentalItem::BindRentalType},
			{"byRegType", &UserRentalItem::BindRegTime},
			{"nRentalIndex", &UserRentalItem::BindRentalIndex},
			{"nItemIndex", &UserRentalItem::BindItemIndex},
			{"sDurability", &UserRentalItem::BindDurability},
			{"nSerialNumber", &UserRentalItem::BindSerialNumber},
			{"nRentalMoney", &UserRentalItem::BindRentalMoney},
			{"sRentalTime", &UserRentalItem::BindRentalTime},
			{"sDuringTime", &UserRentalItem::BindDuringTime},
			{"timeRental", &UserRentalItem::BindRentalTimestamp},
			{"timeRegister", &UserRentalItem::BindRegisterTime}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to UserId
	void UserRentalItem::BindUserId(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.UserId);
	}

	/// \brief Binds a result's column to AccountId
	void UserRentalItem::BindAccountId(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	/// \brief Binds a result's column to RentalType
	void UserRentalItem::BindRentalType(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RentalType);
	}

	/// \brief Binds a result's column to RegTime
	void UserRentalItem::BindRegTime(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RegTime);
	}

	/// \brief Binds a result's column to RentalIndex
	void UserRentalItem::BindRentalIndex(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RentalIndex);
	}

	/// \brief Binds a result's column to ItemIndex
	void UserRentalItem::BindItemIndex(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemIndex);
	}

	/// \brief Binds a result's column to Durability
	void UserRentalItem::BindDurability(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Durability);
	}

	/// \brief Binds a result's column to SerialNumber
	void UserRentalItem::BindSerialNumber(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int64_t>(colIndex, m.SerialNumber);
	}

	/// \brief Binds a result's column to RentalMoney
	void UserRentalItem::BindRentalMoney(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RentalMoney);
	}

	/// \brief Binds a result's column to RentalTime
	void UserRentalItem::BindRentalTime(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RentalTime);
	}

	/// \brief Binds a result's column to DuringTime
	void UserRentalItem::BindDuringTime(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DuringTime);
	}

	/// \brief Binds a result's column to RentalTimestamp
	void UserRentalItem::BindRentalTimestamp(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		std::optional<nanodbc::timestamp> tmpValue;
		result.get_ref<std::optional<nanodbc::timestamp>>(colIndex, tmpValue);

		if (tmpValue.has_value())
			m.RentalTimestamp = binderUtil::CTimeFromDbTime(*tmpValue);
		else
			m.RentalTimestamp.reset();
	}

	/// \brief Binds a result's column to RegisterTime
	void UserRentalItem::BindRegisterTime(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		std::optional<nanodbc::timestamp> tmpValue;
		result.get_ref<std::optional<nanodbc::timestamp>>(colIndex, tmpValue);

		if (tmpValue.has_value())
			m.RegisterTime = binderUtil::CTimeFromDbTime(*tmpValue);
		else
			m.RegisterTime.reset();
	}

	/// \brief Returns the binding function associated with the column name
	const UserSavedMagic::BindingsMapType& UserSavedMagic::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strCharID", &UserSavedMagic::BindCharId},
			{"nSkill1", &UserSavedMagic::BindSkill1},
			{"nDuring1", &UserSavedMagic::BindDuring1},
			{"nSkill2", &UserSavedMagic::BindSkill2},
			{"nDuring2", &UserSavedMagic::BindDuring2},
			{"nSkill3", &UserSavedMagic::BindSkill3},
			{"nDuring3", &UserSavedMagic::BindDuring3},
			{"nSkill4", &UserSavedMagic::BindSkill4},
			{"nDuring4", &UserSavedMagic::BindDuring4},
			{"nSkill5", &UserSavedMagic::BindSkill5},
			{"nDuring5", &UserSavedMagic::BindDuring5},
			{"nSkill6", &UserSavedMagic::BindSkill6},
			{"nDuring6", &UserSavedMagic::BindDuring6},
			{"nSkill7", &UserSavedMagic::BindSkill7},
			{"nDuring7", &UserSavedMagic::BindDuring7},
			{"nSkill8", &UserSavedMagic::BindSkill8},
			{"nDuring8", &UserSavedMagic::BindDuring8},
			{"nSkill9", &UserSavedMagic::BindSkill9},
			{"nDuring9", &UserSavedMagic::BindDuring9},
			{"nSkill10", &UserSavedMagic::BindSkill10},
			{"nDuring10", &UserSavedMagic::BindDuring10}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to CharId
	void UserSavedMagic::BindCharId(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	/// \brief Binds a result's column to Skill1
	void UserSavedMagic::BindSkill1(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Skill1);
	}

	/// \brief Binds a result's column to During1
	void UserSavedMagic::BindDuring1(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.During1);
	}

	/// \brief Binds a result's column to Skill2
	void UserSavedMagic::BindSkill2(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Skill2);
	}

	/// \brief Binds a result's column to During2
	void UserSavedMagic::BindDuring2(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.During2);
	}

	/// \brief Binds a result's column to Skill3
	void UserSavedMagic::BindSkill3(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Skill3);
	}

	/// \brief Binds a result's column to During3
	void UserSavedMagic::BindDuring3(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.During3);
	}

	/// \brief Binds a result's column to Skill4
	void UserSavedMagic::BindSkill4(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Skill4);
	}

	/// \brief Binds a result's column to During4
	void UserSavedMagic::BindDuring4(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.During4);
	}

	/// \brief Binds a result's column to Skill5
	void UserSavedMagic::BindSkill5(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Skill5);
	}

	/// \brief Binds a result's column to During5
	void UserSavedMagic::BindDuring5(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.During5);
	}

	/// \brief Binds a result's column to Skill6
	void UserSavedMagic::BindSkill6(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Skill6);
	}

	/// \brief Binds a result's column to During6
	void UserSavedMagic::BindDuring6(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.During6);
	}

	/// \brief Binds a result's column to Skill7
	void UserSavedMagic::BindSkill7(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Skill7);
	}

	/// \brief Binds a result's column to During7
	void UserSavedMagic::BindDuring7(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.During7);
	}

	/// \brief Binds a result's column to Skill8
	void UserSavedMagic::BindSkill8(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Skill8);
	}

	/// \brief Binds a result's column to During8
	void UserSavedMagic::BindDuring8(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.During8);
	}

	/// \brief Binds a result's column to Skill9
	void UserSavedMagic::BindSkill9(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Skill9);
	}

	/// \brief Binds a result's column to During9
	void UserSavedMagic::BindDuring9(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.During9);
	}

	/// \brief Binds a result's column to Skill10
	void UserSavedMagic::BindSkill10(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Skill10);
	}

	/// \brief Binds a result's column to During10
	void UserSavedMagic::BindDuring10(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.During10);
	}

	/// \brief Returns the binding function associated with the column name
	const UserData::BindingsMapType& UserData::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strUserId", &UserData::BindUserId},
			{"Nation", &UserData::BindNation},
			{"Race", &UserData::BindRace},
			{"Class", &UserData::BindClass},
			{"HairColor", &UserData::BindHairColor},
			{"Rank", &UserData::BindRank},
			{"Title", &UserData::BindTitle},
			{"Level", &UserData::BindLevel},
			{"Exp", &UserData::BindExp},
			{"Loyalty", &UserData::BindLoyalty},
			{"Face", &UserData::BindFace},
			{"City", &UserData::BindCity},
			{"Knights", &UserData::BindKnightsId},
			{"Fame", &UserData::BindFame},
			{"Hp", &UserData::BindHp},
			{"Mp", &UserData::BindMp},
			{"Sp", &UserData::BindSp},
			{"Strong", &UserData::BindStrength},
			{"Sta", &UserData::BindStamina},
			{"Dex", &UserData::BindDexterity},
			{"Intel", &UserData::BindIntelligence},
			{"Cha", &UserData::BindCharisma},
			{"Authority", &UserData::BindAuthority},
			{"Points", &UserData::BindStatPoints},
			{"Gold", &UserData::BindGold},
			{"Zone", &UserData::BindZone},
			{"Bind", &UserData::BindBind},
			{"PX", &UserData::BindPosX},
			{"PZ", &UserData::BindPosZ},
			{"PY", &UserData::BindPosY},
			{"dwTime", &UserData::BindDwTime},
			{"strSkill", &UserData::BindSkillData},
			{"strItem", &UserData::BindItemData},
			{"strSerial", &UserData::BindSerial},
			{"sQuestCount", &UserData::BindQuestCount},
			{"strQuest", &UserData::BindQuestData},
			{"MannerPoint", &UserData::BindMannerPoint},
			{"LoyaltyMonthly", &UserData::BindLoyaltyMonthly},
			{"CreateTime", &UserData::BindCreateTime},
			{"UpdateTime", &UserData::BindUpdateTime}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to UserId
	void UserData::BindUserId(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.UserId);
	}

	/// \brief Binds a result's column to Nation
	void UserData::BindNation(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	/// \brief Binds a result's column to Race
	void UserData::BindRace(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Race);
	}

	/// \brief Binds a result's column to Class
	void UserData::BindClass(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class);
	}

	/// \brief Binds a result's column to HairColor
	void UserData::BindHairColor(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.HairColor);
	}

	/// \brief Binds a result's column to Rank
	void UserData::BindRank(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Rank);
	}

	/// \brief Binds a result's column to Title
	void UserData::BindTitle(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Title);
	}

	/// \brief Binds a result's column to Level
	void UserData::BindLevel(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Level);
	}

	/// \brief Binds a result's column to Exp
	void UserData::BindExp(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Exp);
	}

	/// \brief Binds a result's column to Loyalty
	void UserData::BindLoyalty(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Loyalty);
	}

	/// \brief Binds a result's column to Face
	void UserData::BindFace(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Face);
	}

	/// \brief Binds a result's column to City
	void UserData::BindCity(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.City);
	}

	/// \brief Binds a result's column to KnightsId
	void UserData::BindKnightsId(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KnightsId);
	}

	/// \brief Binds a result's column to Fame
	void UserData::BindFame(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Fame);
	}

	/// \brief Binds a result's column to Hp
	void UserData::BindHp(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Hp);
	}

	/// \brief Binds a result's column to Mp
	void UserData::BindMp(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Mp);
	}

	/// \brief Binds a result's column to Sp
	void UserData::BindSp(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Sp);
	}

	/// \brief Binds a result's column to Strength
	void UserData::BindStrength(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Strength);
	}

	/// \brief Binds a result's column to Stamina
	void UserData::BindStamina(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Stamina);
	}

	/// \brief Binds a result's column to Dexterity
	void UserData::BindDexterity(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Dexterity);
	}

	/// \brief Binds a result's column to Intelligence
	void UserData::BindIntelligence(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Intelligence);
	}

	/// \brief Binds a result's column to Charisma
	void UserData::BindCharisma(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Charisma);
	}

	/// \brief Binds a result's column to Authority
	void UserData::BindAuthority(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Authority);
	}

	/// \brief Binds a result's column to StatPoints
	void UserData::BindStatPoints(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StatPoints);
	}

	/// \brief Binds a result's column to Gold
	void UserData::BindGold(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Gold);
	}

	/// \brief Binds a result's column to Zone
	void UserData::BindZone(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Zone);
	}

	/// \brief Binds a result's column to Bind
	void UserData::BindBind(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.Bind);
	}

	/// \brief Binds a result's column to PosX
	void UserData::BindPosX(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.PosX);
	}

	/// \brief Binds a result's column to PosZ
	void UserData::BindPosZ(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.PosZ);
	}

	/// \brief Binds a result's column to PosY
	void UserData::BindPosY(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.PosY);
	}

	/// \brief Binds a result's column to DwTime
	void UserData::BindDwTime(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.DwTime);
	}

	/// \brief Binds a result's column to SkillData
	void UserData::BindSkillData(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.SkillData);
	}

	/// \brief Binds a result's column to ItemData
	void UserData::BindItemData(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.ItemData);
	}

	/// \brief Binds a result's column to Serial
	void UserData::BindSerial(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.Serial);
	}

	/// \brief Binds a result's column to QuestCount
	void UserData::BindQuestCount(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.QuestCount);
	}

	/// \brief Binds a result's column to QuestData
	void UserData::BindQuestData(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.QuestData);
	}

	/// \brief Binds a result's column to MannerPoint
	void UserData::BindMannerPoint(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.MannerPoint);
	}

	/// \brief Binds a result's column to LoyaltyMonthly
	void UserData::BindLoyaltyMonthly(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LoyaltyMonthly);
	}

	/// \brief Binds a result's column to CreateTime
	void UserData::BindCreateTime(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.CreateTime = binderUtil::CTimeFromDbTime(tmpValue);
	}

	/// \brief Binds a result's column to UpdateTime
	void UserData::BindUpdateTime(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		std::optional<nanodbc::timestamp> tmpValue;
		result.get_ref<std::optional<nanodbc::timestamp>>(colIndex, tmpValue);

		if (tmpValue.has_value())
			m.UpdateTime = binderUtil::CTimeFromDbTime(*tmpValue);
		else
			m.UpdateTime.reset();
	}

	/// \brief Returns the binding function associated with the column name
	const UserDataSkillShortcut::BindingsMapType& UserDataSkillShortcut::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strCharID", &UserDataSkillShortcut::BindCharId},
			{"nCount", &UserDataSkillShortcut::BindCount},
			{"strSkillData", &UserDataSkillShortcut::BindSkillData}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to CharId
	void UserDataSkillShortcut::BindCharId(full_model::UserDataSkillShortcut& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	/// \brief Binds a result's column to Count
	void UserDataSkillShortcut::BindCount(full_model::UserDataSkillShortcut& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Count);
	}

	/// \brief Binds a result's column to SkillData
	void UserDataSkillShortcut::BindSkillData(full_model::UserDataSkillShortcut& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.SkillData);
	}

	/// \brief Returns the binding function associated with the column name
	const Version::BindingsMapType& Version::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sVersion", &Version::BindNumber},
			{"strFileName", &Version::BindFileName},
			{"strCompressName", &Version::BindCompressName},
			{"sHistoryVersion", &Version::BindHistoryVersion}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Number
	void Version::BindNumber(full_model::Version& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Number);
	}

	/// \brief Binds a result's column to FileName
	void Version::BindFileName(full_model::Version& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.FileName);
	}

	/// \brief Binds a result's column to CompressName
	void Version::BindCompressName(full_model::Version& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CompressName);
	}

	/// \brief Binds a result's column to HistoryVersion
	void Version::BindHistoryVersion(full_model::Version& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HistoryVersion);
	}

	/// \brief Returns the binding function associated with the column name
	const Warehouse::BindingsMapType& Warehouse::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strAccountID", &Warehouse::BindAccountId},
			{"nMoney", &Warehouse::BindMoney},
			{"dwTime", &Warehouse::BindDwTime},
			{"WarehouseData", &Warehouse::BindItemData},
			{"strSerial", &Warehouse::BindSerial}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to AccountId
	void Warehouse::BindAccountId(full_model::Warehouse& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	/// \brief Binds a result's column to Money
	void Warehouse::BindMoney(full_model::Warehouse& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Money);
	}

	/// \brief Binds a result's column to DwTime
	void Warehouse::BindDwTime(full_model::Warehouse& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.DwTime);
	}

	/// \brief Binds a result's column to ItemData
	void Warehouse::BindItemData(full_model::Warehouse& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.ItemData);
	}

	/// \brief Binds a result's column to Serial
	void Warehouse::BindSerial(full_model::Warehouse& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.Serial);
	}

	/// \brief Returns the binding function associated with the column name
	const WebItemMall::BindingsMapType& WebItemMall::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strAccountID", &WebItemMall::BindAccountId},
			{"strCharID", &WebItemMall::BindCharId},
			{"ServerNo", &WebItemMall::BindServerId},
			{"ItemID", &WebItemMall::BindItemId},
			{"ItemCount", &WebItemMall::BindItemCount},
			{"BuyTime", &WebItemMall::BindBuyTime},
			{"img_file_name", &WebItemMall::BindImgFileName},
			{"strItemName", &WebItemMall::BindItemName},
			{"price", &WebItemMall::BindPrice},
			{"pay_type", &WebItemMall::BindPayType}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to AccountId
	void WebItemMall::BindAccountId(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	/// \brief Binds a result's column to CharId
	void WebItemMall::BindCharId(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	/// \brief Binds a result's column to ServerId
	void WebItemMall::BindServerId(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ServerId);
	}

	/// \brief Binds a result's column to ItemId
	void WebItemMall::BindItemId(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId);
	}

	/// \brief Binds a result's column to ItemCount
	void WebItemMall::BindItemCount(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ItemCount);
	}

	/// \brief Binds a result's column to BuyTime
	void WebItemMall::BindBuyTime(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.BuyTime = binderUtil::CTimeFromDbTime(tmpValue);
	}

	/// \brief Binds a result's column to ImgFileName
	void WebItemMall::BindImgFileName(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ImgFileName);
	}

	/// \brief Binds a result's column to ItemName
	void WebItemMall::BindItemName(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ItemName);
	}

	/// \brief Binds a result's column to Price
	void WebItemMall::BindPrice(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.Price);
	}

	/// \brief Binds a result's column to PayType
	void WebItemMall::BindPayType(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.PayType);
	}

	/// \brief Returns the binding function associated with the column name
	const WebItemMallLog::BindingsMapType& WebItemMallLog::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strAccountID", &WebItemMallLog::BindAccountId},
			{"strCharID", &WebItemMallLog::BindCharId},
			{"ServerNo", &WebItemMallLog::BindServerId},
			{"ItemID", &WebItemMallLog::BindItemId},
			{"ItemCount", &WebItemMallLog::BindItemCount},
			{"BuyTime", &WebItemMallLog::BindBuyTime},
			{"img_file_name", &WebItemMallLog::BindImgFileName},
			{"strItemName", &WebItemMallLog::BindItemName},
			{"price", &WebItemMallLog::BindPrice},
			{"pay_type", &WebItemMallLog::BindPayType}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to AccountId
	void WebItemMallLog::BindAccountId(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	/// \brief Binds a result's column to CharId
	void WebItemMallLog::BindCharId(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	/// \brief Binds a result's column to ServerId
	void WebItemMallLog::BindServerId(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ServerId);
	}

	/// \brief Binds a result's column to ItemId
	void WebItemMallLog::BindItemId(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId);
	}

	/// \brief Binds a result's column to ItemCount
	void WebItemMallLog::BindItemCount(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ItemCount);
	}

	/// \brief Binds a result's column to BuyTime
	void WebItemMallLog::BindBuyTime(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.BuyTime = binderUtil::CTimeFromDbTime(tmpValue);
	}

	/// \brief Binds a result's column to ImgFileName
	void WebItemMallLog::BindImgFileName(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ImgFileName);
	}

	/// \brief Binds a result's column to ItemName
	void WebItemMallLog::BindItemName(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ItemName);
	}

	/// \brief Binds a result's column to Price
	void WebItemMallLog::BindPrice(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.Price);
	}

	/// \brief Binds a result's column to PayType
	void WebItemMallLog::BindPayType(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.PayType);
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
	void WebpageAddress::BindIndex(full_model::WebpageAddress& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to WebPageAddress
	void WebpageAddress::BindWebPageAddress(full_model::WebpageAddress& m, const nanodbc::result& result, short colIndex)
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
			{"RoomEvent", &ZoneInfo::BindRoomEvent},
			{"bz", &ZoneInfo::BindBz}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ServerId
	void ZoneInfo::BindServerId(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ServerId);
	}

	/// \brief Binds a result's column to ZoneId
	void ZoneInfo::BindZoneId(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ZoneId);
	}

	/// \brief Binds a result's column to Name
	void ZoneInfo::BindName(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to InitX
	void ZoneInfo::BindInitX(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.InitX);
	}

	/// \brief Binds a result's column to InitZ
	void ZoneInfo::BindInitZ(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.InitZ);
	}

	/// \brief Binds a result's column to InitY
	void ZoneInfo::BindInitY(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.InitY);
	}

	/// \brief Binds a result's column to Type
	void ZoneInfo::BindType(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	/// \brief Binds a result's column to RoomEvent
	void ZoneInfo::BindRoomEvent(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RoomEvent);
	}

	/// \brief Binds a result's column to Bz
	void ZoneInfo::BindBz(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Bz);
	}
}