// Namespace: Dino.BusSand.App.Meta
public static class GameTracking // TypeDefIndex: 3990
{
	// Fields
	public const string Mode = "normal";
	private const string Null = "null";
	private static bool s_inLevel; // 0x0
	private static int s_level; // 0x4
	private static int s_playIndex; // 0x8
	private static int s_loseIndex; // 0xC
	private static int s_itemsTotal; // 0x10
	private static int s_currentLevel; // 0x14
	private static int s_loopBy; // 0x18
	private static int s_aseq; // 0x1C
	private static string s_playType; // 0x20
	private static string s_configId; // 0x28
	private static float s_excluded; // 0x30
	private static float s_pauseAt; // 0x34
	private static float s_externalAt; // 0x38
	private static float s_iapAt; // 0x3C
	private static int s_suctionMs; // 0x40
	private static bool s_revOn; // 0x44
	private static bool s_revSuction; // 0x45
	private static int s_revSandPermille; // 0x48
	private static int s_revCleared; // 0x4C
	private static int s_revCarsLeft; // 0x50
	private static int s_revCarsRoad; // 0x54
	private static string s_revFailBy; // 0x58
	private static float s_externalSeen; // 0x60
	public static int ShopTarget; // 0x64
	private static readonly List<GameTracking.IapScreen> s_iap; // 0x68
	public const string TowerBusName = "tower_bus";
	public const string GoldenStreakName = "golden_streak";
	public const string LastLevelKey = "sb_trk_current_level";

	// Properties
	public static bool InLevel { get; }
	private static GameplayController Gc { get; }
	private static bool ExternalNow { get; }
	private static bool InGameNow { get; }
	private static int TowerCycle { get; }
	private static string TowerId { get; }
	private static int TowerAttempt { get; }
	private static StreakRateFeature Streak { get; }

	// Methods

	// RVA: 0x2210D98 Offset: 0x220CD98 VA: 0x2210D98
	public static bool get_InLevel() { }

	// RVA: 0x2210DF0 Offset: 0x220CDF0 VA: 0x2210DF0
	private static GameplayController get_Gc() { }

	// RVA: 0x2210F10 Offset: 0x220CF10 VA: 0x2210F10
	public static void LevelStart(int level, int busTotal, string playType) { }

	// RVA: 0x22126B4 Offset: 0x220E6B4 VA: 0x22126B4
	private static TrackingPlan.Params AttemptParams(TrackingPlan.Params p) { }

	// RVA: 0x2212938 Offset: 0x220E938 VA: 0x2212938
	public static void LevelEnd(string result, string loseBy, int carsLeft = -1, int carsRoad = -1) { }

	// RVA: 0x2213950 Offset: 0x220F950 VA: 0x2213950
	private static double Tenths(int permille) { }

	// RVA: 0x221383C Offset: 0x220F83C VA: 0x221383C
	private static object SandLeftPct() { }

	// RVA: 0x22139BC Offset: 0x220F9BC VA: 0x22139BC
	public static void EndSuction(int sandLeftPermille) { }

	// RVA: 0x2213BEC Offset: 0x220FBEC VA: 0x2213BEC
	public static void ReviveScreen(string failBy, int sandLeftPermille, bool suction, int carsLeft = -1, int carsRoad = -1) { }

	// RVA: 0x221364C Offset: 0x220F64C VA: 0x221364C
	private static int ItemsCleared() { }

	// RVA: 0x2213720 Offset: 0x220F720 VA: 0x2213720
	private static double ProgressPct() { }

	// RVA: 0x22133B8 Offset: 0x220F3B8 VA: 0x22133B8
	private static int PlayMs() { }

	// RVA: 0x2213CC0 Offset: 0x220FCC0 VA: 0x2213CC0
	private static void IapTimeStart() { }

	// RVA: 0x2213DBC Offset: 0x220FDBC VA: 0x2213DBC
	private static void IapTimeStop() { }

	// RVA: 0x22112EC Offset: 0x220D2EC VA: 0x22112EC
	private static void ResetIapTime() { }

