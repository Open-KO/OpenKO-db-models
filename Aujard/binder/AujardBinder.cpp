#include "AujardBinder.h"
#include "../model/AujardModel.h"
#include <nanodbc/nanodbc.h>

namespace aujard_binder
{
	/// \brief Returns the binding function associated with the column name
	const BindingsMapType& Battle::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &Battle::BindIndex},
			{"byNation", &Battle::BindNation},
			{"strUserName", &Battle::BindUserName}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to Index
	void Battle::BindIndex(aujard_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	/// \brief Binds a result's column to Nation
	void Battle::BindNation(aujard_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	/// \brief Binds a result's column to UserName
	void Battle::BindUserName(aujard_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.UserName);
	}

	/// \brief Returns the binding function associated with the column name
	const BindingsMapType& CurrentUser::GetColumnBindings()
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
	void CurrentUser::BindServerId(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ServerId);
	}

	/// \brief Binds a result's column to ServerIP
	void CurrentUser::BindServerIP(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.ServerIP);
	}

	/// \brief Binds a result's column to AccountId
	void CurrentUser::BindAccountId(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	/// \brief Binds a result's column to CharId
	void CurrentUser::BindCharId(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	/// \brief Binds a result's column to ClientIP
	void CurrentUser::BindClientIP(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.ClientIP);
	}

	/// \brief Returns the binding function associated with the column name
	const BindingsMapType& Item::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"Num", &Item::BindID},
			{"Countable", &Item::BindCountable}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ID
	void Item::BindID(aujard_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Countable
	void Item::BindCountable(aujard_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Countable);
	}

	/// \brief Returns the binding function associated with the column name
	const BindingsMapType& Knights::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"IDNum", &Knights::BindID},
			{"Nation", &Knights::BindNation},
			{"Ranking", &Knights::BindRanking},
			{"IDName", &Knights::BindName},
			{"Members", &Knights::BindMembers},
			{"Points", &Knights::BindPoints}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ID
	void Knights::BindID(aujard_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ID);
	}

	/// \brief Binds a result's column to Nation
	void Knights::BindNation(aujard_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	/// \brief Binds a result's column to Ranking
	void Knights::BindRanking(aujard_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Ranking);
	}

	/// \brief Binds a result's column to Name
	void Knights::BindName(aujard_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	/// \brief Binds a result's column to Members
	void Knights::BindMembers(aujard_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Members);
	}

	/// \brief Binds a result's column to Points
	void Knights::BindPoints(aujard_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Points);
	}

	/// \brief Returns the binding function associated with the column name
	const BindingsMapType& UserData::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strUserId", &UserData::BindUserId},
			{"Exp", &UserData::BindExp},
			{"dwTime", &UserData::BindDwTime}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to UserId
	void UserData::BindUserId(aujard_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.UserId);
	}

	/// \brief Binds a result's column to Exp
	void UserData::BindExp(aujard_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Exp);
	}

	/// \brief Binds a result's column to DwTime
	void UserData::BindDwTime(aujard_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.DwTime);
	}

	/// \brief Returns the binding function associated with the column name
	const BindingsMapType& Warehouse::GetColumnBindings()
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
	void Warehouse::BindAccountId(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	/// \brief Binds a result's column to Money
	void Warehouse::BindMoney(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Money);
	}

	/// \brief Binds a result's column to DwTime
	void Warehouse::BindDwTime(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.DwTime);
	}

	/// \brief Binds a result's column to ItemData
	void Warehouse::BindItemData(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.ItemData);
	}

	/// \brief Binds a result's column to Serial
	void Warehouse::BindSerial(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.Serial);
	}
}