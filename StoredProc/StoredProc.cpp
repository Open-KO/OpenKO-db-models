#include "StoredProc.h"

namespace storedProc
{

	AccountLogin::AccountLogin()
		: StoredProcedure()
	{
	}

	AccountLogin::AccountLogin(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& AccountLogin::Query()
	{
		static const std::string query = "{CALL ACCOUNT_LOGIN(?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType AccountLogin::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> AccountLogin::execute(
			const char* accountID, const char* password, int16_t* nRet) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, accountID);
		_stmt.bind(1, password);
		_stmt.bind(2, nRet, nanodbc::statement::PARAM_OUT);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	AccountLogin::~AccountLogin()
	{
		flush_on_destruct();
	}

	AccountLogout::AccountLogout()
		: StoredProcedure()
	{
	}

	AccountLogout::AccountLogout(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& AccountLogout::Query()
	{
		static const std::string query = "{CALL ACCOUNT_LOGOUT(?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType AccountLogout::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> AccountLogout::execute(
			const char* accountID, const int32_t logoutCode, int16_t* nRet, 
			int16_t* nRet2) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, accountID);
		_stmt.bind(1, &logoutCode);
		_stmt.bind(2, nRet, nanodbc::statement::PARAM_OUT);
		_stmt.bind(3, nRet2, nanodbc::statement::PARAM_OUT);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	AccountLogout::~AccountLogout()
	{
		flush_on_destruct();
	}

	ChangeCastleCommerce::ChangeCastleCommerce()
		: StoredProcedure()
	{
	}

	ChangeCastleCommerce::ChangeCastleCommerce(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& ChangeCastleCommerce::Query()
	{
		static const std::string query = "{CALL CHANGE_CASTLE_COMMERCE(?,?,?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType ChangeCastleCommerce::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> ChangeCastleCommerce::execute(
			const int16_t sCastleIndex, const uint8_t byType, const int32_t nMoradonTariff, 
			const int32_t nDelosTariff, const int32_t nMoney, const char* accountId, 
			const char* charId) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, &sCastleIndex);
		_stmt.bind(1, &byType);
		_stmt.bind(2, &nMoradonTariff);
		_stmt.bind(3, &nDelosTariff);
		_stmt.bind(4, &nMoney);
		_stmt.bind(5, accountId);
		_stmt.bind(6, charId);
	
