// Namespace: Dino.BusSand.App.Meta
public static class StreakTowerUtil // TypeDefIndex: 4107
{
	// Fields
	public const long DayMs = 86400000;

	// Methods

	// RVA: 0x224D438 Offset: 0x2249438 VA: 0x224D438
	public static bool CurrentPeriod(string activityType, int groupId, long nowMs, out int activityId, out long startMs, out long endMs) { }

	// RVA: 0x2251994 Offset: 0x224D994 VA: 0x2251994
	public static bool InActivityTime(string activityType, int groupId, long nowMs) { }

	// RVA: 0x22516D4 Offset: 0x224D6D4 VA: 0x22516D4
	private static bool Window(string type, string start, string end, long now, out long s, out long e) { }

	// RVA: 0x2251A94 Offset: 0x224DA94 VA: 0x2251A94
	private static int WeekDay(string v, out string time) { }

	// RVA: 0x22519C4 Offset: 0x224D9C4 VA: 0x22519C4
	private static int Hms(string v) { }

	// RVA: 0x2251B98 Offset: 0x224DB98 VA: 0x2251B98
	public static string ActivityTimeString(long endMs) { }

	// RVA: 0x2251BD4 Offset: 0x224DBD4 VA: 0x2251BD4
	public static string L(string key, object[] args) { }

	// RVA: 0x2251C7C Offset: 0x224DC7C VA: 0x2251C7C
	public static List<ActivityRewardEntry> Rewards(int rewardId) { }

	// RVA: 0x2252004 Offset: 0x224E004 VA: 0x2252004
	public static bool IsRedReward(int id) { }

	// RVA: 0x2252014 Offset: 0x224E014 VA: 0x2252014
	public static string ValueString(ActivityRewardEntry e) { }

	// RVA: 0x2252160 Offset: 0x224E160 VA: 0x2252160
	public static string TimeStringEx(int t) { }

	// RVA: 0x2252390 Offset: 0x224E390 VA: 0x2252390
	public static Sprite RewardIcon(ActivityRewardEntry e, bool small = False) { }

	// RVA: 0x224EF30 Offset: 0x224AF30 VA: 0x224EF30
	public static List<ActivityRewardEntry> Grant(int rewardId, string reason) { }

	// RVA: 0x22501D0 Offset: 0x224C1D0 VA: 0x22501D0
	public static List<object> TrackRewardItems(int rewardId) { }

	// RVA: 0x224BE24 Offset: 0x2247E24 VA: 0x224BE24
	public static int[] IntArr(object o) { }

	// RVA: 0x2250978 Offset: 0x224C978 VA: 0x2250978
	public static bool SettleRange(string panel, string activityType, int value, out bool inRange) { }

	// RVA: 0x224C2F8 Offset: 0x22482F8 VA: 0x224C2F8
	public static int LevelStreakRate(LevelType t) { }

	// RVA: 0x2252580 Offset: 0x224E580 VA: 0x2252580
	public static bool ShouldShowLockedBtn(int activity) { }

	// RVA: 0x2252620 Offset: 0x224E620 VA: 0x2252620
	public static bool GuideSimplified(int activity) { }
}

