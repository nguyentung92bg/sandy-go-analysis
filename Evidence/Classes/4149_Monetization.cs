// Namespace: Dino.BusSand.App.Meta
public static class Monetization // TypeDefIndex: 4149
{
	// Fields
	private const string Table = "TbMonetization";
	public const int MaxContinues = 10;
	public const string WinAdSlot = "WinMultiplier";

	// Properties
	public static int RevivePrice { get; }
	public static int[] RevivePrices { get; }
	public static int ReviveMax { get; }
	public static float RewardedLoadWaitSec { get; }
	public static int RescueReviveSeconds { get; }
	public static int WinAdFromLevel { get; }
	public static int[] WinMultipliers { get; }
	public static bool RemoveAdsEnabled { get; }
	public static int RemoveAdsStoreItem { get; }
	public static bool RemoveAdsHomeButton { get; }
	public static bool PlayOnOfferEnabled { get; }
	public static int PlayOnOfferStoreItem { get; }
	public static int PlayOnOfferFromLevel { get; }
	public static float WinNeedleSeconds { get; }
	public static bool WinMultiplierFixed { get; }
	public static bool PlayOnOnlyWhenShort { get; }
	public static int InterTriggerLevel { get; }
	public static int InterCooldownSec { get; }
	public static int InterMinResults { get; }
	public static int InterAfterRewardedSec { get; }
	public static int InterProtectDays { get; }
	public static int RemoveAdsFromLevel { get; }
	public static int RemoveAdsPopupEvery { get; }
	public static int RemoveAdsPopupPerDay { get; }
	public static int NoAdsBundleItem { get; }
	public static bool StarterEnabled { get; }
	public static int StarterStoreItem { get; }
	public static int StarterFromLevel { get; }
	public static int StarterHours { get; }
	public static int OffersFromLevel { get; }
	public static int OffersPerArrival { get; }
	public static int OffersPerDay { get; }
	public static bool WinChestEnabled { get; }
	public static int WinChestFromLevel { get; }
	public static List<KeyValuePair<int, long>> WinChestRewards { get; }
	public static int WinChestAdMultiplier { get; }
	public static bool DailyGiftEnabled { get; }
	public static int DailyGiftFromLevel { get; }
	public static int DailyGiftDays { get; }
	public static int DailyGiftAdMultiplier { get; }
	public static int DailyGiftChestDays { get; }
	public static List<KeyValuePair<int, long>> DailyGiftChest { get; }
	public static bool WelcomeBackEnabled { get; }
	public static int WelcomeBackAwayDays { get; }
	public static int WelcomeBackCooldownDays { get; }
	public static List<KeyValuePair<int, long>> WelcomeBackRewards { get; }
	public static bool StuckHelpEnabled { get; }
	public static int StuckHelpLosses { get; }
	public static List<KeyValuePair<int, long>> StuckHelpRewards { get; }

	// Methods

	// RVA: 0x2265914 Offset: 0x2261914 VA: 0x2265914
	private static Dictionary<string, object> BoosterByShop(int shopId) { }

	// RVA: 0x2265C6C Offset: 0x2261C6C VA: 0x2265C6C
	public static bool Covers(int shopId) { }

	// RVA: 0x2265DA8 Offset: 0x2261DA8 VA: 0x2265DA8
	public static int CoinPrice(int shopId) { }

	// RVA: 0x2265E14 Offset: 0x2261E14 VA: 0x2265E14
	public static int Item(int shopId) { }

	// RVA: 0x2265E80 Offset: 0x2261E80 VA: 0x2265E80
	public static int BuyCount(int shopId) { }

	// RVA: 0x2265F2C Offset: 0x2261F2C VA: 0x2265F2C
	public static int AdCount(int shopId) { }

	// RVA: 0x2265FD8 Offset: 0x2261FD8 VA: 0x2265FD8
	public static int UnlockLevel(int item) { }

	// RVA: 0x2266340 Offset: 0x2262340 VA: 0x2266340
	private static int RowInt(string id, string field, int fallback) { }

	// RVA: 0x22663DC Offset: 0x22623DC VA: 0x22663DC
	private static int[] RowInts(string id, string field, int[] fallback) { }

