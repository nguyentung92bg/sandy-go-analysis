// Namespace: Dino.BusSand.Core
[Serializable]
public sealed class LevelData // TypeDefIndex: 8528
{
	// Fields
	public int StageIndex; // 0x10
	public int Seed; // 0x14
	public BoardDef Board; // 0x18
	public RoadDef Road; // 0x20
	public TimingDef Timing; // 0x28
	public YardDef Yard; // 0x30
	public string[] ColorNames; // 0x38
	public string[] ColorHex; // 0x40
	public bool Generated; // 0x48
	public string Title; // 0x50
	public string Reveal; // 0x58
	public int TutorialShuffleSeed; // 0x60
	public string SourceName; // 0x68

	// Methods

	// RVA: 0x240CA28 Offset: 0x2408A28 VA: 0x240CA28
	public Color32 ColorOf(string name) { }

	// RVA: 0x2410B28 Offset: 0x240CB28 VA: 0x2410B28
	public static Color32 ParseHex(string hex) { }

	// RVA: 0x2410944 Offset: 0x240C944 VA: 0x2410944
	public static LevelData Load(int level) { }

	// RVA: 0x2410854 Offset: 0x240C854 VA: 0x2410854
	public static LevelData LoadByName(string file) { }

	// RVA: 0x2410CA0 Offset: 0x240CCA0 VA: 0x2410CA0
	public static LevelData FromJson(string json) { }

	// RVA: 0x2410CE8 Offset: 0x240CCE8 VA: 0x2410CE8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2410C1C Offset: 0x240CC1C VA: 0x2410C1C
	internal static byte <ParseHex>g__H|14_0(int i, ref LevelData.<>c__DisplayClass14_0 ) { }
}