	// RVA: 0x2211BA8 Offset: 0x220DBA8 VA: 0x2211BA8
	private static void SaveOpenAttempt(string jr, bool live = False) { }

	// RVA: 0x2213F98 Offset: 0x220FF98 VA: 0x2213F98
	public static void OnBoot() { }

	// RVA: 0x221486C Offset: 0x221086C VA: 0x221486C
	public static void ExternalUi(bool open) { }

	// RVA: 0x2214BA4 Offset: 0x2210BA4 VA: 0x2214BA4
	private static bool get_ExternalNow() { }

	// RVA: 0x2214C74 Offset: 0x2210C74 VA: 0x2214C74
	public static void AppQuitting() { }

	// RVA: 0x221505C Offset: 0x221105C VA: 0x221505C
	public static bool ExternalUiRecently(float seconds) { }

	// RVA: 0x2215124 Offset: 0x2211124 VA: 0x2215124
	public static void AppPause(bool paused) { }

	// RVA: 0x22155D8 Offset: 0x22115D8 VA: 0x22155D8
	public static string AdPlacement(string slot) { }

	// RVA: 0x22159B0 Offset: 0x22119B0 VA: 0x22159B0
	public static void AdOffer(string slot) { }

	// RVA: 0x2215ACC Offset: 0x2211ACC VA: 0x2215ACC
	public static void RewardedAdUsed(string slot) { }

	// RVA: 0x2216080 Offset: 0x2212080 VA: 0x2216080
	public static string ResourceName(int id) { }

	// RVA: 0x2216218 Offset: 0x2212218 VA: 0x2216218
	private static string ResourceType(int id) { }

	// RVA: 0x221629C Offset: 0x221229C VA: 0x221629C
	public static void Resource(int id, long delta, string reason, bool infinite = False) { }

	// RVA: 0x2215BC8 Offset: 0x2211BC8 VA: 0x2215BC8
	private static void Spend(string type, string name, long amount, Nullable<long> balance, string placement, string why) { }

	// RVA: 0x2217200 Offset: 0x2213200 VA: 0x2217200
	private static string BuyPlacement(int id) { }

	// RVA: 0x221676C Offset: 0x221276C VA: 0x221676C
	private static void Placement(int id, string reason, bool earn, out string placement, out string why) { }

	// RVA: 0x2215894 Offset: 0x2211894 VA: 0x2215894
	public static string SnakeCase(string s) { }

	// RVA: 0x22174BC Offset: 0x22134BC VA: 0x22174BC
	public static string PackName(int storeItemId) { }

	// RVA: 0x2217614 Offset: 0x2213614 VA: 0x2217614
	private static bool get_InGameNow() { }

	// RVA: 0x221773C Offset: 0x221373C VA: 0x221773C
	public static void PackSource(string source, out string placement, out string trigger) { }

	// RVA: 0x221791C Offset: 0x221391C VA: 0x221791C
	public static void IapShow(object owner, string placement, string showType, string trigger, int[] storeItems) { }

	// RVA: 0x22180F8 Offset: 0x22140F8 VA: 0x22180F8
	public static void IapShowShop(object owner) { }

	// RVA: 0x2218250 Offset: 0x2214250 VA: 0x2218250
	public static void IapShowPack(object owner, string source, int[] storeItems) { }

	// RVA: 0x221840C Offset: 0x221440C VA: 0x221840C
	public static void IapClose(object owner) { }

	// RVA: 0x2217D5C Offset: 0x2213D5C VA: 0x2217D5C
	private static void IapClose(object owner, bool record) { }

	// RVA: 0x2217308 Offset: 0x2213308 VA: 0x2217308
	private static GameTracking.IapScreen IapContext() { }

	// RVA: 0x2218464 Offset: 0x2214464 VA: 0x2218464
	private static TrackingPlan.Params IapParams(int storeItemId) { }

	// RVA: 0x22185A0 Offset: 0x22145A0 VA: 0x22185A0
	private static void Price(int storeItemId, out double price, out string currency) { }

	// RVA: 0x221875C Offset: 0x221475C VA: 0x221875C
	public static void IapClick(int storeItemId) { }

