#include "VersionManagerModel.h"

namespace versionmanager_model
{
	/// \brief Returns the table name
	const std::string& Concurrent::TableName()
	{
		static const std::string tableName = "CONCURRENT";
		return tableName;
	}

	/// \brief Returns a set of column names for the table
	const std::unordered_set<std::string>& Concurrent::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"serverid", "zone1_count", "zone2_count", "zone3_count"
		};
		return columnNames;
	}

	/// \brief Returns an ordered vector of column names for the table
	const std::vector<std::string>& Concurrent::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"serverid", "zone1_count", "zone2_count", "zone3_count"
		};
		return orderedColumnNames;
	}

	/// \brief Returns a set of blob column names for the table
	const std::unordered_set<std::string>& Concurrent::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType Concurrent::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Returns the columns associated with the table's Primary Key
	const std::vector<std::string>& Concurrent::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"serverid"
		};
		return primaryKey;
	}

	/// \brief Returns a value for use in map keys based on the table's primary key
	const uint8_t& Concurrent::MapKey() const
	{
		return ServerId;
	}
	/// \brief Returns the table name
	const std::string& CurrentUser::TableName()
	{
		static const std::string tableName = "CURRENTUSER";
		return tableName;
	}

	/// \brief Returns a set of column names for the table
	const std::unordered_set<std::string>& CurrentUser::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"nServerNo", "strServerIP", "strAccountID"
		};
		return columnNames;
	}

	/// \brief Returns an ordered vector of column names for the table
	const std::vector<std::string>& CurrentUser::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"nServerNo", "strServerIP", "strAccountID"
		};
		return orderedColumnNames;
	}

	/// \brief Returns a set of blob column names for the table
	const std::unordered_set<std::string>& CurrentUser::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType CurrentUser::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Returns the columns associated with the table's Primary Key
	const std::vector<std::string>& CurrentUser::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"strAccountID"
		};
		return primaryKey;
	}

	/// \brief Returns a value for use in map keys based on the table's primary key
	const std::string& CurrentUser::MapKey() const
	{
		return AccountId;
	}
	/// \brief Returns the table name
	const std::string& TbUser::TableName()
	{
		static const std::string tableName = "TB_USER";
		return tableName;
	}

	/// \brief Returns a set of column names for the table
	const std::unordered_set<std::string>& TbUser::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"strAccountID", "strPasswd", "strAuthority"
		};
		return columnNames;
	}

	/// \brief Returns an ordered vector of column names for the table
	const std::vector<std::string>& TbUser::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"strAccountID", "strPasswd", "strAuthority"
		};
		return orderedColumnNames;
	}

	/// \brief Returns a set of blob column names for the table
	const std::unordered_set<std::string>& TbUser::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType TbUser::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Returns the columns associated with the table's Primary Key
	const std::vector<std::string>& TbUser::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"strAccountID"
		};
		return primaryKey;
	}

	/// \brief Returns a value for use in map keys based on the table's primary key
	const std::string& TbUser::MapKey() const
	{
		return AccountId;
	}
	/// \brief Returns the table name
	const std::string& Version::TableName()
	{
		static const std::string tableName = "VERSION";
		return tableName;
	}

	/// \brief Returns a set of column names for the table
	const std::unordered_set<std::string>& Version::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"sVersion", "strFileName", "strCompressName", "sHistoryVersion"
		};
		return columnNames;
	}

	/// \brief Returns an ordered vector of column names for the table
	const std::vector<std::string>& Version::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sVersion", "strFileName", "strCompressName", "sHistoryVersion"
		};
		return orderedColumnNames;
	}

	/// \brief Returns a set of blob column names for the table
	const std::unordered_set<std::string>& Version::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType Version::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Returns the columns associated with the table's Primary Key
	const std::vector<std::string>& Version::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"sVersion"
		};
		return primaryKey;
	}

	/// \brief Returns a value for use in map keys based on the table's primary key
	const int16_t& Version::MapKey() const
	{
		return Number;
	}
}