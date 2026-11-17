// Namespace: Dino.BusSand.Core
public static class BoardBuilder // TypeDefIndex: 8521
{
	// Methods

	// RVA: 0x240C530 Offset: 0x2408530 VA: 0x240C530
	public static SandGrid Build(LevelData level, SandTuning tuning) { }

	// RVA: 0x240CABC Offset: 0x2408ABC VA: 0x240CABC
	private static int PaletteIndex(char ch) { }

	// RVA: 0x240CB9C Offset: 0x2408B9C VA: 0x240CB9C
	private static sbyte NextShade(ref SandRandom rng, SandTuning t) { }

	// RVA: 0x240CC38 Offset: 0x2408C38 VA: 0x240CC38
	public static int[] AssignCapacities(SandGrid grid, IReadOnlyList<ValueTuple<int, byte, BusKind>> buses) { }
}

