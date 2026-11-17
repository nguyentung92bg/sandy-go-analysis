// Namespace: Dino.Tracking
public static class DinoUserPropertyTracking // TypeDefIndex: 12108
{
	// Fields
	private const string CURRENT_LEVEL = "current_level";
	private const string UA_ATTRIBUTION_ID = "attribution_id";
	private const string UA_NETWORK = "ua_network";
	private const string UA_CAMPAIGN = "ua_campaign";
	private const string UA_ADGROUP = "ua_adgroup";
	private const string UA_CREATIVE = "ua_creative";
	private const string UA_TRACKER_NAME = "ua_tracker_name";
	private const string FIREBASE_EXP = "firebase_exp";
	private const string BALANCE_COIN_N = "balance_coin_n";
	private const string BALANCE_TICKET_N = "balance_ticket_n";
	private const string BALANCE_FREEZE_N = "balance_freeze_n";
	private const string BALANCE_RESOURCE_N_TEMPLATE = "balance_{0}_n";
	public const string USER_ID = "user_id";
	private const string CURRENT_MODE = "current_mode";
	private const string CURRENT_EVENT = "current_event";
	private const string IS_IAP_USER_N = "is_iap_user_n";
	private const string IAP_COUNT_N = "iap_count_n";
	public const string ACTIVE_DAY_N = "active_day_n";
	public const string CONNECTION_TYPE = "connection_type";
	private const string WIN_STREAK_N = "win_streak_n";
	private const string LOSE_STREAK_N = "lose_streak_n";

	// Methods

	// RVA: 0x2480DB8 Offset: 0x247CDB8 VA: 0x2480DB8
	public static void TrackCurrentLevel(int level) { }

	// RVA: 0x2480EF4 Offset: 0x247CEF4 VA: 0x2480EF4
	public static void TrackUaAttributionId(string attributionId) { }

	// RVA: 0x2480F3C Offset: 0x247CF3C VA: 0x2480F3C
	public static void TrackUaNetwork(string network) { }

	// RVA: 0x2480F84 Offset: 0x247CF84 VA: 0x2480F84
	public static void TrackUaCampaign(string campaign) { }

	// RVA: 0x2480FCC Offset: 0x247CFCC VA: 0x2480FCC
	public static void TrackUaAdgroup(string adgroup) { }

	// RVA: 0x2481014 Offset: 0x247D014 VA: 0x2481014
	public static void TrackUaCreative(string creative) { }

	// RVA: 0x248105C Offset: 0x247D05C VA: 0x248105C
	public static void TrackUaTrackerName(string trackerName) { }

	// RVA: 0x24810A4 Offset: 0x247D0A4 VA: 0x24810A4
	public static void TrackFirebaseExp(string variant) { }

	// RVA: 0x24810EC Offset: 0x247D0EC VA: 0x24810EC
	public static void TrackBalanceCoin(long amount) { }

	// RVA: 0x248115C Offset: 0x247D15C VA: 0x248115C
	public static void TrackBalanceTicket(long amount) { }

	// RVA: 0x24811CC Offset: 0x247D1CC VA: 0x24811CC
	public static void TrackBalanceFreeze(long amount) { }

	// RVA: 0x248123C Offset: 0x247D23C VA: 0x248123C
	public static void TrackBalanceResource(string resourceName, long amount) { }

	// RVA: 0x24812C0 Offset: 0x247D2C0 VA: 0x24812C0
	public static void TrackUserId(string userId) { }

	// RVA: 0x2481308 Offset: 0x247D308 VA: 0x2481308
	public static void TrackCurrentMode(string mode) { }

	// RVA: 0x2481350 Offset: 0x247D350 VA: 0x2481350
	public static void TrackCurrentEvent(string eventName) { }

	// RVA: 0x2481398 Offset: 0x247D398 VA: 0x2481398
	public static void TrackIsIapUser(bool isIapUser) { }

	// RVA: 0x2481418 Offset: 0x247D418 VA: 0x2481418
	public static void TrackIapCount(int count) { }

	// RVA: 0x2481488 Offset: 0x247D488 VA: 0x2481488
	public static void TrackActiveDay(int day) { }

	// RVA: 0x24814F8 Offset: 0x247D4F8 VA: 0x24814F8
	public static void TrackConnectionType(string connectionType) { }

	// RVA: 0x2481540 Offset: 0x247D540 VA: 0x2481540
	public static void TrackWinStreak(int streak) { }

	// RVA: 0x24815B0 Offset: 0x247D5B0 VA: 0x24815B0
	public static void TrackLoseStreak(int streak) { }

	// RVA: 0x2480E28 Offset: 0x247CE28 VA: 0x2480E28
	private static void SetProperty(string propertyName, object value) { }
}

