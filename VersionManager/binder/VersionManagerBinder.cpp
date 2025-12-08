#include "VersionManagerBinder.h"
#include <nanodbc/nanodbc.h>

namespace versionmanager_binder
{
	/// \brief Returns the binding function associated with the column name
	const BindingsMapType& Concurrent::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"serverid", &Concurrent::BindServerId},
			{"zone1_count", &Concurrent::BindZone1Count},
			{"zone2_count", &Concurrent::BindZone2Count},
			{"zone3_count", &Concurrent::BindZone3Count}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ServerId
	void Concurrent::BindServerId(versionmanager_model::Concurrent& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ServerId);
	}

	/// \brief Binds a result's column to Zone1Count
	void Concurrent::BindZone1Count(versionmanager_model::Concurrent& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Zone1Count);
	}

	/// \brief Binds a result's column to Zone2Count
	void Concurrent::BindZone2Count(versionmanager_model::Concurrent& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Zone2Count);
	}

	/// \brief Binds a result's column to Zone3Count
	void Concurrent::BindZone3Count(versionmanager_model::Concurrent& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Zone3Count);
	}

	/// \brief Returns the binding function associated with the column name
	const BindingsMapType& CurrentUser::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nServerNo", &CurrentUser::BindServerId},
			{"strServerIP", &CurrentUser::BindServerIP},
			{"strAccountID", &CurrentUser::BindAccountId}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to ServerId
	void CurrentUser::BindServerId(versionmanager_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ServerId);
	}

	/// \brief Binds a result's column to ServerIP
	void CurrentUser::BindServerIP(versionmanager_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.ServerIP);
	}

	/// \brief Binds a result's column to AccountId
	void CurrentUser::BindAccountId(versionmanager_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	/// \brief Returns the binding function associated with the column name
	const BindingsMapType& TbUser::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strAccountID", &TbUser::BindAccountId},
			{"strPasswd", &TbUser::BindPassword},
			{"strAuthority", &TbUser::BindAuthority}
		};
		return bindingsMap;
	}

	/// \brief Binds a result's column to AccountId
	void TbUser::BindAccountId(versionmanager_model::TbUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	/// \brief Binds a result's column to Password
	void TbUser::BindPassword(versionmanager_model::TbUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Password);
	}

	/// \brief Binds a result's column to Authority
	void TbUser::BindAuthority(versionmanager_model::TbUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Authority);
	}

	/// \brief Returns the binding function associated with the column name
	const BindingsMapType& Version::GetColumnBindings()
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
	void Version::BindNumber(versionmanager_model::Version& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Number);
	}

	/// \brief Binds a result's column to FileName
	void Version::BindFileName(versionmanager_model::Version& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.FileName);
	}

	/// \brief Binds a result's column to CompressName
	void Version::BindCompressName(versionmanager_model::Version& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CompressName);
	}

	/// \brief Binds a result's column to HistoryVersion
	void Version::BindHistoryVersion(versionmanager_model::Version& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HistoryVersion);
	}
}