	// RVA: 0x2266508 Offset: 0x2262508 VA: 0x2266508
	public static List<KeyValuePair<int, long>> RowRewards(string id, string field) { }

	// RVA: 0x226657C Offset: 0x226257C VA: 0x226657C
	public static List<KeyValuePair<int, long>> Rewards(object list) { }

	// RVA: 0x22668A8 Offset: 0x22628A8 VA: 0x22668A8
	private static bool On(string id) { }

	// RVA: 0x2266934 Offset: 0x2262934 VA: 0x2266934
	public static int get_RevivePrice() { }

	// RVA: 0x22669D8 Offset: 0x22629D8 VA: 0x22669D8
	public static int[] get_RevivePrices() { }

	// RVA: 0x2266A80 Offset: 0x2262A80 VA: 0x2266A80
	public static int get_ReviveMax() { }

	// RVA: 0x226693C Offset: 0x226293C VA: 0x226693C
	public static int RevivePriceAt(int used) { }

	// RVA: 0x2266B90 Offset: 0x2262B90 VA: 0x2266B90
	public static float get_RewardedLoadWaitSec() { }

	// RVA: 0x2266BF0 Offset: 0x2262BF0 VA: 0x2266BF0
	public static int ReviveAdsAt(int used) { }

	// RVA: 0x2266CDC Offset: 0x2262CDC VA: 0x2266CDC
	public static int get_RescueReviveSeconds() { }

	// RVA: 0x2266D38 Offset: 0x2262D38 VA: 0x2266D38
	public static int WinCoins(LevelType t) { }

	// RVA: 0x2266DE0 Offset: 0x2262DE0 VA: 0x2266DE0
	public static bool WinAdOffered(int wonLevel) { }

	// RVA: 0x2266E58 Offset: 0x2262E58 VA: 0x2266E58
	public static int get_WinAdFromLevel() { }

	// RVA: 0x2266EB4 Offset: 0x2262EB4 VA: 0x2266EB4
	public static int[] get_WinMultipliers() { }

	// RVA: 0x2267008 Offset: 0x2263008 VA: 0x2267008
	public static bool get_RemoveAdsEnabled() { }

	// RVA: 0x22670C0 Offset: 0x22630C0 VA: 0x22670C0
	public static int get_RemoveAdsStoreItem() { }

	// RVA: 0x226711C Offset: 0x226311C VA: 0x226711C
	public static bool get_RemoveAdsHomeButton() { }

	// RVA: 0x2267178 Offset: 0x2263178 VA: 0x2267178
	public static bool get_PlayOnOfferEnabled() { }

	// RVA: 0x2267230 Offset: 0x2263230 VA: 0x2267230
	public static int get_PlayOnOfferStoreItem() { }

	// RVA: 0x226728C Offset: 0x226328C VA: 0x226728C
	public static int get_PlayOnOfferFromLevel() { }

	// RVA: 0x22672E8 Offset: 0x22632E8 VA: 0x22672E8
	public static float get_WinNeedleSeconds() { }

	// RVA: 0x2267354 Offset: 0x2263354 VA: 0x2267354
	public static bool get_WinMultiplierFixed() { }

	// RVA: 0x22673BC Offset: 0x22633BC VA: 0x22673BC
	public static bool get_PlayOnOnlyWhenShort() { }

	// RVA: 0x2267418 Offset: 0x2263418 VA: 0x2267418
	public static int get_InterTriggerLevel() { }

	// RVA: 0x22674D0 Offset: 0x22634D0 VA: 0x22674D0
	public static int get_InterCooldownSec() { }

	// RVA: 0x226752C Offset: 0x226352C VA: 0x226752C
	public static int get_InterMinResults() { }

	// RVA: 0x2267588 Offset: 0x2263588 VA: 0x2267588
	public static int get_InterAfterRewardedSec() { }

	// RVA: 0x22675E4 Offset: 0x22635E4 VA: 0x22675E4
	public static int get_InterProtectDays() { }

	// RVA: 0x2267640 Offset: 0x2263640 VA: 0x2267640
	public static int InterProtectSeconds(int installDay) { }

	// RVA: 0x2267734 Offset: 0x2263734 VA: 0x2267734
	public static int get_RemoveAdsFromLevel() { }

