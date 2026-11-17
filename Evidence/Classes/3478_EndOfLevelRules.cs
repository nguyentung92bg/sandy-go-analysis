// Namespace: Dino.BusSand.App.UI
public static class EndOfLevelRules // TypeDefIndex: 3478
{
	// Fields
	public const int LevelRewardGroup = 1;

	// Methods

	// RVA: 0x22C270C Offset: 0x22BE70C VA: 0x22C270C
	public static EndOfLevelRules.PaiziInfo Paizi(LevelType type, int itemId, int itemRate, int streakNum) { }

	// RVA: 0x22C277C Offset: 0x22BE77C VA: 0x22C277C
	public static EndOfLevelRules.PaiziInfo Paizi(LevelType type, bool streakOpen) { }

	// RVA: 0x22C2990 Offset: 0x22BE990 VA: 0x22C2990
	public static void PaiziTexts(EndOfLevelRules.PaiziInfo p, out string rateNum, out string centerNum, out string bottomItemNum, out string bottomStreakNum) { }

	// RVA: 0x22C2B74 Offset: 0x22BEB74 VA: 0x22C2B74
	public static bool RateFromGroups(IList<int[]> normal, IList<int[]> typed, out int id, out int rate) { }

	// RVA: 0x22C2824 Offset: 0x22BE824 VA: 0x22C2824
	public static void LevelRate(LevelType type, out int id, out int rate) { }

	// RVA: 0x22C2920 Offset: 0x22BE920 VA: 0x22C2920
	public static int LevelStreakNum(LevelType type) { }

	// RVA: 0x22C3104 Offset: 0x22BF104 VA: 0x22C3104
	private static Dictionary<string, object> RewardRow(LevelType type) { }

	// RVA: 0x22C3574 Offset: 0x22BF574 VA: 0x22C3574
	private static List<int[]> Pairs(Dictionary<string, object> row, string key) { }

	// RVA: 0x22C3864 Offset: 0x22BF864 VA: 0x22C3864
	public static void QuitPaiziPosition(bool singleActivityRetention, out float x, out float y) { }

	// RVA: 0x22C3890 Offset: 0x22BF890 VA: 0x22C3890
	public static int ContinuePriority(int giftPackId) { }

	// RVA: 0x22C3910 Offset: 0x22BF910 VA: 0x22C3910
	public static List<EndOfLevelRules.ContinueCandidate> ContinueOrder(bool passport, int passportPackId, int passportPriority, bool golden, int goldenPackId, int goldenPriority) { }

	// RVA: 0x22C0074 Offset: 0x22BC074 VA: 0x22C0074
	public static List<EndOfLevelRules.ContinueCandidate> ContinueOrder() { }

	// RVA: 0x22BF1C4 Offset: 0x22BB1C4 VA: 0x22BF1C4
	public static bool NeedShowContinueBottom() { }

	// RVA: 0x22BF7D0 Offset: 0x22BB7D0 VA: 0x22BF7D0
	public static int CloseVariant(bool bottomOpen, int currentIndex, int totalCount) { }

	// RVA: 0x22BF844 Offset: 0x22BB844 VA: 0x22BF844
	public static string CloseClip(int variant) { }

	// RVA: 0x22C2298 Offset: 0x22BE298 VA: 0x22C2298
	public static int NextPage(int current, int count) { }

	// RVA: 0x22BE490 Offset: 0x22BA490 VA: 0x22BE490
	public static int PageAfterRelease(float norm, float dragStartNorm, int count, float minDelta = 0.02) { }

	// RVA: 0x22C1A64 Offset: 0x22BDA64 VA: 0x22C1A64
	public static string GoldenCountdown(long s) { }

	// RVA: 0x22C3B60 Offset: 0x22BFB60 VA: 0x22C3B60
	private static float Clamp01(float v) { }

	// RVA: 0x22C3B88 Offset: 0x22BFB88 VA: 0x22C3B88
	private static int Clamp(int v, int lo, int hi) { }
}