	// RVA: 0x2218850 Offset: 0x2214850 VA: 0x2218850
	public static void IapSuccess(int storeItemId) { }

	// RVA: 0x22189DC Offset: 0x22149DC VA: 0x22189DC
	public static void IapFailed(int storeItemId, string reason, string errorCode) { }

	// RVA: 0x2218C24 Offset: 0x2214C24 VA: 0x2218C24
	public static void TutorialOpen(int guideId, int itemId) { }

	// RVA: 0x2218E1C Offset: 0x2214E1C VA: 0x2218E1C
	public static void TutorialDone(int guideId, int itemId) { }

	// RVA: 0x2218CE8 Offset: 0x2214CE8 VA: 0x2218CE8
	private static void Tutorial(string cate, string name, int index) { }

	// RVA: 0x2218F90 Offset: 0x2214F90 VA: 0x2218F90
	public static void InterOpportunity(string slot, string result, string reason) { }

	// RVA: 0x22193D0 Offset: 0x22153D0 VA: 0x22193D0
	public static void ContinueOffer(int index, string action, int price, int ads) { }

	// RVA: 0x2219C04 Offset: 0x2215C04 VA: 0x2219C04
	private static string Day(long unixSeconds) { }

	// RVA: 0x2219CD0 Offset: 0x2215CD0 VA: 0x2219CD0
	private static void LiveOpsTrack(string action, string ev, string eventId, int attempt, string screen, string viewFrom, Nullable<int> qualified, Nullable<int> placementId, string track) { }

	// RVA: 0x2219F64 Offset: 0x2215F64 VA: 0x2219F64
	private static int get_TowerCycle() { }

	// RVA: 0x2219FC0 Offset: 0x2215FC0 VA: 0x2219FC0
	private static string get_TowerId() { }

	// RVA: 0x221A058 Offset: 0x2216058 VA: 0x221A058
	private static int get_TowerAttempt() { }

	// RVA: 0x221A0A0 Offset: 0x22160A0 VA: 0x221A0A0
	public static void TowerBusImpression(string screen, string viewFrom) { }

	// RVA: 0x221A248 Offset: 0x2216248 VA: 0x221A248
	public static void TowerBusJoined() { }

	// RVA: 0x221A324 Offset: 0x2216324 VA: 0x221A324
	public static void TowerBusMilestone(int index) { }

	// RVA: 0x221A40C Offset: 0x221640C VA: 0x221A40C
	public static void TowerBusClaim(int index) { }

	// RVA: 0x221A514 Offset: 0x2216514 VA: 0x221A514
	private static int TowerWins() { }

	// RVA: 0x221A54C Offset: 0x221654C VA: 0x221A54C
	private static StreakRateFeature get_Streak() { }

	// RVA: 0x221A5DC Offset: 0x22165DC VA: 0x221A5DC
	private static string StreakId(StreakRateSlot s) { }

	// RVA: 0x221A688 Offset: 0x2216688 VA: 0x221A688
	public static void GoldenStreakImpression(string screen, string viewFrom) { }

	// RVA: 0x221A7E8 Offset: 0x22167E8 VA: 0x221A7E8
	public static void GoldenStreakJoined(StreakRateSlot s) { }

	// RVA: 0x221A8D8 Offset: 0x22168D8 VA: 0x221A8D8
	public static void GoldenStreakNodes(StreakRateSlot s, int count) { }

	// RVA: 0x221AA68 Offset: 0x2216A68 VA: 0x221AA68
	private static int StreakPoints() { }

	// RVA: 0x220F88C Offset: 0x220B88C VA: 0x220F88C
	public static void PushSegments() { }

	// RVA: 0x2211E88 Offset: 0x220DE88 VA: 0x2211E88
	public static void PushProperties(bool full = True) { }

	// RVA: 0x221AED4 Offset: 0x2216ED4 VA: 0x221AED4
	private static int SafeInt(Func<int> f) { }

	// RVA: 0x221ABC4 Offset: 0x2216BC4 VA: 0x221ABC4
	private static string CurrentEvents() { }

	// RVA: 0x221B0FC Offset: 0x22170FC VA: 0x221B0FC
	private static void .cctor() { }
}

