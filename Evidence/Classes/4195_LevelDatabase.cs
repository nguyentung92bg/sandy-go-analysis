// Namespace: Dino.BusSand.App.Levels
public static class LevelDatabase // TypeDefIndex: 4195
{
	// Fields
	public const int DefaultBulletCount = 15;
	private static readonly Dictionary<int, LevelData> Cache; // 0x0

	// Methods

	// RVA: 0x229AD40 Offset: 0x2296D40 VA: 0x229AD40
	public static int DesignLevelId(int displayLevel) { }

	// RVA: 0x229ADF4 Offset: 0x2296DF4 VA: 0x229ADF4
	public static LevelType TypeOf(int designId) { }

	// RVA: 0x229AE54 Offset: 0x2296E54 VA: 0x229AE54
	public static LevelData Get(int designId) { }

	// RVA: 0x229B034 Offset: 0x2297034 VA: 0x229B034
	public static LevelData ForDisplayLevel(int displayLevel) { }

	// RVA: 0x229B08C Offset: 0x229708C VA: 0x229B08C
	public static int BusCount(LevelData l) { }

	// RVA: 0x229B098 Offset: 0x2297098 VA: 0x229B098
	private static void .cctor() { }
}

