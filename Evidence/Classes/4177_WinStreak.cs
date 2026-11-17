// Namespace: Dino.BusSand.App.Meta
public static class WinStreak // TypeDefIndex: 4177
{
	// Fields
	public const string Table = "TbWinStreak";
	public const string BlobKey = "winstreak";
	private static List<WinStreakCheckpoint> s_cps; // 0x0
	public static Nullable<long> NowOverride; // 0x8
	private static WinStreakSave s_save; // 0x18

	// Properties
	public static bool Enabled { get; }
	public static int UnlockLevel { get; }
	public static int CycleDays { get; }
	public static long Anchor { get; }
	public static bool KillIsLoss { get; }
	public static List<WinStreakCheckpoint> Checkpoints { get; }
	public static int TopFloor { get; }
	private static long Now { get; }
	private static long CycleSeconds { get; }
	public static int CurrentCycle { get; }
	public static long SecondsLeft { get; }
	public static long RunSecondsLeft { get; }
	public static WinStreakSave S { get; }
	public static WinStreak.Phase Current { get; }
	public static bool WouldLoseProgress { get; }
	public static bool WantsHome { get; }

	// Methods

	// RVA: 0x22927FC Offset: 0x228E7FC VA: 0x22927FC
	private static Dictionary<string, object> Row(string id) { }

	// RVA: 0x229286C Offset: 0x228E86C VA: 0x229286C
	private static long Num(string id, string field, long fallback) { }

	// RVA: 0x22928B8 Offset: 0x228E8B8 VA: 0x22928B8
	public static bool get_Enabled() { }

	// RVA: 0x2292964 Offset: 0x228E964 VA: 0x2292964
	public static int get_UnlockLevel() { }

	// RVA: 0x22929C4 Offset: 0x228E9C4 VA: 0x22929C4
	public static int get_CycleDays() { }

	// RVA: 0x2292A64 Offset: 0x228EA64 VA: 0x2292A64
	public static long get_Anchor() { }

	// RVA: 0x2292AC4 Offset: 0x228EAC4 VA: 0x2292AC4
	public static bool get_KillIsLoss() { }

	// RVA: 0x2292B2C Offset: 0x228EB2C VA: 0x2292B2C
	public static List<WinStreakCheckpoint> get_Checkpoints() { }

	// RVA: 0x2293148 Offset: 0x228F148 VA: 0x2293148
	public static int get_TopFloor() { }

	// RVA: 0x22931D8 Offset: 0x228F1D8 VA: 0x22931D8
	private static long get_Now() { }

	// RVA: 0x2293274 Offset: 0x228F274 VA: 0x2293274
	private static long get_CycleSeconds() { }

	// RVA: 0x2293290 Offset: 0x228F290 VA: 0x2293290
	public static int get_CurrentCycle() { }

	// RVA: 0x2293330 Offset: 0x228F330 VA: 0x2293330
	public static long CycleEnd(int cycle) { }

	// RVA: 0x2293368 Offset: 0x228F368 VA: 0x2293368
	public static long get_SecondsLeft() { }

	// RVA: 0x2293404 Offset: 0x228F404 VA: 0x2293404
	public static long get_RunSecondsLeft() { }

	// RVA: 0x2293594 Offset: 0x228F594 VA: 0x2293594
	public static string TimeText(long s) { }

	// RVA: 0x22934D0 Offset: 0x228F4D0 VA: 0x22934D0
	public static WinStreakSave get_S() { }

	// RVA: 0x229359C Offset: 0x228F59C VA: 0x229359C
	private static void Store() { }

	// RVA: 0x2293628 Offset: 0x228F628 VA: 0x2293628
	public static void Reload() { }

	// RVA: 0x2293690 Offset: 0x228F690 VA: 0x2293690
	public static WinStreak.Phase get_Current() { }

	// RVA: 0x2293A18 Offset: 0x228FA18 VA: 0x2293A18
	public static void Start() { }

	// RVA: 0x2293BFC Offset: 0x228FBFC VA: 0x2293BFC
	public static void OnLevelStart() { }

	// RVA: 0x2293C80 Offset: 0x228FC80 VA: 0x2293C80
	public static void OnBoot() { }

	// RVA: 0x22940BC Offset: 0x22900BC VA: 0x22940BC
	public static void OnWin() { }

	// RVA: 0x2293E0C Offset: 0x228FE0C VA: 0x2293E0C
	public static void OnLose() { }

	// RVA: 0x22943DC Offset: 0x22903DC VA: 0x22943DC
	public static int LastCheckpointFloor(int floor) { }

	// RVA: 0x229451C Offset: 0x229051C VA: 0x229451C
	public static bool get_WouldLoseProgress() { }

	// RVA: 0x2294568 Offset: 0x2290568 VA: 0x2294568
	public static bool Claimed(WinStreakCheckpoint cp) { }

	// RVA: 0x22937E4 Offset: 0x228F7E4 VA: 0x22937E4
	public static List<WinStreakCheckpoint> ReachedUnclaimed() { }

	// RVA: 0x22945C8 Offset: 0x22905C8 VA: 0x22945C8
	public static List<KeyValuePair<int, long>> Claim(WinStreakCheckpoint cp) { }

	// RVA: 0x2294AC4 Offset: 0x2290AC4 VA: 0x2294AC4
	public static List<KeyValuePair<int, long>> ClaimAll() { }

	// RVA: 0x2294FF4 Offset: 0x2290FF4 VA: 0x2294FF4
	public static void MarkShown(int floor) { }

	// RVA: 0x2295024 Offset: 0x2291024 VA: 0x2295024
	public static void ConsumePlus() { }

	// RVA: 0x2295058 Offset: 0x2291058 VA: 0x2295058
	public static void MarkTutorial() { }

	// RVA: 0x2295078 Offset: 0x2291078 VA: 0x2295078
	public static bool get_WantsHome() { }

	// RVA: 0x22950C0 Offset: 0x22910C0 VA: 0x22950C0
	public static float SegmentProgress() { }
}

