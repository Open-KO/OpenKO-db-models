#include "AIServerBinder.h"
#include <AIServer/model/AIServerModel.h>
#include <nanodbc/nanodbc.h>

namespace aiserver_binder
{
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
	void Monster::BindMonsterId(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterId);
	}

	/// \brief Binds a result's column to Name
	void Monster::BindName(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to PictureId
	void Monster::BindPictureId(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PictureId);
	}

	/// \brief Binds a result's column to Size
	void Monster::BindSize(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Size);
	}

	/// \brief Binds a result's column to Weapon1
	void Monster::BindWeapon1(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Weapon1);
	}

	/// \brief Binds a result's column to Weapon2
	void Monster::BindWeapon2(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Weapon2);
	}

	/// \brief Binds a result's column to Group
	void Monster::BindGroup(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Group);
	}

	/// \brief Binds a result's column to ActType
	void Monster::BindActType(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ActType);
	}

	/// \brief Binds a result's column to Type
	void Monster::BindType(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	/// \brief Binds a result's column to Family
	void Monster::BindFamily(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Family);
	}

	/// \brief Binds a result's column to Rank
	void Monster::BindRank(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Rank);
	}

	/// \brief Binds a result's column to Title
	void Monster::BindTitle(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Title);
	}

	/// \brief Binds a result's column to SellingGroup
	void Monster::BindSellingGroup(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.SellingGroup);
	}

	/// \brief Binds a result's column to Level
	void Monster::BindLevel(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Level);
	}

	/// \brief Binds a result's column to Exp
	void Monster::BindExp(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Exp);
	}

	/// \brief Binds a result's column to Loyalty
	void Monster::BindLoyalty(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Loyalty);
	}

	/// \brief Binds a result's column to HitPoints
	void Monster::BindHitPoints(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.HitPoints);
	}

	/// \brief Binds a result's column to ManaPoints
	void Monster::BindManaPoints(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ManaPoints);
	}

	/// \brief Binds a result's column to Attack
	void Monster::BindAttack(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Attack);
	}

	/// \brief Binds a result's column to Armor
	void Monster::BindArmor(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Armor);
	}

	/// \brief Binds a result's column to HitRate
	void Monster::BindHitRate(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	/// \brief Binds a result's column to EvadeRate
	void Monster::BindEvadeRate(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EvadeRate);
	}

	/// \brief Binds a result's column to Damage
	void Monster::BindDamage(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Damage);
	}

	/// \brief Binds a result's column to AttackDelay
	void Monster::BindAttackDelay(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AttackDelay);
	}

	/// \brief Binds a result's column to WalkSpeed
	void Monster::BindWalkSpeed(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WalkSpeed);
	}

	/// \brief Binds a result's column to RunSpeed
	void Monster::BindRunSpeed(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RunSpeed);
	}

	/// \brief Binds a result's column to StandTime
	void Monster::BindStandTime(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.StandTime);
	}

	/// \brief Binds a result's column to Magic1
	void Monster::BindMagic1(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic1);
	}

	/// \brief Binds a result's column to Magic2
	void Monster::BindMagic2(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic2);
	}

	/// \brief Binds a result's column to Magic3
	void Monster::BindMagic3(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic3);
	}

	/// \brief Binds a result's column to FireResist
	void Monster::BindFireResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.FireResist);
	}

	/// \brief Binds a result's column to ColdResist
	void Monster::BindColdResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ColdResist);
	}

	/// \brief Binds a result's column to LightningResist
	void Monster::BindLightningResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.LightningResist);
	}

	/// \brief Binds a result's column to MagicResist
	void Monster::BindMagicResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MagicResist);
	}

	/// \brief Binds a result's column to DiseaseResist
	void Monster::BindDiseaseResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DiseaseResist);
	}

	/// \brief Binds a result's column to PoisonResist
	void Monster::BindPoisonResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PoisonResist);
	}

	/// \brief Binds a result's column to LightResist
	void Monster::BindLightResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.LightResist);
	}

	/// \brief Binds a result's column to Bulk
	void Monster::BindBulk(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Bulk);
	}

	/// \brief Binds a result's column to AttackRange
	void Monster::BindAttackRange(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.AttackRange);
	}

	/// \brief Binds a result's column to SearchRange
	void Monster::BindSearchRange(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SearchRange);
	}

	/// \brief Binds a result's column to TracingRange
	void Monster::BindTracingRange(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TracingRange);
	}

	/// \brief Binds a result's column to Money
	void Monster::BindMoney(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Money);
	}

	/// \brief Binds a result's column to Item
	void Monster::BindItem(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Item);
	}

	/// \brief Binds a result's column to DirectAttack
	void Monster::BindDirectAttack(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DirectAttack);
	}

	/// \brief Binds a result's column to MagicAttack
	void Monster::BindMagicAttack(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MagicAttack);
	}

	/// \brief Binds a result's column to MoneyType
	void Monster::BindMoneyType(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
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
	void MonsterItem::BindMonsterId(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterId);
	}

	/// \brief Binds a result's column to ItemId1
	void MonsterItem::BindItemId1(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId1);
	}

	/// \brief Binds a result's column to DropChance1
	void MonsterItem::BindDropChance1(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DropChance1);
	}

	/// \brief Binds a result's column to ItemId2
	void MonsterItem::BindItemId2(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId2);
	}

	/// \brief Binds a result's column to DropChance2
	void MonsterItem::BindDropChance2(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DropChance2);
	}

	/// \brief Binds a result's column to ItemId3
	void MonsterItem::BindItemId3(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId3);
	}

	/// \brief Binds a result's column to DropChance3
	void MonsterItem::BindDropChance3(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DropChance3);
	}

	/// \brief Binds a result's column to ItemId4
	void MonsterItem::BindItemId4(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId4);
	}

	/// \brief Binds a result's column to DropChance4
	void MonsterItem::BindDropChance4(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DropChance4);
	}

	/// \brief Binds a result's column to ItemId5
	void MonsterItem::BindItemId5(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId5);
	}

	/// \brief Binds a result's column to DropChance5
	void MonsterItem::BindDropChance5(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
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
	void Npc::BindNpcId(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NpcId);
	}

	/// \brief Binds a result's column to Name
	void Npc::BindName(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to PictureId
	void Npc::BindPictureId(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PictureId);
	}

	/// \brief Binds a result's column to Size
	void Npc::BindSize(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Size);
	}

	/// \brief Binds a result's column to Weapon1
	void Npc::BindWeapon1(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Weapon1);
	}

	/// \brief Binds a result's column to Weapon2
	void Npc::BindWeapon2(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Weapon2);
	}

	/// \brief Binds a result's column to Group
	void Npc::BindGroup(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Group);
	}

	/// \brief Binds a result's column to ActType
	void Npc::BindActType(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ActType);
	}

	/// \brief Binds a result's column to Type
	void Npc::BindType(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	/// \brief Binds a result's column to Family
	void Npc::BindFamily(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Family);
	}

	/// \brief Binds a result's column to Rank
	void Npc::BindRank(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Rank);
	}

	/// \brief Binds a result's column to Title
	void Npc::BindTitle(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Title);
	}

	/// \brief Binds a result's column to SellingGroup
	void Npc::BindSellingGroup(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.SellingGroup);
	}

	/// \brief Binds a result's column to Level
	void Npc::BindLevel(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Level);
	}

	/// \brief Binds a result's column to Exp
	void Npc::BindExp(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Exp);
	}

	/// \brief Binds a result's column to Loyalty
	void Npc::BindLoyalty(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Loyalty);
	}

	/// \brief Binds a result's column to HitPoints
	void Npc::BindHitPoints(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.HitPoints);
	}

	/// \brief Binds a result's column to ManaPoints
	void Npc::BindManaPoints(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ManaPoints);
	}

	/// \brief Binds a result's column to Attack
	void Npc::BindAttack(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Attack);
	}

	/// \brief Binds a result's column to Armor
	void Npc::BindArmor(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Armor);
	}

	/// \brief Binds a result's column to HitRate
	void Npc::BindHitRate(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	/// \brief Binds a result's column to EvadeRate
	void Npc::BindEvadeRate(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EvadeRate);
	}

	/// \brief Binds a result's column to Damage
	void Npc::BindDamage(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Damage);
	}

	/// \brief Binds a result's column to AttackDelay
	void Npc::BindAttackDelay(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AttackDelay);
	}

	/// \brief Binds a result's column to WalkSpeed
	void Npc::BindWalkSpeed(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WalkSpeed);
	}

	/// \brief Binds a result's column to RunSpeed
	void Npc::BindRunSpeed(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RunSpeed);
	}

	/// \brief Binds a result's column to StandTime
	void Npc::BindStandTime(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.StandTime);
	}

	/// \brief Binds a result's column to Magic1
	void Npc::BindMagic1(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic1);
	}

	/// \brief Binds a result's column to Magic2
	void Npc::BindMagic2(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic2);
	}

	/// \brief Binds a result's column to Magic3
	void Npc::BindMagic3(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic3);
	}

	/// \brief Binds a result's column to FireResist
	void Npc::BindFireResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.FireResist);
	}

	/// \brief Binds a result's column to ColdResist
	void Npc::BindColdResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ColdResist);
	}

	/// \brief Binds a result's column to LightningResist
	void Npc::BindLightningResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.LightningResist);
	}

	/// \brief Binds a result's column to MagicResist
	void Npc::BindMagicResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MagicResist);
	}

	/// \brief Binds a result's column to DiseaseResist
	void Npc::BindDiseaseResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DiseaseResist);
	}

	/// \brief Binds a result's column to PoisonResist
	void Npc::BindPoisonResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PoisonResist);
	}

	/// \brief Binds a result's column to LightResist
	void Npc::BindLightResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.LightResist);
	}

	/// \brief Binds a result's column to Bulk
	void Npc::BindBulk(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Bulk);
	}

	/// \brief Binds a result's column to AttackRange
	void Npc::BindAttackRange(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.AttackRange);
	}

	/// \brief Binds a result's column to SearchRange
	void Npc::BindSearchRange(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SearchRange);
	}

	/// \brief Binds a result's column to TracingRange
	void Npc::BindTracingRange(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TracingRange);
	}

	/// \brief Binds a result's column to Money
	void Npc::BindMoney(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Money);
	}

	/// \brief Binds a result's column to Item
	void Npc::BindItem(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Item);
	}

	/// \brief Binds a result's column to DirectAttack
	void Npc::BindDirectAttack(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DirectAttack);
	}

	/// \brief Binds a result's column to MagicAttack
	void Npc::BindMagicAttack(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MagicAttack);
	}

	/// \brief Binds a result's column to MoneyType
	void Npc::BindMoneyType(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MoneyType);
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
	void NpcMoveItem::BindCastleIndex(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CastleIndex);
	}

	/// \brief Binds a result's column to ChangeItem
	void NpcMoveItem::BindChangeItem(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.ChangeItem);
	}

	/// \brief Binds a result's column to ChangeId
	void NpcMoveItem::BindChangeId(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.ChangeId);
	}

	/// \brief Binds a result's column to MoveItem
	void NpcMoveItem::BindMoveItem(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.MoveItem);
	}

	/// \brief Binds a result's column to MoveMinX
	void NpcMoveItem::BindMoveMinX(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMinX);
	}

	/// \brief Binds a result's column to MoveMinY
	void NpcMoveItem::BindMoveMinY(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMinY);
	}

	/// \brief Binds a result's column to MoveMaxX
	void NpcMoveItem::BindMoveMaxX(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMaxX);
	}

	/// \brief Binds a result's column to MoveMaxY
	void NpcMoveItem::BindMoveMaxY(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
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
	void NpcPos::BindZoneId(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ZoneId);
	}

	/// \brief Binds a result's column to NpcId
	void NpcPos::BindNpcId(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.NpcId);
	}

	/// \brief Binds a result's column to ActType
	void NpcPos::BindActType(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ActType);
	}

	/// \brief Binds a result's column to RegenType
	void NpcPos::BindRegenType(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RegenType);
	}

	/// \brief Binds a result's column to DungeonFamily
	void NpcPos::BindDungeonFamily(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DungeonFamily);
	}

	/// \brief Binds a result's column to SpecialType
	void NpcPos::BindSpecialType(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SpecialType);
	}

	/// \brief Binds a result's column to TrapNumber
	void NpcPos::BindTrapNumber(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TrapNumber);
	}

	/// \brief Binds a result's column to LeftX
	void NpcPos::BindLeftX(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LeftX);
	}

	/// \brief Binds a result's column to TopZ
	void NpcPos::BindTopZ(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.TopZ);
	}

	/// \brief Binds a result's column to RightX
	void NpcPos::BindRightX(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RightX);
	}

	/// \brief Binds a result's column to BottomZ
	void NpcPos::BindBottomZ(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BottomZ);
	}

	/// \brief Binds a result's column to LimitMinZ
	void NpcPos::BindLimitMinZ(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LimitMinZ);
	}

	/// \brief Binds a result's column to LimitMinX
	void NpcPos::BindLimitMinX(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LimitMinX);
	}

	/// \brief Binds a result's column to LimitMaxX
	void NpcPos::BindLimitMaxX(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LimitMaxX);
	}

	/// \brief Binds a result's column to LimitMaxZ
	void NpcPos::BindLimitMaxZ(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LimitMaxZ);
	}

	/// \brief Binds a result's column to NumNpc
	void NpcPos::BindNumNpc(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NumNpc);
	}

	/// \brief Binds a result's column to RespawnTime
	void NpcPos::BindRespawnTime(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RespawnTime);
	}

	/// \brief Binds a result's column to Direction
	void NpcPos::BindDirection(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Direction);
	}

	/// \brief Binds a result's column to PathPointCount
	void NpcPos::BindPathPointCount(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.PathPointCount);
	}

	/// \brief Binds a result's column to Path
	void NpcPos::BindPath(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Path);
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
	void LevelUp::BindLevel(aiserver_model::LevelUp& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Level);
	}

	/// \brief Binds a result's column to RequiredExp
	void LevelUp::BindRequiredExp(aiserver_model::LevelUp& m, const nanodbc::result& result, short colIndex)
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
	void Magic::BindID(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to BeforeAction
	void Magic::BindBeforeAction(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BeforeAction);
	}

	/// \brief Binds a result's column to TargetAction
	void Magic::BindTargetAction(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TargetAction);
	}

	/// \brief Binds a result's column to SelfEffect
	void Magic::BindSelfEffect(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SelfEffect);
	}

	/// \brief Binds a result's column to FlyingEffect
	void Magic::BindFlyingEffect(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FlyingEffect);
	}

	/// \brief Binds a result's column to TargetEffect
	void Magic::BindTargetEffect(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TargetEffect);
	}

	/// \brief Binds a result's column to Moral
	void Magic::BindMoral(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Moral);
	}

	/// \brief Binds a result's column to SkillLevel
	void Magic::BindSkillLevel(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.SkillLevel);
	}

	/// \brief Binds a result's column to Skill
	void Magic::BindSkill(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Skill);
	}

	/// \brief Binds a result's column to ManaCost
	void Magic::BindManaCost(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ManaCost);
	}

	/// \brief Binds a result's column to HpCost
	void Magic::BindHpCost(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HpCost);
	}

	/// \brief Binds a result's column to ItemGroup
	void Magic::BindItemGroup(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ItemGroup);
	}

	/// \brief Binds a result's column to UseItem
	void Magic::BindUseItem(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.UseItem);
	}

	/// \brief Binds a result's column to CastTime
	void Magic::BindCastTime(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.CastTime);
	}

	/// \brief Binds a result's column to RecastTime
	void Magic::BindRecastTime(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RecastTime);
	}

	/// \brief Binds a result's column to SuccessRate
	void Magic::BindSuccessRate(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SuccessRate);
	}

	/// \brief Binds a result's column to Type1
	void Magic::BindType1(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type1);
	}

	/// \brief Binds a result's column to Type2
	void Magic::BindType2(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type2);
	}

	/// \brief Binds a result's column to Range
	void Magic::BindRange(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Range);
	}

	/// \brief Binds a result's column to Etc
	void Magic::BindEtc(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Etc);
	}

	/// \brief Binds a result's column to Event
	void Magic::BindEvent(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
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
	void MagicType1::BindID(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Type
	void MagicType1::BindType(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	/// \brief Binds a result's column to HitRateMod
	void MagicType1::BindHitRateMod(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRateMod);
	}

	/// \brief Binds a result's column to DamageMod
	void MagicType1::BindDamageMod(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DamageMod);
	}

	/// \brief Binds a result's column to AddDamage
	void MagicType1::BindAddDamage(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AddDamage);
	}

	/// \brief Binds a result's column to Delay
	void MagicType1::BindDelay(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Delay);
	}

	/// \brief Binds a result's column to ComboType
	void MagicType1::BindComboType(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ComboType);
	}

	/// \brief Binds a result's column to ComboCount
	void MagicType1::BindComboCount(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ComboCount);
	}

	/// \brief Binds a result's column to ComboDamage
	void MagicType1::BindComboDamage(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ComboDamage);
	}

	/// \brief Binds a result's column to Range
	void MagicType1::BindRange(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
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
	void MagicType2::BindID(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to HitType
	void MagicType2::BindHitType(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.HitType);
	}

	/// \brief Binds a result's column to HitRateMod
	void MagicType2::BindHitRateMod(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRateMod);
	}

	/// \brief Binds a result's column to DamageMod
	void MagicType2::BindDamageMod(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DamageMod);
	}

	/// \brief Binds a result's column to RangeMod
	void MagicType2::BindRangeMod(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RangeMod);
	}

	/// \brief Binds a result's column to NeedArrow
	void MagicType2::BindNeedArrow(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NeedArrow);
	}

	/// \brief Binds a result's column to AddDamagePlus
	void MagicType2::BindAddDamagePlus(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
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
	void MagicType3::BindID(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Radius
	void MagicType3::BindRadius(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Radius);
	}

	/// \brief Binds a result's column to Angle
	void MagicType3::BindAngle(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Angle);
	}

	/// \brief Binds a result's column to DirectType
	void MagicType3::BindDirectType(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DirectType);
	}

	/// \brief Binds a result's column to FirstDamage
	void MagicType3::BindFirstDamage(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.FirstDamage);
	}

	/// \brief Binds a result's column to EndDamage
	void MagicType3::BindEndDamage(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EndDamage);
	}

	/// \brief Binds a result's column to TimeDamage
	void MagicType3::BindTimeDamage(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TimeDamage);
	}

	/// \brief Binds a result's column to Duration
	void MagicType3::BindDuration(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Duration);
	}

	/// \brief Binds a result's column to Attribute
	void MagicType3::BindAttribute(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
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
	void MagicType4::BindID(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to BuffType
	void MagicType4::BindBuffType(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BuffType);
	}

	/// \brief Binds a result's column to Radius
	void MagicType4::BindRadius(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Radius);
	}

	/// \brief Binds a result's column to Duration
	void MagicType4::BindDuration(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Duration);
	}

	/// \brief Binds a result's column to AttackSpeed
	void MagicType4::BindAttackSpeed(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.AttackSpeed);
	}

	/// \brief Binds a result's column to Speed
	void MagicType4::BindSpeed(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Speed);
	}

	/// \brief Binds a result's column to Armor
	void MagicType4::BindArmor(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Armor);
	}

	/// \brief Binds a result's column to ArmorPercent
	void MagicType4::BindArmorPercent(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ArmorPercent);
	}

	/// \brief Binds a result's column to AttackPower
	void MagicType4::BindAttackPower(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.AttackPower);
	}

	/// \brief Binds a result's column to MagicPower
	void MagicType4::BindMagicPower(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MagicPower);
	}

	/// \brief Binds a result's column to MaxHp
	void MagicType4::BindMaxHp(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxHp);
	}

	/// \brief Binds a result's column to MaxHpPercent
	void MagicType4::BindMaxHpPercent(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxHpPercent);
	}

	/// \brief Binds a result's column to MaxMp
	void MagicType4::BindMaxMp(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxMp);
	}

	/// \brief Binds a result's column to MaxMpPercent
	void MagicType4::BindMaxMpPercent(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxMpPercent);
	}

	/// \brief Binds a result's column to HitRate
	void MagicType4::BindHitRate(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.HitRate);
	}

	/// \brief Binds a result's column to AvoidRate
	void MagicType4::BindAvoidRate(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AvoidRate);
	}

	/// \brief Binds a result's column to Strength
	void MagicType4::BindStrength(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Strength);
	}

	/// \brief Binds a result's column to Stamina
	void MagicType4::BindStamina(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Stamina);
	}

	/// \brief Binds a result's column to Dexterity
	void MagicType4::BindDexterity(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Dexterity);
	}

	/// \brief Binds a result's column to Intelligence
	void MagicType4::BindIntelligence(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Intelligence);
	}

	/// \brief Binds a result's column to Charisma
	void MagicType4::BindCharisma(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Charisma);
	}

	/// \brief Binds a result's column to FireResist
	void MagicType4::BindFireResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FireResist);
	}

	/// \brief Binds a result's column to ColdResist
	void MagicType4::BindColdResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ColdResist);
	}

	/// \brief Binds a result's column to LightningResist
	void MagicType4::BindLightningResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LightningResist);
	}

	/// \brief Binds a result's column to MagicResist
	void MagicType4::BindMagicResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MagicResist);
	}

	/// \brief Binds a result's column to DiseaseResist
	void MagicType4::BindDiseaseResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DiseaseResist);
	}

	/// \brief Binds a result's column to PoisonResist
	void MagicType4::BindPoisonResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.PoisonResist);
	}

	/// \brief Binds a result's column to ExpPercent
	void MagicType4::BindExpPercent(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ExpPercent);
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
	void MagicType7::BindID(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to ValidGroup
	void MagicType7::BindValidGroup(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ValidGroup);
	}

	/// \brief Binds a result's column to NationChange
	void MagicType7::BindNationChange(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NationChange);
	}

	/// \brief Binds a result's column to MonsterNumber
	void MagicType7::BindMonsterNumber(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterNumber);
	}

	/// \brief Binds a result's column to TargetChange
	void MagicType7::BindTargetChange(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TargetChange);
	}

	/// \brief Binds a result's column to StateChange
	void MagicType7::BindStateChange(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StateChange);
	}

	/// \brief Binds a result's column to Radius
	void MagicType7::BindRadius(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Radius);
	}

	/// \brief Binds a result's column to HitRate
	void MagicType7::BindHitRate(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	/// \brief Binds a result's column to Duration
	void MagicType7::BindDuration(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Duration);
	}

	/// \brief Binds a result's column to Damage
	void MagicType7::BindDamage(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Damage);
	}

	/// \brief Binds a result's column to Vision
	void MagicType7::BindVision(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Vision);
	}

	/// \brief Binds a result's column to NeedItem
	void MagicType7::BindNeedItem(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
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
	void MakeDefensive::BindLevel(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Level);
	}

	/// \brief Binds a result's column to Class1
	void MakeDefensive::BindClass1(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class1);
	}

	/// \brief Binds a result's column to Class2
	void MakeDefensive::BindClass2(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class2);
	}

	/// \brief Binds a result's column to Class3
	void MakeDefensive::BindClass3(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class3);
	}

	/// \brief Binds a result's column to Class4
	void MakeDefensive::BindClass4(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class4);
	}

	/// \brief Binds a result's column to Class5
	void MakeDefensive::BindClass5(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class5);
	}

	/// \brief Binds a result's column to Class6
	void MakeDefensive::BindClass6(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class6);
	}

	/// \brief Binds a result's column to Class7
	void MakeDefensive::BindClass7(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class7);
	}

	/// \brief Returns the binding function associated with the column name
	const MakeItem::BindingsMapType& MakeItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &MakeItem::BindIndex},
			{"iItemCode", &MakeItem::BindItemCode},
			{"byItemLevel", &MakeItem::BindItemLevel}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Index
	void MakeItem::BindIndex(aiserver_model::MakeItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to ItemCode
	void MakeItem::BindItemCode(aiserver_model::MakeItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemCode);
	}

	/// \brief Binds a result's column to ItemLevel
	void MakeItem::BindItemLevel(aiserver_model::MakeItem& m, const nanodbc::result& result, short colIndex)
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
	void MakeItemGradeCode::BindItemIndex(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ItemIndex);
	}

	/// \brief Binds a result's column to Grade1
	void MakeItemGradeCode::BindGrade1(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade1);
	}

	/// \brief Binds a result's column to Grade2
	void MakeItemGradeCode::BindGrade2(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade2);
	}

	/// \brief Binds a result's column to Grade3
	void MakeItemGradeCode::BindGrade3(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade3);
	}

	/// \brief Binds a result's column to Grade4
	void MakeItemGradeCode::BindGrade4(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade4);
	}

	/// \brief Binds a result's column to Grade5
	void MakeItemGradeCode::BindGrade5(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade5);
	}

	/// \brief Binds a result's column to Grade6
	void MakeItemGradeCode::BindGrade6(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade6);
	}

	/// \brief Binds a result's column to Grade7
	void MakeItemGradeCode::BindGrade7(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade7);
	}

	/// \brief Binds a result's column to Grade8
	void MakeItemGradeCode::BindGrade8(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade8);
	}

	/// \brief Binds a result's column to Grade9
	void MakeItemGradeCode::BindGrade9(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
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
	void MakeItemGroup::BindItemGroupNumber(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemGroupNumber);
	}

	/// \brief Binds a result's column to Item1
	void MakeItemGroup::BindItem1(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item1);
	}

	/// \brief Binds a result's column to Item2
	void MakeItemGroup::BindItem2(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item2);
	}

	/// \brief Binds a result's column to Item3
	void MakeItemGroup::BindItem3(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item3);
	}

	/// \brief Binds a result's column to Item4
	void MakeItemGroup::BindItem4(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item4);
	}

	/// \brief Binds a result's column to Item5
	void MakeItemGroup::BindItem5(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item5);
	}

	/// \brief Binds a result's column to Item6
	void MakeItemGroup::BindItem6(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item6);
	}

	/// \brief Binds a result's column to Item7
	void MakeItemGroup::BindItem7(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item7);
	}

	/// \brief Binds a result's column to Item8
	void MakeItemGroup::BindItem8(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item8);
	}

	/// \brief Binds a result's column to Item9
	void MakeItemGroup::BindItem9(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item9);
	}

	/// \brief Binds a result's column to Item10
	void MakeItemGroup::BindItem10(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item10);
	}

	/// \brief Binds a result's column to Item11
	void MakeItemGroup::BindItem11(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item11);
	}

	/// \brief Binds a result's column to Item12
	void MakeItemGroup::BindItem12(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item12);
	}

	/// \brief Binds a result's column to Item13
	void MakeItemGroup::BindItem13(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item13);
	}

	/// \brief Binds a result's column to Item14
	void MakeItemGroup::BindItem14(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item14);
	}

	/// \brief Binds a result's column to Item15
	void MakeItemGroup::BindItem15(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item15);
	}

	/// \brief Binds a result's column to Item16
	void MakeItemGroup::BindItem16(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item16);
	}

	/// \brief Binds a result's column to Item17
	void MakeItemGroup::BindItem17(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item17);
	}

	/// \brief Binds a result's column to Item18
	void MakeItemGroup::BindItem18(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item18);
	}

	/// \brief Binds a result's column to Item19
	void MakeItemGroup::BindItem19(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item19);
	}

	/// \brief Binds a result's column to Item20
	void MakeItemGroup::BindItem20(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item20);
	}

	/// \brief Binds a result's column to Item21
	void MakeItemGroup::BindItem21(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item21);
	}

	/// \brief Binds a result's column to Item22
	void MakeItemGroup::BindItem22(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item22);
	}

	/// \brief Binds a result's column to Item23
	void MakeItemGroup::BindItem23(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item23);
	}

	/// \brief Binds a result's column to Item24
	void MakeItemGroup::BindItem24(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item24);
	}

	/// \brief Binds a result's column to Item25
	void MakeItemGroup::BindItem25(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item25);
	}

	/// \brief Binds a result's column to Item26
	void MakeItemGroup::BindItem26(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item26);
	}

	/// \brief Binds a result's column to Item27
	void MakeItemGroup::BindItem27(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item27);
	}

	/// \brief Binds a result's column to Item28
	void MakeItemGroup::BindItem28(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item28);
	}

	/// \brief Binds a result's column to Item29
	void MakeItemGroup::BindItem29(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item29);
	}

	/// \brief Binds a result's column to Item30
	void MakeItemGroup::BindItem30(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
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
	void MakeItemRareCode::BindLevelGrade(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LevelGrade);
	}

	/// \brief Binds a result's column to UpgradeItem
	void MakeItemRareCode::BindUpgradeItem(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.UpgradeItem);
	}

	/// \brief Binds a result's column to RareItem
	void MakeItemRareCode::BindRareItem(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RareItem);
	}

	/// \brief Binds a result's column to MagicItem
	void MakeItemRareCode::BindMagicItem(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MagicItem);
	}

	/// \brief Binds a result's column to GeneralItem
	void MakeItemRareCode::BindGeneralItem(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
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
	void MakeWeapon::BindLevel(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Level);
	}

	/// \brief Binds a result's column to Class1
	void MakeWeapon::BindClass1(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class1);
	}

	/// \brief Binds a result's column to Class2
	void MakeWeapon::BindClass2(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class2);
	}

	/// \brief Binds a result's column to Class3
	void MakeWeapon::BindClass3(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class3);
	}

	/// \brief Binds a result's column to Class4
	void MakeWeapon::BindClass4(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class4);
	}

	/// \brief Binds a result's column to Class5
	void MakeWeapon::BindClass5(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class5);
	}

	/// \brief Binds a result's column to Class6
	void MakeWeapon::BindClass6(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class6);
	}

	/// \brief Binds a result's column to Class7
	void MakeWeapon::BindClass7(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class7);
	}

	/// \brief Binds a result's column to Class8
	void MakeWeapon::BindClass8(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class8);
	}

	/// \brief Binds a result's column to Class9
	void MakeWeapon::BindClass9(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class9);
	}

	/// \brief Binds a result's column to Class10
	void MakeWeapon::BindClass10(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class10);
	}

	/// \brief Binds a result's column to Class11
	void MakeWeapon::BindClass11(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class11);
	}

	/// \brief Binds a result's column to Class12
	void MakeWeapon::BindClass12(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class12);
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
	void MonsterSummonList::BindMonsterId(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterId);
	}

	/// \brief Binds a result's column to Name
	void MonsterSummonList::BindName(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Level
	void MonsterSummonList::BindLevel(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Level);
	}

	/// \brief Binds a result's column to Probability
	void MonsterSummonList::BindProbability(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Probability);
	}

	/// \brief Binds a result's column to Type
	void MonsterSummonList::BindType(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
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
	void ZoneInfo::BindServerId(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ServerId);
	}

	/// \brief Binds a result's column to ZoneId
	void ZoneInfo::BindZoneId(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ZoneId);
	}

	/// \brief Binds a result's column to Name
	void ZoneInfo::BindName(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to InitX
	void ZoneInfo::BindInitX(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.InitX);
	}

	/// \brief Binds a result's column to InitZ
	void ZoneInfo::BindInitZ(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.InitZ);
	}

	/// \brief Binds a result's column to InitY
	void ZoneInfo::BindInitY(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.InitY);
	}

	/// \brief Binds a result's column to Type
	void ZoneInfo::BindType(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	/// \brief Binds a result's column to RoomEvent
	void ZoneInfo::BindRoomEvent(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RoomEvent);
	}
}