	// RVA: 0x2267790 Offset: 0x2263790 VA: 0x2267790
	public static int get_RemoveAdsPopupEvery() { }

	// RVA: 0x2267820 Offset: 0x2263820 VA: 0x2267820
	public static int get_RemoveAdsPopupPerDay() { }

	// RVA: 0x226787C Offset: 0x226387C VA: 0x226787C
	public static int get_NoAdsBundleItem() { }

	// RVA: 0x22678D8 Offset: 0x22638D8 VA: 0x22678D8
	public static bool get_StarterEnabled() { }

	// RVA: 0x2267990 Offset: 0x2263990 VA: 0x2267990
	public static int get_StarterStoreItem() { }

	// RVA: 0x22679EC Offset: 0x22639EC VA: 0x22679EC
	public static int get_StarterFromLevel() { }

	// RVA: 0x2267A48 Offset: 0x2263A48 VA: 0x2267A48
	public static int get_StarterHours() { }

	// RVA: 0x2267AA4 Offset: 0x2263AA4 VA: 0x2267AA4
	public static int get_OffersFromLevel() { }

	// RVA: 0x2267B5C Offset: 0x2263B5C VA: 0x2267B5C
	public static int get_OffersPerArrival() { }

	// RVA: 0x2267BB8 Offset: 0x2263BB8 VA: 0x2267BB8
	public static int get_OffersPerDay() { }

	// RVA: 0x2267C14 Offset: 0x2263C14 VA: 0x2267C14
	public static bool get_WinChestEnabled() { }

	// RVA: 0x2267C54 Offset: 0x2263C54 VA: 0x2267C54
	public static int get_WinChestFromLevel() { }

	// RVA: 0x2267CB0 Offset: 0x2263CB0 VA: 0x2267CB0
	public static int WinChestNeed(int opened) { }

	// RVA: 0x2267E00 Offset: 0x2263E00 VA: 0x2267E00
	public static List<KeyValuePair<int, long>> get_WinChestRewards() { }

	// RVA: 0x2267E58 Offset: 0x2263E58 VA: 0x2267E58
	public static int get_WinChestAdMultiplier() { }

	// RVA: 0x2267EE8 Offset: 0x2263EE8 VA: 0x2267EE8
	public static bool get_DailyGiftEnabled() { }

	// RVA: 0x2267F28 Offset: 0x2263F28 VA: 0x2267F28
	public static int get_DailyGiftFromLevel() { }

	// RVA: 0x2267F84 Offset: 0x2263F84 VA: 0x2267F84
	public static int get_DailyGiftDays() { }

	// RVA: 0x226802C Offset: 0x226402C VA: 0x226802C
	public static List<KeyValuePair<int, long>> DailyGiftDay(int index) { }

	// RVA: 0x2268150 Offset: 0x2264150 VA: 0x2268150
	public static int get_DailyGiftAdMultiplier() { }

	// RVA: 0x22681E0 Offset: 0x22641E0 VA: 0x22681E0
	public static int get_DailyGiftChestDays() { }

	// RVA: 0x226823C Offset: 0x226423C VA: 0x226823C
	public static List<KeyValuePair<int, long>> get_DailyGiftChest() { }

	// RVA: 0x226854C Offset: 0x226454C VA: 0x226854C
	public static bool get_WelcomeBackEnabled() { }

	// RVA: 0x226858C Offset: 0x226458C VA: 0x226858C
	public static int get_WelcomeBackAwayDays() { }

	// RVA: 0x22685E8 Offset: 0x22645E8 VA: 0x22685E8
	public static int get_WelcomeBackCooldownDays() { }

	// RVA: 0x2268644 Offset: 0x2264644 VA: 0x2268644
	public static List<KeyValuePair<int, long>> get_WelcomeBackRewards() { }

	// RVA: 0x226869C Offset: 0x226469C VA: 0x226869C
	public static bool get_StuckHelpEnabled() { }

	// RVA: 0x22686DC Offset: 0x22646DC VA: 0x22686DC
	public static int get_StuckHelpLosses() { }

	// RVA: 0x2268738 Offset: 0x2264738 VA: 0x2268738
	public static List<KeyValuePair<int, long>> get_StuckHelpRewards() { }
}