		return StoredProcedure::execute();
	}

	ChangeCopySerialItem::ChangeCopySerialItem()
		: StoredProcedure()
	{
	}

	ChangeCopySerialItem::ChangeCopySerialItem(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& ChangeCopySerialItem::Query()
	{
		static const std::string query = "{CALL CHANGE_COPY_SERIAL_ITEM()}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType ChangeCopySerialItem::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> ChangeCopySerialItem::execute() noexcept(false)
	{
		prepare(Query());
		return StoredProcedure::execute();
	}

	ChangeCopySerialItemTable::ChangeCopySerialItemTable()
		: StoredProcedure()
	{
	}

	ChangeCopySerialItemTable::ChangeCopySerialItemTable(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& ChangeCopySerialItemTable::Query()
	{
		static const std::string query = "{CALL CHANGE_COPY_SERIAL_ITEM_TABLE()}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType ChangeCopySerialItemTable::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> ChangeCopySerialItemTable::execute() noexcept(false)
	{
		prepare(Query());
		return StoredProcedure::execute();
	}

	ChangeKnightsCape::ChangeKnightsCape()
		: StoredProcedure()
	{
	}

	ChangeKnightsCape::ChangeKnightsCape(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& ChangeKnightsCape::Query()
	{
		static const std::string query = "{CALL CHANGE_KNIGHTS_CAPE(?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType ChangeKnightsCape::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> ChangeKnightsCape::execute(
			const int16_t KnightsIndex, const int16_t CapeIndex) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, &KnightsIndex);
		_stmt.bind(1, &CapeIndex);
	
		return StoredProcedure::execute();
	}

	CheckKnights::CheckKnights()
		: StoredProcedure()
	{
	}

	CheckKnights::CheckKnights(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& CheckKnights::Query()
	{
		static const std::string query = "{CALL CHECK_KNIGHTS()}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType CheckKnights::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> CheckKnights::execute() noexcept(false)
	{
		prepare(Query());
		return StoredProcedure::execute();
	}

	ClearRemainUsers::ClearRemainUsers()
		: StoredProcedure()
	{
	}

	ClearRemainUsers::ClearRemainUsers(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& ClearRemainUsers::Query()
	{
		static const std::string query = "{CALL CLEAR_REMAIN_USERS(?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType ClearRemainUsers::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> ClearRemainUsers::execute(
			const char* strServerIP) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, strServerIP);
	
		return StoredProcedure::execute();
	}

	CreateKnights::CreateKnights()
		: StoredProcedure()
	{
	}

	CreateKnights::CreateKnights(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& CreateKnights::Query()
	{
		static const std::string query = "{CALL CREATE_KNIGHTS(?,?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType CreateKnights::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> CreateKnights::execute(
			int16_t* nRet, const int16_t index, const uint8_t nation, 
			const uint8_t community, const char* strName, const char* strChief) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, nRet, nanodbc::statement::PARAM_OUT);
		_stmt.bind(1, &index);
		_stmt.bind(2, &nation);
		_stmt.bind(3, &community);
		_stmt.bind(4, strName);
		_stmt.bind(5, strChief);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	CreateKnights::~CreateKnights()
	{
		flush_on_destruct();
	}

	CreateKnights2::CreateKnights2()
		: StoredProcedure()
	{
	}

	CreateKnights2::CreateKnights2(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& CreateKnights2::Query()
	{
		static const std::string query = "{CALL CREATE_KNIGHTS2(?,?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType CreateKnights2::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> CreateKnights2::execute(
			int16_t* nRet, int16_t* index, const uint8_t nation, 
			const uint8_t community, const char* strName, const char* strChief) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, nRet, nanodbc::statement::PARAM_OUT);
		_stmt.bind(1, index, nanodbc::statement::PARAM_OUT);
		_stmt.bind(2, &nation);
		_stmt.bind(3, &community);
		_stmt.bind(4, strName);
		_stmt.bind(5, strChief);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	CreateKnights2::~CreateKnights2()
	{
		flush_on_destruct();
	}

	CreateNewChar::CreateNewChar()
		: StoredProcedure()
	{
	}

	CreateNewChar::CreateNewChar(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& CreateNewChar::Query()
	{
		static const std::string query = "{CALL CREATE_NEW_CHAR(?,?,?,?,?,?,?,?,?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType CreateNewChar::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> CreateNewChar::execute(
			int16_t* nRet, const char* AccountID, const uint8_t index, 
			const char* CharID, const uint8_t Race, const int16_t Class, 
			const uint8_t Hair, const uint8_t Face, const uint8_t Str, 
			const uint8_t Sta, const uint8_t Dex, const uint8_t Intel, 
			const uint8_t Cha) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, nRet, nanodbc::statement::PARAM_OUT);
		_stmt.bind(1, AccountID);
		_stmt.bind(2, &index);
		_stmt.bind(3, CharID);
		_stmt.bind(4, &Race);
		_stmt.bind(5, &Class);
		_stmt.bind(6, &Hair);
		_stmt.bind(7, &Face);
		_stmt.bind(8, &Str);
		_stmt.bind(9, &Sta);
		_stmt.bind(10, &Dex);
		_stmt.bind(11, &Intel);
		_stmt.bind(12, &Cha);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	CreateNewChar::~CreateNewChar()
	{
		flush_on_destruct();
	}

	DeleteFriendList::DeleteFriendList()
		: StoredProcedure()
	{
	}

	DeleteFriendList::DeleteFriendList(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& DeleteFriendList::Query()
	{
		static const std::string query = "{CALL DELETE_FRIEND_LIST(?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType DeleteFriendList::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> DeleteFriendList::execute(
			const char* strUserID, const char* strFriend, int16_t* nRet) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, strUserID);
		_stmt.bind(1, strFriend);
		_stmt.bind(2, nRet, nanodbc::statement::PARAM_OUT);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	DeleteFriendList::~DeleteFriendList()
	{
		flush_on_destruct();
	}

	DeleteKnights::DeleteKnights()
		: StoredProcedure()
	{
	}

	DeleteKnights::DeleteKnights(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& DeleteKnights::Query()
	{
		static const std::string query = "{CALL DELETE_KNIGHTS(?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType DeleteKnights::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> DeleteKnights::execute(
			int16_t* nRet, const int16_t knightsindex) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, nRet, nanodbc::statement::PARAM_OUT);
		_stmt.bind(1, &knightsindex);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	DeleteKnights::~DeleteKnights()
	{
		flush_on_destruct();
	}

	EditerKnights::EditerKnights()
		: StoredProcedure()
	{
	}

	EditerKnights::EditerKnights(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& EditerKnights::Query()
	{
		static const std::string query = "{CALL EDITER_KNIGHTS()}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType EditerKnights::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> EditerKnights::execute() noexcept(false)
	{
		prepare(Query());
		return StoredProcedure::execute();
	}

	ExecKnightsUser::ExecKnightsUser()
		: StoredProcedure()
	{
	}

	ExecKnightsUser::ExecKnightsUser(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& ExecKnightsUser::Query()
	{
		static const std::string query = "{CALL EXEC_KNIGHTS_USER()}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType ExecKnightsUser::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> ExecKnightsUser::execute() noexcept(false)
	{
		prepare(Query());
		return StoredProcedure::execute();
	}

	GivePremium::GivePremium()
		: StoredProcedure()
	{
	}

	GivePremium::GivePremium(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& GivePremium::Query()
	{
		static const std::string query = "{CALL GIVE_PREMIUM(?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType GivePremium::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> GivePremium::execute(
			const char* strAccountID, const char* strUserID, const int32_t days) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, strAccountID);
		_stmt.bind(1, strUserID);
		_stmt.bind(2, &days);
	
		return StoredProcedure::execute();
	}

	InsertFriendList::InsertFriendList()
		: StoredProcedure()
	{
	}

	InsertFriendList::InsertFriendList(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& InsertFriendList::Query()
	{
		static const std::string query = "{CALL INSERT_FRIEND_LIST(?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType InsertFriendList::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> InsertFriendList::execute(
			const char* strUserID, const char* strFriend, int16_t* nRet) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, strUserID);
		_stmt.bind(1, strFriend);
		_stmt.bind(2, nRet, nanodbc::statement::PARAM_OUT);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	InsertFriendList::~InsertFriendList()
	{
		flush_on_destruct();
	}

	InsertHacktoolUser::InsertHacktoolUser()
		: StoredProcedure()
	{
	}

	InsertHacktoolUser::InsertHacktoolUser(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& InsertHacktoolUser::Query()
	{
		static const std::string query = "{CALL INSERT_HACKTOOL_USER(?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType InsertHacktoolUser::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> InsertHacktoolUser::execute(
			const char* AccountID, const char* CharID, const char* HackToolName) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, AccountID);
		_stmt.bind(1, CharID);
		_stmt.bind(2, HackToolName);
	
		return StoredProcedure::execute();
	}

	InsertProgramCheckUser::InsertProgramCheckUser()
		: StoredProcedure()
	{
	}

	InsertProgramCheckUser::InsertProgramCheckUser(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& InsertProgramCheckUser::Query()
	{
		static const std::string query = "{CALL INSERT_PROGRAM_CHECK_USER(?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType InsertProgramCheckUser::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> InsertProgramCheckUser::execute(
			const char* strAccountID, const char* strCharID, const char* HackToolName) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, strAccountID);
		_stmt.bind(1, strCharID);
		_stmt.bind(2, HackToolName);
	
		return StoredProcedure::execute();
	}

	KingCandidacyNoticeBoardProc::KingCandidacyNoticeBoardProc()
		: StoredProcedure()
	{
	}

	KingCandidacyNoticeBoardProc::KingCandidacyNoticeBoardProc(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& KingCandidacyNoticeBoardProc::Query()
	{
		static const std::string query = "{CALL KING_CANDIDACY_NOTICE_BOARD_PROC(?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType KingCandidacyNoticeBoardProc::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> KingCandidacyNoticeBoardProc::execute(
			const char* strUserID, const int16_t sNoticeLen, const uint8_t byNation, 
			const std::vector<uint8_t>& strNotice) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, strUserID);
		_stmt.bind(1, &sNoticeLen);
		_stmt.bind(2, &byNation);
		_stmt.bind_binary(3, strNotice);
	
		return StoredProcedure::execute();
	}

	KingCandidacyRecommend::KingCandidacyRecommend()
		: StoredProcedure()
	{
	}

	KingCandidacyRecommend::KingCandidacyRecommend(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& KingCandidacyRecommend::Query()
	{
		static const std::string query = "{CALL KING_CANDIDACY_RECOMMEND(?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType KingCandidacyRecommend::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> KingCandidacyRecommend::execute(
			const char* CharID_1, const char* CharID_2, const uint8_t nNation, 
			int16_t* nRet) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, CharID_1);
		_stmt.bind(1, CharID_2);
		_stmt.bind(2, &nNation);
		_stmt.bind(3, nRet, nanodbc::statement::PARAM_OUT);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	KingCandidacyRecommend::~KingCandidacyRecommend()
	{
		flush_on_destruct();
	}

	KingChangeTax::KingChangeTax()
		: StoredProcedure()
	{
	}

	KingChangeTax::KingChangeTax(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& KingChangeTax::Query()
	{
		static const std::string query = "{CALL KING_CHANGE_TAX(?,?,?,?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType KingChangeTax::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> KingChangeTax::execute(
			const uint8_t byType, const uint8_t byNation, const int32_t nKarusTax1, 
			const int32_t nKarusTax2, const int32_t nKarusTax3, const int32_t nElmoTax1, 
			const int32_t nElmoTax2, const int32_t nElmoTax3) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, &byType);
		_stmt.bind(1, &byNation);
		_stmt.bind(2, &nKarusTax1);
		_stmt.bind(3, &nKarusTax2);
		_stmt.bind(4, &nKarusTax3);
		_stmt.bind(5, &nElmoTax1);
		_stmt.bind(6, &nElmoTax2);
		_stmt.bind(7, &nElmoTax3);
	
		return StoredProcedure::execute();
	}

	KingElectionProc::KingElectionProc()
		: StoredProcedure()
	{
	}

	KingElectionProc::KingElectionProc(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& KingElectionProc::Query()
	{
		static const std::string query = "{CALL KING_ELECTION_PROC(?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType KingElectionProc::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> KingElectionProc::execute(
			const char* strAccountID, const char* strCharID, const uint8_t byNation, 
			const char* strCandidacyID, int16_t* nRet) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, strAccountID);
		_stmt.bind(1, strCharID);
		_stmt.bind(2, &byNation);
		_stmt.bind(3, strCandidacyID);
		_stmt.bind(4, nRet, nanodbc::statement::PARAM_OUT);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	KingElectionProc::~KingElectionProc()
	{
		flush_on_destruct();
	}

	KingImpeachmentElection::KingImpeachmentElection()
		: StoredProcedure()
	{
	}

	KingImpeachmentElection::KingImpeachmentElection(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& KingImpeachmentElection::Query()
	{
		static const std::string query = "{CALL KING_IMPEACHMENT_ELECTION(?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType KingImpeachmentElection::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> KingImpeachmentElection::execute(
			const uint8_t byResult, const uint8_t byNation, const char* strAccountID, 
			const char* strCharID, int16_t* nRet) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, &byResult);
		_stmt.bind(1, &byNation);
		_stmt.bind(2, strAccountID);
		_stmt.bind(3, strCharID);
		_stmt.bind(4, nRet, nanodbc::statement::PARAM_OUT);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	KingImpeachmentElection::~KingImpeachmentElection()
	{
		flush_on_destruct();
	}

	KingImpeachmentRequestElection::KingImpeachmentRequestElection()
		: StoredProcedure()
	{
	}

	KingImpeachmentRequestElection::KingImpeachmentRequestElection(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& KingImpeachmentRequestElection::Query()
	{
		static const std::string query = "{CALL KING_IMPEACHMENT_REQUEST_ELECTION(?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType KingImpeachmentRequestElection::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> KingImpeachmentRequestElection::execute(
			const int16_t byType, const uint8_t byNation, const char* strUserID) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, &byType);
		_stmt.bind(1, &byNation);
		_stmt.bind(2, strUserID);
	
		return StoredProcedure::execute();
	}

	KingImpeachmentResult::KingImpeachmentResult()
		: StoredProcedure()
	{
	}

	KingImpeachmentResult::KingImpeachmentResult(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& KingImpeachmentResult::Query()
	{
		static const std::string query = "{CALL KING_IMPEACHMENT_RESULT(?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType KingImpeachmentResult::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> KingImpeachmentResult::execute(
			const uint8_t byNation, int16_t* nTotalMan, int16_t* nAgreeMan) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, &byNation);
		_stmt.bind(1, nTotalMan, nanodbc::statement::PARAM_OUT);
		_stmt.bind(2, nAgreeMan, nanodbc::statement::PARAM_OUT);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	KingImpeachmentResult::~KingImpeachmentResult()
	{
		flush_on_destruct();
	}

	KingInsertPrizeEvent::KingInsertPrizeEvent()
		: StoredProcedure()
	{
	}

	KingInsertPrizeEvent::KingInsertPrizeEvent(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& KingInsertPrizeEvent::Query()
	{
		static const std::string query = "{CALL KING_INSERT_PRIZE_EVENT(?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType KingInsertPrizeEvent::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> KingInsertPrizeEvent::execute(
			const uint8_t byType, const uint8_t byNation, const int32_t nAmount, 
			const char* strUserID) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, &byType);
		_stmt.bind(1, &byNation);
		_stmt.bind(2, &nAmount);
		_stmt.bind(3, strUserID);
	
		return StoredProcedure::execute();
	}

	KingUpdateElectionList::KingUpdateElectionList()
		: StoredProcedure()
	{
	}

	KingUpdateElectionList::KingUpdateElectionList(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& KingUpdateElectionList::Query()
	{
		static const std::string query = "{CALL KING_UPDATE_ELECTION_LIST(?,?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType KingUpdateElectionList::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> KingUpdateElectionList::execute(
			const uint8_t byDBType, const uint8_t byType, const uint8_t byNation, 
			const int16_t nKnights, const int32_t nAmount, const char* strUserID) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, &byDBType);
		_stmt.bind(1, &byType);
		_stmt.bind(2, &byNation);
		_stmt.bind(3, &nKnights);
		_stmt.bind(4, &nAmount);
		_stmt.bind(5, strUserID);
	
		return StoredProcedure::execute();
	}

	KingUpdateElectionSchdule::KingUpdateElectionSchdule()
		: StoredProcedure()
	{
	}

	KingUpdateElectionSchdule::KingUpdateElectionSchdule(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& KingUpdateElectionSchdule::Query()
	{
		static const std::string query = "{CALL KING_UPDATE_ELECTION_SCHDULE(?,?,?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType KingUpdateElectionSchdule::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> KingUpdateElectionSchdule::execute(
			const uint8_t byType, const uint8_t byNation, const int16_t sYear, 
			const uint8_t byMonth, const uint8_t byDay, const uint8_t byHour, 
			const uint8_t byMinute) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, &byType);
		_stmt.bind(1, &byNation);
		_stmt.bind(2, &sYear);
		_stmt.bind(3, &byMonth);
		_stmt.bind(4, &byDay);
		_stmt.bind(5, &byHour);
		_stmt.bind(6, &byMinute);
	
		return StoredProcedure::execute();
	}

	KingUpdateElectionStatus::KingUpdateElectionStatus()
		: StoredProcedure()
	{
	}

	KingUpdateElectionStatus::KingUpdateElectionStatus(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& KingUpdateElectionStatus::Query()
	{
		static const std::string query = "{CALL KING_UPDATE_ELECTION_STATUS(?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType KingUpdateElectionStatus::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> KingUpdateElectionStatus::execute(
			const uint8_t byType, const uint8_t byNation) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, &byType);
		_stmt.bind(1, &byNation);
	
		return StoredProcedure::execute();
	}

	KingUpdateImpeachmentStatus::KingUpdateImpeachmentStatus()
		: StoredProcedure()
	{
	}

	KingUpdateImpeachmentStatus::KingUpdateImpeachmentStatus(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& KingUpdateImpeachmentStatus::Query()
	{
		static const std::string query = "{CALL KING_UPDATE_IMPEACHMENT_STATUS(?,?,?,?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType KingUpdateImpeachmentStatus::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> KingUpdateImpeachmentStatus::execute(
			const uint8_t byType, const uint8_t byNation, const int16_t sYear, 
			const uint8_t byMonth, const uint8_t byDay, const uint8_t byHour, 
			const uint8_t byMinute, const char* strUserID) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, &byType);
		_stmt.bind(1, &byNation);
		_stmt.bind(2, &sYear);
		_stmt.bind(3, &byMonth);
		_stmt.bind(4, &byDay);
		_stmt.bind(5, &byHour);
		_stmt.bind(6, &byMinute);
		_stmt.bind(7, strUserID);
	
		return StoredProcedure::execute();
	}

	KingUpdateNoahOrExpEvent::KingUpdateNoahOrExpEvent()
		: StoredProcedure()
	{
	}

	KingUpdateNoahOrExpEvent::KingUpdateNoahOrExpEvent(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& KingUpdateNoahOrExpEvent::Query()
	{
		static const std::string query = "{CALL KING_UPDATE_NOAH_OR_EXP_EVENT(?,?,?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType KingUpdateNoahOrExpEvent::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> KingUpdateNoahOrExpEvent::execute(
			const uint8_t byType, const uint8_t byNation, const uint8_t byAmount, 
			const uint8_t byDay, const uint8_t byHout, const uint8_t byMinute, 
			const int16_t sDurationTime) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, &byType);
		_stmt.bind(1, &byNation);
		_stmt.bind(2, &byAmount);
		_stmt.bind(3, &byDay);
		_stmt.bind(4, &byHout);
		_stmt.bind(5, &byMinute);
		_stmt.bind(6, &sDurationTime);
	
		return StoredProcedure::execute();
	}

	KnightsRatingUpdate::KnightsRatingUpdate()
		: StoredProcedure()
	{
	}

	KnightsRatingUpdate::KnightsRatingUpdate(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& KnightsRatingUpdate::Query()
	{
		static const std::string query = "{CALL KNIGHTS_RATING_UPDATE()}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType KnightsRatingUpdate::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> KnightsRatingUpdate::execute() noexcept(false)
	{
		prepare(Query());
		return StoredProcedure::execute();
	}

	LoadAccountCharid::LoadAccountCharid()
		: StoredProcedure()
	{
	}

	LoadAccountCharid::LoadAccountCharid(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& LoadAccountCharid::Query()
	{
		static const std::string query = "{? = CALL LOAD_ACCOUNT_CHARID(?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType LoadAccountCharid::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> LoadAccountCharid::execute(int* returnValue, 
			const char* Accountid) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, returnValue, nanodbc::statement::PARAM_RETURN);
		_stmt.bind(1, Accountid);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	LoadAccountCharid::~LoadAccountCharid()
	{
		flush_on_destruct();
	}

	LoadCharInfo::LoadCharInfo()
		: StoredProcedure()
	{
	}

	LoadCharInfo::LoadCharInfo(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& LoadCharInfo::Query()
	{
		static const std::string query = "{CALL LOAD_CHAR_INFO(?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType LoadCharInfo::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> LoadCharInfo::execute(
			const char* CharId, int16_t* nRet) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, CharId);
		_stmt.bind(1, nRet, nanodbc::statement::PARAM_OUT);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	LoadCharInfo::~LoadCharInfo()
	{
		flush_on_destruct();
	}

	LoadKnightsMembers::LoadKnightsMembers()
		: StoredProcedure()
	{
	}

	LoadKnightsMembers::LoadKnightsMembers(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& LoadKnightsMembers::Query()
	{
		static const std::string query = "{CALL LOAD_KNIGHTS_MEMBERS(?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType LoadKnightsMembers::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> LoadKnightsMembers::execute(
			const int16_t knightsindex) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, &knightsindex);
	
		return StoredProcedure::execute();
	}

	LoadPremiumServiceUser::LoadPremiumServiceUser()
		: StoredProcedure()
	{
	}

	LoadPremiumServiceUser::LoadPremiumServiceUser(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& LoadPremiumServiceUser::Query()
	{
		static const std::string query = "{CALL LOAD_PREMIUM_SERVICE_USER(?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType LoadPremiumServiceUser::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> LoadPremiumServiceUser::execute(
			const char* AccountID, int32_t* type, int32_t* days) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, AccountID);
		_stmt.bind(1, type, nanodbc::statement::PARAM_OUT);
		_stmt.bind(2, days, nanodbc::statement::PARAM_OUT);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	LoadPremiumServiceUser::~LoadPremiumServiceUser()
	{
		flush_on_destruct();
	}

	LoadRentalData::LoadRentalData()
		: StoredProcedure()
	{
	}

	LoadRentalData::LoadRentalData(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& LoadRentalData::Query()
	{
		static const std::string query = "{CALL LOAD_RENTAL_DATA(?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType LoadRentalData::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> LoadRentalData::execute(
			const char* strAccountID) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, strAccountID);
	
		return StoredProcedure::execute();
	}

	LoadSavedMagic::LoadSavedMagic()
		: StoredProcedure()
	{
	}

	LoadSavedMagic::LoadSavedMagic(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& LoadSavedMagic::Query()
	{
		static const std::string query = "{CALL LOAD_SAVED_MAGIC(?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType LoadSavedMagic::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> LoadSavedMagic::execute(
			const char* CharId, int16_t* nRet) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, CharId);
		_stmt.bind(1, nRet, nanodbc::statement::PARAM_OUT);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	LoadSavedMagic::~LoadSavedMagic()
	{
		flush_on_destruct();
	}

	LoadUserData::LoadUserData()
		: StoredProcedure()
	{
	}

	LoadUserData::LoadUserData(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& LoadUserData::Query()
	{
		static const std::string query = "{CALL LOAD_USER_DATA(?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType LoadUserData::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> LoadUserData::execute(
			const char* AccountID, const char* id, int16_t* nRet) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, AccountID);
		_stmt.bind(1, id);
		_stmt.bind(2, nRet, nanodbc::statement::PARAM_OUT);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	LoadUserData::~LoadUserData()
	{
		flush_on_destruct();
	}

	LoadWebItemmall::LoadWebItemmall()
		: StoredProcedure()
	{
	}

	LoadWebItemmall::LoadWebItemmall(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& LoadWebItemmall::Query()
	{
		static const std::string query = "{CALL LOAD_WEB_ITEMMALL(?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType LoadWebItemmall::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> LoadWebItemmall::execute(
			const char* strCharID) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, strCharID);
	
		return StoredProcedure::execute();
	}

	NationSelect::NationSelect()
		: StoredProcedure()
	{
	}

	NationSelect::NationSelect(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& NationSelect::Query()
	{
		static const std::string query = "{CALL NATION_SELECT(?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType NationSelect::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> NationSelect::execute(
			int16_t* nRet, const char* AccountID, const uint8_t Nation) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, nRet, nanodbc::statement::PARAM_OUT);
		_stmt.bind(1, AccountID);
		_stmt.bind(2, &Nation);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	NationSelect::~NationSelect()
	{
		flush_on_destruct();
	}

	ProcInsertCurrentuser::ProcInsertCurrentuser()
		: StoredProcedure()
	{
	}

	ProcInsertCurrentuser::ProcInsertCurrentuser(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& ProcInsertCurrentuser::Query()
	{
		static const std::string query = "{CALL PROC_INSERT_CURRENTUSER(?,?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType ProcInsertCurrentuser::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> ProcInsertCurrentuser::execute(
			const char* AccountID, const char* CharID, const int16_t nServerNo, 
			const char* strServerIP, const char* ClientIP, int16_t* nRet) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, AccountID);
		_stmt.bind(1, CharID);
		_stmt.bind(2, &nServerNo);
		_stmt.bind(3, strServerIP);
		_stmt.bind(4, ClientIP);
		_stmt.bind(5, nRet, nanodbc::statement::PARAM_OUT);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	ProcInsertCurrentuser::~ProcInsertCurrentuser()
	{
		flush_on_destruct();
	}

	RankKnights::RankKnights()
		: StoredProcedure()
	{
	}

	RankKnights::RankKnights(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& RankKnights::Query()
	{
		static const std::string query = "{CALL RANK_KNIGHTS()}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType RankKnights::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> RankKnights::execute() noexcept(false)
	{
		prepare(Query());
		return StoredProcedure::execute();
	}

	RentalItemCancel::RentalItemCancel()
		: StoredProcedure()
	{
	}

	RentalItemCancel::RentalItemCancel(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& RentalItemCancel::Query()
	{
		static const std::string query = "{CALL RENTAL_ITEM_CANCEL(?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType RentalItemCancel::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> RentalItemCancel::execute(
			const char* AccountID, const char* CharID, const int32_t nRentalIndex, 
			const int32_t nItemNumber, int16_t* nRet) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, AccountID);
		_stmt.bind(1, CharID);
		_stmt.bind(2, &nRentalIndex);
		_stmt.bind(3, &nItemNumber);
		_stmt.bind(4, nRet, nanodbc::statement::PARAM_OUT);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	RentalItemCancel::~RentalItemCancel()
	{
		flush_on_destruct();
	}

	RentalItemDestory::RentalItemDestory()
		: StoredProcedure()
	{
	}

	RentalItemDestory::RentalItemDestory(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& RentalItemDestory::Query()
	{
		static const std::string query = "{CALL RENTAL_ITEM_DESTORY(?,?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType RentalItemDestory::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> RentalItemDestory::execute(
			const char* AccountID, const char* CharID, const int32_t nItemNumber, 
			const int32_t nRentalIndex, const int16_t nDurability, int16_t* nRet) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, AccountID);
		_stmt.bind(1, CharID);
		_stmt.bind(2, &nItemNumber);
		_stmt.bind(3, &nRentalIndex);
		_stmt.bind(4, &nDurability);
		_stmt.bind(5, nRet, nanodbc::statement::PARAM_OUT);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	RentalItemDestory::~RentalItemDestory()
	{
		flush_on_destruct();
	}

	RentalItemDurabilityUpdate::RentalItemDurabilityUpdate()
		: StoredProcedure()
	{
	}

	RentalItemDurabilityUpdate::RentalItemDurabilityUpdate(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& RentalItemDurabilityUpdate::Query()
	{
		static const std::string query = "{CALL RENTAL_ITEM_DURABILITY_UPDATE(?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType RentalItemDurabilityUpdate::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> RentalItemDurabilityUpdate::execute(
			const int32_t nRentalIndex, const int32_t nDurability) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, &nRentalIndex);
		_stmt.bind(1, &nDurability);
	
		return StoredProcedure::execute();
	}

	RentalItemLend::RentalItemLend()
		: StoredProcedure()
	{
	}

	RentalItemLend::RentalItemLend(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& RentalItemLend::Query()
	{
		static const std::string query = "{CALL RENTAL_ITEM_LEND(?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType RentalItemLend::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> RentalItemLend::execute(
			const char* AccountID, const char* CharID, const int32_t nRentalIndex, 
			const int32_t nItemNumber, int16_t* nRet) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, AccountID);
		_stmt.bind(1, CharID);
		_stmt.bind(2, &nRentalIndex);
		_stmt.bind(3, &nItemNumber);
		_stmt.bind(4, nRet, nanodbc::statement::PARAM_OUT);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	RentalItemLend::~RentalItemLend()
	{
		flush_on_destruct();
	}

	RentalItemRegister::RentalItemRegister()
		: StoredProcedure()
	{
	}

	RentalItemRegister::RentalItemRegister(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& RentalItemRegister::Query()
	{
		static const std::string query = "{CALL RENTAL_ITEM_REGISTER(?,?,?,?,?,?,?,?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType RentalItemRegister::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> RentalItemRegister::execute(
			const char* charID, const char* AccountID, const int16_t sRentalTime, 
			const int32_t nItemID, const int16_t sDurability, const int32_t nMoney, 
			const uint8_t bGameBangType, const uint8_t bItemType, const uint8_t bItemClass, 
			const int64_t nSerialNumber, int32_t* nRet_Index, int16_t* nRet) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, charID);
		_stmt.bind(1, AccountID);
		_stmt.bind(2, &sRentalTime);
		_stmt.bind(3, &nItemID);
		_stmt.bind(4, &sDurability);
		_stmt.bind(5, &nMoney);
		_stmt.bind(6, &bGameBangType);
		_stmt.bind(7, &bItemType);
		_stmt.bind(8, &bItemClass);
		_stmt.bind(9, &nSerialNumber);
		_stmt.bind(10, nRet_Index, nanodbc::statement::PARAM_OUT);
		_stmt.bind(11, nRet, nanodbc::statement::PARAM_OUT);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	RentalItemRegister::~RentalItemRegister()
	{
		flush_on_destruct();
	}

	ResetLoyaltyMonthly::ResetLoyaltyMonthly()
		: StoredProcedure()
	{
	}

	ResetLoyaltyMonthly::ResetLoyaltyMonthly(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& ResetLoyaltyMonthly::Query()
	{
		static const std::string query = "{CALL RESET_LOYALTY_MONTHLY()}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType ResetLoyaltyMonthly::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> ResetLoyaltyMonthly::execute() noexcept(false)
	{
		prepare(Query());
		return StoredProcedure::execute();
	}

	SkillshortcutLoad::SkillshortcutLoad()
		: StoredProcedure()
	{
	}

	SkillshortcutLoad::SkillshortcutLoad(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& SkillshortcutLoad::Query()
	{
		static const std::string query = "{CALL SKILLSHORTCUT_LOAD(?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType SkillshortcutLoad::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> SkillshortcutLoad::execute(
			const char* strCharID) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, strCharID);
	
		return StoredProcedure::execute();
	}

	SkillshortcutSave::SkillshortcutSave()
		: StoredProcedure()
	{
	}

	SkillshortcutSave::SkillshortcutSave(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& SkillshortcutSave::Query()
	{
		static const std::string query = "{CALL SKILLSHORTCUT_SAVE(?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType SkillshortcutSave::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> SkillshortcutSave::execute(
			const char* strCharID, const int16_t nCount, const char* strSkillData) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, strCharID);
		_stmt.bind(1, &nCount);
		_stmt.bind(2, strSkillData);
	
		return StoredProcedure::execute();
	}

	UpdateBattleHero::UpdateBattleHero()
		: StoredProcedure()
	{
	}

	UpdateBattleHero::UpdateBattleHero(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& UpdateBattleHero::Query()
	{
		static const std::string query = "{CALL UPDATE_BATTLE_HERO(?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType UpdateBattleHero::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> UpdateBattleHero::execute(
			const char* strCharID, const char* strNation, const char* strClass, 
			const char* strAchievement, const int16_t nIndex) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, strCharID);
		_stmt.bind(1, strNation);
		_stmt.bind(2, strClass);
		_stmt.bind(3, strAchievement);
		_stmt.bind(4, &nIndex);
	
		return StoredProcedure::execute();
	}

	UpdateBattleResult::UpdateBattleResult()
		: StoredProcedure()
	{
	}

	UpdateBattleResult::UpdateBattleResult(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& UpdateBattleResult::Query()
	{
		static const std::string query = "{CALL UPDATE_BATTLE_RESULT(?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType UpdateBattleResult::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> UpdateBattleResult::execute(
			const char* UserId, const uint8_t byNation, const int16_t index) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, UserId);
		_stmt.bind(1, &byNation);
		_stmt.bind(2, &index);
	
		return StoredProcedure::execute();
	}

	UpdateEditorItemData::UpdateEditorItemData()
		: StoredProcedure()
	{
	}

	UpdateEditorItemData::UpdateEditorItemData(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& UpdateEditorItemData::Query()
	{
		static const std::string query = "{CALL UPDATE_EDITOR_ITEM_DATA(?,?,?,?,?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType UpdateEditorItemData::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> UpdateEditorItemData::execute(
			const char* charid, const char* accountid, const char* opid, 
			const char* opip, const int16_t sPos, const int32_t nItemID1, 
			const int32_t nItemID2, const uint8_t byType, const int16_t sDBIndex) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, charid);
		_stmt.bind(1, accountid);
		_stmt.bind(2, opid);
		_stmt.bind(3, opip);
		_stmt.bind(4, &sPos);
		_stmt.bind(5, &nItemID1);
		_stmt.bind(6, &nItemID2);
		_stmt.bind(7, &byType);
		_stmt.bind(8, &sDBIndex);
	
		return StoredProcedure::execute();
	}

	UpdateKnights::UpdateKnights()
		: StoredProcedure()
	{
	}

	UpdateKnights::UpdateKnights(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& UpdateKnights::Query()
	{
		static const std::string query = "{CALL UPDATE_KNIGHTS(?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType UpdateKnights::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> UpdateKnights::execute(
			int16_t* nRet, const uint8_t Type, const char* UserId, 
			const int16_t KnightsIndex, const uint8_t Domination) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, nRet, nanodbc::statement::PARAM_OUT);
		_stmt.bind(1, &Type);
		_stmt.bind(2, UserId);
		_stmt.bind(3, &KnightsIndex);
		_stmt.bind(4, &Domination);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	UpdateKnights::~UpdateKnights()
	{
		flush_on_destruct();
	}

	UpdateKnightsAlliance::UpdateKnightsAlliance()
		: StoredProcedure()
	{
	}

	UpdateKnightsAlliance::UpdateKnightsAlliance(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& UpdateKnightsAlliance::Query()
	{
		static const std::string query = "{CALL UPDATE_KNIGHTS_ALLIANCE(?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType UpdateKnightsAlliance::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> UpdateKnightsAlliance::execute(
			const uint8_t byType, const int16_t shAlliancIndex, const int16_t shKnightsIndex, 
			const uint8_t byEmptyIndex, const uint8_t bySiegeFlag) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, &byType);
		_stmt.bind(1, &shAlliancIndex);
		_stmt.bind(2, &shKnightsIndex);
		_stmt.bind(3, &byEmptyIndex);
		_stmt.bind(4, &bySiegeFlag);
	
		return StoredProcedure::execute();
	}

	UpdateKnightsMark::UpdateKnightsMark()
		: StoredProcedure()
	{
	}

	UpdateKnightsMark::UpdateKnightsMark(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& UpdateKnightsMark::Query()
	{
		static const std::string query = "{CALL UPDATE_KNIGHTS_MARK(?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType UpdateKnightsMark::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> UpdateKnightsMark::execute(
			int16_t* nRet, const int16_t IDNum, const int16_t MarkLen, 
			const std::vector<uint8_t>& KnightMark) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, nRet, nanodbc::statement::PARAM_OUT);
		_stmt.bind(1, &IDNum);
		_stmt.bind(2, &MarkLen);
		_stmt.bind_binary(3, KnightMark);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	UpdateKnightsMark::~UpdateKnightsMark()
	{
		flush_on_destruct();
	}

	UpdateKnightsWar::UpdateKnightsWar()
		: StoredProcedure()
	{
	}

	UpdateKnightsWar::UpdateKnightsWar(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& UpdateKnightsWar::Query()
	{
		static const std::string query = "{CALL UPDATE_KNIGHTS_WAR(?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType UpdateKnightsWar::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> UpdateKnightsWar::execute(
			const uint8_t byType, const int16_t shWhite, const int16_t shBlue) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, &byType);
		_stmt.bind(1, &shWhite);
		_stmt.bind(2, &shBlue);
	
		return StoredProcedure::execute();
	}

	UpdatePersonalRank::UpdatePersonalRank()
		: StoredProcedure()
	{
	}

	UpdatePersonalRank::UpdatePersonalRank(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& UpdatePersonalRank::Query()
	{
		static const std::string query = "{CALL UPDATE_PERSONAL_RANK()}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType UpdatePersonalRank::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> UpdatePersonalRank::execute() noexcept(false)
	{
		prepare(Query());
		return StoredProcedure::execute();
	}

	UpdatePremiumServiceUser::UpdatePremiumServiceUser()
		: StoredProcedure()
	{
	}

	UpdatePremiumServiceUser::UpdatePremiumServiceUser(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& UpdatePremiumServiceUser::Query()
	{
		static const std::string query = "{? = CALL UPDATE_PREMIUM_SERVICE_USER(?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType UpdatePremiumServiceUser::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> UpdatePremiumServiceUser::execute(int* returnValue, 
			const char* AccountID, const int16_t Days) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, returnValue, nanodbc::statement::PARAM_RETURN);
		_stmt.bind(1, AccountID);
		_stmt.bind(2, &Days);
	
		return StoredProcedure::execute();
	}

	/// \brief Flushes any output variables or return values on destruction
	UpdatePremiumServiceUser::~UpdatePremiumServiceUser()
	{
		flush_on_destruct();
	}

	UpdateSavedMagic::UpdateSavedMagic()
		: StoredProcedure()
	{
	}

	UpdateSavedMagic::UpdateSavedMagic(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& UpdateSavedMagic::Query()
	{
		static const std::string query = "{CALL UPDATE_SAVED_MAGIC(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType UpdateSavedMagic::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> UpdateSavedMagic::execute(
			const char* strCharID, const int32_t Skill1, const int16_t During1, 
			const int32_t Skill2, const int16_t During2, const int32_t Skill3, 
			const int16_t During3, const int32_t Skill4, const int16_t During4, 
			const int32_t Skill5, const int16_t During5, const int32_t Skill6, 
			const int16_t During6, const int32_t Skill7, const int16_t During7, 
			const int32_t Skill8, const int16_t During8, const int32_t Skill9, 
			const int16_t During9, const int32_t Skill10, const int16_t During10) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, strCharID);
		_stmt.bind(1, &Skill1);
		_stmt.bind(2, &During1);
		_stmt.bind(3, &Skill2);
		_stmt.bind(4, &During2);
		_stmt.bind(5, &Skill3);
		_stmt.bind(6, &During3);
		_stmt.bind(7, &Skill4);
		_stmt.bind(8, &During4);
		_stmt.bind(9, &Skill5);
		_stmt.bind(10, &During5);
		_stmt.bind(11, &Skill6);
		_stmt.bind(12, &During6);
		_stmt.bind(13, &Skill7);
		_stmt.bind(14, &During7);
		_stmt.bind(15, &Skill8);
		_stmt.bind(16, &During8);
		_stmt.bind(17, &Skill9);
		_stmt.bind(18, &During9);
		_stmt.bind(19, &Skill10);
		_stmt.bind(20, &During10);
	
		return StoredProcedure::execute();
	}

	UpdateSiege::UpdateSiege()
		: StoredProcedure()
	{
	}

	UpdateSiege::UpdateSiege(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& UpdateSiege::Query()
	{
		static const std::string query = "{CALL UPDATE_SIEGE(?,?,?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType UpdateSiege::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> UpdateSiege::execute(
			const int16_t sCastleIndex, const int16_t sKnightsIndex, const uint8_t byWarType, 
			const uint8_t byUpdateType, const uint8_t byWarDay, const uint8_t byWarTime, 
			const uint8_t byWarMinute) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, &sCastleIndex);
		_stmt.bind(1, &sKnightsIndex);
		_stmt.bind(2, &byWarType);
		_stmt.bind(3, &byUpdateType);
		_stmt.bind(4, &byWarDay);
		_stmt.bind(5, &byWarTime);
		_stmt.bind(6, &byWarMinute);
	
		return StoredProcedure::execute();
	}

	UpdateSiegeChallenger::UpdateSiegeChallenger()
		: StoredProcedure()
	{
	}

	UpdateSiegeChallenger::UpdateSiegeChallenger(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& UpdateSiegeChallenger::Query()
	{
		static const std::string query = "{CALL UPDATE_SIEGE_CHALLENGER(?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType UpdateSiegeChallenger::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> UpdateSiegeChallenger::execute(
			const int16_t sCastleIndex, const char* strChallengerList) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, &sCastleIndex);
		_stmt.bind(1, strChallengerList);
	
		return StoredProcedure::execute();
	}

	UpdateSiegeChallenger2::UpdateSiegeChallenger2()
		: StoredProcedure()
	{
	}

	UpdateSiegeChallenger2::UpdateSiegeChallenger2(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& UpdateSiegeChallenger2::Query()
	{
		static const std::string query = "{CALL UPDATE_SIEGE_CHALLENGER2(?,?,?,?,?,?,?,?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType UpdateSiegeChallenger2::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> UpdateSiegeChallenger2::execute(
			const int16_t sCastleIndex, const int16_t sKnights_1, const int16_t sKnights_2, 
			const int16_t sKnights_3, const int16_t sKnights_4, const int16_t sKnights_5, 
			const int16_t sKnights_6, const int16_t sKnights_7, const int16_t sKnights_8, 
			const int16_t sKnights_9, const int16_t sKnights_10, const char* strChallengerList) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, &sCastleIndex);
		_stmt.bind(1, &sKnights_1);
		_stmt.bind(2, &sKnights_2);
		_stmt.bind(3, &sKnights_3);
		_stmt.bind(4, &sKnights_4);
		_stmt.bind(5, &sKnights_5);
		_stmt.bind(6, &sKnights_6);
		_stmt.bind(7, &sKnights_7);
		_stmt.bind(8, &sKnights_8);
		_stmt.bind(9, &sKnights_9);
		_stmt.bind(10, &sKnights_10);
		_stmt.bind(11, strChallengerList);
	
		return StoredProcedure::execute();
	}

	UpdateSiegeDecideChallenger::UpdateSiegeDecideChallenger()
		: StoredProcedure()
	{
	}

	UpdateSiegeDecideChallenger::UpdateSiegeDecideChallenger(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& UpdateSiegeDecideChallenger::Query()
	{
		static const std::string query = "{CALL UPDATE_SIEGE_DECIDE_CHALLENGER(?,?,?,?,?,?,?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType UpdateSiegeDecideChallenger::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> UpdateSiegeDecideChallenger::execute(
			const int16_t sCastleIndex, const int16_t sKnights_1, const int16_t sKnights_2, 
			const int16_t sKnights_3, const int16_t sKnights_4, const int16_t sKnights_5, 
			const int16_t sKnights_6, const int16_t sKnights_7, const int16_t sKnights_8, 
			const int16_t sKnights_9, const int16_t sKnights_10) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, &sCastleIndex);
		_stmt.bind(1, &sKnights_1);
		_stmt.bind(2, &sKnights_2);
		_stmt.bind(3, &sKnights_3);
		_stmt.bind(4, &sKnights_4);
		_stmt.bind(5, &sKnights_5);
		_stmt.bind(6, &sKnights_6);
		_stmt.bind(7, &sKnights_7);
		_stmt.bind(8, &sKnights_8);
		_stmt.bind(9, &sKnights_9);
		_stmt.bind(10, &sKnights_10);
	
		return StoredProcedure::execute();
	}

	UpdateUserData::UpdateUserData()
		: StoredProcedure()
	{
	}

	UpdateUserData::UpdateUserData(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& UpdateUserData::Query()
	{
		static const std::string query = "{CALL UPDATE_USER_DATA(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType UpdateUserData::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> UpdateUserData::execute(
			const char* id, const uint8_t Nation, const uint8_t Race, 
			const int16_t Class, const uint8_t HairColor, const uint8_t Rank, 
			const uint8_t Title, const uint8_t Level, const int32_t Exp, 
			const int32_t Loyalty, const uint8_t Face, const uint8_t City, 
			const int16_t Knights, const uint8_t Fame, const int16_t Hp, 
			const int16_t Mp, const int16_t Sp, const uint8_t Str, 
			const uint8_t Sta, const uint8_t Dex, const uint8_t Intel, 
			const uint8_t Cha, const uint8_t Authority, const uint8_t Points, 
			const int32_t Gold, const uint8_t Zone, const int16_t Bind, 
			const int32_t PX, const int32_t PZ, const int32_t PY, 
			const int32_t dwTime, const int16_t QuestTotal, const std::vector<uint8_t>& strSkill, 
			const std::vector<uint8_t>& strItem, const std::vector<uint8_t>& strSerial, const std::vector<uint8_t>& strQuest, 
			const int32_t MannerPoint, const int32_t LoyaltyMonthly) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, id);
		_stmt.bind(1, &Nation);
		_stmt.bind(2, &Race);
		_stmt.bind(3, &Class);
		_stmt.bind(4, &HairColor);
		_stmt.bind(5, &Rank);
		_stmt.bind(6, &Title);
		_stmt.bind(7, &Level);
		_stmt.bind(8, &Exp);
		_stmt.bind(9, &Loyalty);
		_stmt.bind(10, &Face);
		_stmt.bind(11, &City);
		_stmt.bind(12, &Knights);
		_stmt.bind(13, &Fame);
		_stmt.bind(14, &Hp);
		_stmt.bind(15, &Mp);
		_stmt.bind(16, &Sp);
		_stmt.bind(17, &Str);
		_stmt.bind(18, &Sta);
		_stmt.bind(19, &Dex);
		_stmt.bind(20, &Intel);
		_stmt.bind(21, &Cha);
		_stmt.bind(22, &Authority);
		_stmt.bind(23, &Points);
		_stmt.bind(24, &Gold);
		_stmt.bind(25, &Zone);
		_stmt.bind(26, &Bind);
		_stmt.bind(27, &PX);
		_stmt.bind(28, &PZ);
		_stmt.bind(29, &PY);
		_stmt.bind(30, &dwTime);
		_stmt.bind(31, &QuestTotal);
		_stmt.bind_binary(32, strSkill);
		_stmt.bind_binary(33, strItem);
		_stmt.bind_binary(34, strSerial);
		_stmt.bind_binary(35, strQuest);
		_stmt.bind(36, &MannerPoint);
		_stmt.bind(37, &LoyaltyMonthly);
	
		return StoredProcedure::execute();
	}

	UpdateWarehouse::UpdateWarehouse()
		: StoredProcedure()
	{
	}

	UpdateWarehouse::UpdateWarehouse(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& UpdateWarehouse::Query()
	{
		static const std::string query = "{CALL UPDATE_WAREHOUSE(?,?,?,?,?)}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType UpdateWarehouse::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> UpdateWarehouse::execute(
			const char* accountid, const int32_t Money, const int32_t dwTime, 
			const std::vector<uint8_t>& strItem, const std::vector<uint8_t>& strSerial) noexcept(false)
	{
		prepare(Query());
		_stmt.reset_parameters();

		_stmt.bind(0, accountid);
		_stmt.bind(1, &Money);
		_stmt.bind(2, &dwTime);
		_stmt.bind_binary(3, strItem);
		_stmt.bind_binary(4, strSerial);
	
		return StoredProcedure::execute();
	}

	UserKnightsRatingUpdate::UserKnightsRatingUpdate()
		: StoredProcedure()
	{
	}

	UserKnightsRatingUpdate::UserKnightsRatingUpdate(std::shared_ptr<nanodbc::connection> conn) 
		: StoredProcedure(conn)
	{
	}

	/// \brief Returns the query associated with preparing this statement
	const std::string& UserKnightsRatingUpdate::Query()
	{
		static const std::string query = "{CALL USER_KNIGHTS_RATING_UPDATE()}";
		return query;
	}

	/// \brief Returns the associated database type for the table
	const modelUtil::DbType UserKnightsRatingUpdate::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
	std::weak_ptr<nanodbc::result> UserKnightsRatingUpdate::execute() noexcept(false)
	{
		prepare(Query());
		return StoredProcedure::execute();
	}
}