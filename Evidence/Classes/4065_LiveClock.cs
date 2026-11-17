// Namespace: Dino.BusSand.App.Meta
public static class LiveClock // TypeDefIndex: 4065
{
	// Fields
	public static long OffsetMs; // 0x0

	// Properties
	public static long UtcMs { get; }
	public static long UtcSec { get; }
	public static long UtcDay { get; }
	public static DateTime UtcNow { get; }

	// Methods

	// RVA: 0x22295C0 Offset: 0x22255C0 VA: 0x22295C0
	public static long get_UtcMs() { }

	// RVA: 0x2235298 Offset: 0x2231298 VA: 0x2235298
	public static long get_UtcSec() { }

	// RVA: 0x224061C Offset: 0x223C61C VA: 0x224061C
	public static long get_UtcDay() { }

	// RVA: 0x2240648 Offset: 0x223C648 VA: 0x2240648
	public static DateTime get_UtcNow() { }

	// RVA: 0x22406C8 Offset: 0x223C6C8 VA: 0x22406C8
	public static long WeekStartMs(long utcMs) { }

	// RVA: 0x224072C Offset: 0x223C72C VA: 0x224072C
	public static long DayStartMs(long utcMs) { }

	// RVA: 0x2240758 Offset: 0x223C758 VA: 0x2240758
	public static string FormatRemain(long seconds) { }
}

