// Namespace: Dino.BusSand.App.Meta
public class DailyChallengeModel // TypeDefIndex: 4030
{
	// Fields
	public const int UnlockLevelPassed = 29;
	public const int MinLevel = 10;
	public const int MaxLevel = 200;
	public static readonly int[] MilestoneDays; // 0x0
	public readonly DailyChallengeData Data; // 0x10
	public int LevelPassed; // 0x18

	// Methods

	// RVA: 0x222DFB0 Offset: 0x2229FB0 VA: 0x222DFB0
	public void .ctor(DailyChallengeData data) { }

	// RVA: 0x222E028 Offset: 0x222A028 VA: 0x222E028
	public static bool IsUnlocked(int levelPassed) { }

	// RVA: 0x222E034 Offset: 0x222A034 VA: 0x222E034
	public static int LevelFor(long day, int levelPassed) { }

	// RVA: 0x222E110 Offset: 0x222A110 VA: 0x222E110
	public int LevelForToday(long nowMs) { }

	// RVA: 0x222E1C4 Offset: 0x222A1C4 VA: 0x222E1C4
	public bool CanPlay(long nowMs) { }

	// RVA: 0x222E1CC Offset: 0x222A1CC VA: 0x222E1CC
	public bool CanPlay(long nowMs, int levelPassed) { }

	// RVA: 0x222E2A0 Offset: 0x222A2A0 VA: 0x222E2A0
	public List<int[]> Complete(long nowMs) { }

	// RVA: 0x222E588 Offset: 0x222A588 VA: 0x222E588
	public static List<int[]> DayReward() { }

	// RVA: 0x222E5FC Offset: 0x222A5FC VA: 0x222E5FC
	public static List<int[]> MilestoneReward(int index) { }

	// RVA: 0x222E764 Offset: 0x222A764 VA: 0x222E764
	public int DoneCount(long nowMs) { }

	// RVA: 0x222E7C4 Offset: 0x222A7C4 VA: 0x222E7C4
	public int MilestoneState(int index, long nowMs) { }

	// RVA: 0x222E8F8 Offset: 0x222A8F8 VA: 0x222E8F8
	public List<int[]> ClaimMilestone(int index, long nowMs) { }

	// RVA: 0x222EA3C Offset: 0x222AA3C VA: 0x222EA3C
	public List<int> DoneDaysThisMonth(long nowMs) { }

	// RVA: 0x222EACC Offset: 0x222AACC VA: 0x222EACC
	public int DaysInMonth(long nowMs) { }

	// RVA: 0x222E490 Offset: 0x222A490 VA: 0x222E490
	private void EnsureMonth(long nowMs) { }

	// RVA: 0x222EB44 Offset: 0x222AB44 VA: 0x222EB44
	private static void .cctor() { }
}

