// Namespace: Dino.BusSand.App.Meta
public static class GiftPackCycle // TypeDefIndex: 4045
{
	// Methods

	// RVA: 0x223208C Offset: 0x222E08C VA: 0x223208C
	public static bool IsFixedCyclePack(GiftPackConfig c) { }

	// RVA: 0x22320EC Offset: 0x222E0EC VA: 0x22320EC
	public static bool IsInCycleTimeWindow(GiftPackConfig c, long unix, bool firstAttempt) { }

	// RVA: 0x22322CC Offset: 0x222E2CC VA: 0x22322CC
	public static string GetCurrentPeriodKey(GiftPackConfig c, long unix) { }

	// RVA: 0x2232608 Offset: 0x222E608 VA: 0x2232608
	public static bool TryGetNextPeriodRange(GiftPackConfig c, long currentPeriodStart, out long start, out long end) { }

	// RVA: 0x2232180 Offset: 0x222E180 VA: 0x2232180
	public static bool TryGetCycleRange(GiftPackConfig c, long unix, out long start, out long end) { }

	// RVA: 0x2232AFC Offset: 0x222EAFC VA: 0x2232AFC
	private static bool WeeklyRange(DateTime now, int cycleType, int startDay, int startSec, int endDay, int endSec, out long start, out long end) { }

	// RVA: 0x22327A0 Offset: 0x222E7A0 VA: 0x22327A0
	private static bool MonthlyRange(DateTime now, int startDay, int startSec, int endDay, int endSec, out long start, out long end) { }

	// RVA: 0x2232998 Offset: 0x222E998 VA: 0x2232998
	private static bool DailyRange(DateTime now, int startSec, int endSec, out long start, out long end) { }

	// RVA: 0x2232E44 Offset: 0x222EE44 VA: 0x2232E44
	private static DateTime MonthDate(int year, int month, int day, int seconds) { }

	// RVA: 0x2232D8C Offset: 0x222ED8C VA: 0x2232D8C
	public static long ToUnix(DateTime utc) { }

	// RVA: 0x2232654 Offset: 0x222E654 VA: 0x2232654
	private static bool TryParseCycleTime(string text, out int field, out int seconds) { }

	// RVA: 0x2232530 Offset: 0x222E530 VA: 0x2232530
	public static int GetIsoWeek(DateTime date) { }

	// RVA: 0x2232F58 Offset: 0x222EF58 VA: 0x2232F58
	public static List<GiftPackCycle.CondGroup> Parse(string json) { }

	// RVA: 0x2233528 Offset: 0x222F528 VA: 0x2233528
	public static long WeekStartUnix(long unix) { }

	// RVA: 0x2233654 Offset: 0x222F654 VA: 0x2233654
	public static int DayKey(long unix) { }
}

