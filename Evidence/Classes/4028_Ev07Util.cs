// Namespace: Dino.BusSand.App.Meta
internal static class Ev07Util // TypeDefIndex: 4028
{
	// Fields
	public const long DayMs = 86400000;
	public const long WeekMs = 604800000;
	public const int ItemCoins = 1001;
	public const int ItemShuffle = 10002;
	public const int ItemPickUp = 10003;
	public const int ItemWand = 10004;
	public const int ItemExtraSlot = 10005;

	// Methods

	// RVA: 0x222D944 Offset: 0x2229944 VA: 0x222D944
	public static long DayOf(long nowMs) { }

	// RVA: 0x222D994 Offset: 0x2229994 VA: 0x222D994
	public static void CivilFromDay(long day, out int year, out int month, out int dom) { }

	// RVA: 0x222DB10 Offset: 0x2229B10 VA: 0x222DB10
	public static int DaysInMonth(int year, int month) { }

	// RVA: 0x222DBB0 Offset: 0x2229BB0 VA: 0x222DBB0
	public static long WeekStartMs(long nowMs) { }

	// RVA: 0x222DC3C Offset: 0x2229C3C VA: 0x222DC3C
	public static long WeekIndex(long weekStartMs) { }

	// RVA: 0x222DCAC Offset: 0x2229CAC VA: 0x222DCAC
	public static List<int[]> Reward(int[] itemCountPairs) { }
}

