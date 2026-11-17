// Namespace: Dino.BusSand.App.Meta
public static class BoosterIntro // TypeDefIndex: 3967
{
	// Fields
	private static readonly int[] Boosters; // 0x0
	public const int ScheduleVersion = 2;

	// Properties
	public static int[] Order { get; }
	public static int FirstLevel { get; }

	// Methods

	// RVA: 0x22025B0 Offset: 0x21FE5B0 VA: 0x22025B0
	public static int[] get_Order() { }

	// RVA: 0x220272C Offset: 0x21FE72C VA: 0x220272C
	public static int LegacyUnlockLevel(int item) { }

	// RVA: 0x2202754 Offset: 0x21FE754 VA: 0x2202754
	public static int Level(int item) { }

	// RVA: 0x22031FC Offset: 0x21FF1FC VA: 0x22031FC
	public static int get_FirstLevel() { }

	// RVA: 0x2202AC4 Offset: 0x21FEAC4 VA: 0x2202AC4
	public static void Migrate() { }

	// RVA: 0x2203308 Offset: 0x21FF308 VA: 0x2203308
	public static Dictionary<int, int> Plan(int level, Func<int, bool> gifted, Func<int, bool> taught) { }

	// RVA: 0x2203904 Offset: 0x21FF904 VA: 0x2203904
	private static void .cctor() { }
}

