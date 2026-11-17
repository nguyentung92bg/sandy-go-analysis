// Namespace: Dino.GameCommon
[Serializable]
public class RemoveLevelPayload // TypeDefIndex: 13359
{
	// Fields
	public LevelRemapDataByIndex[] LevelRemapDataByIndex; // 0x10
	public LevelRemapDataById[] LevelRemapDataById; // 0x18

	// Properties
	public static RemoveLevelPayload Default { get; }

	// Methods

	// RVA: 0x246004C Offset: 0x245C04C VA: 0x246004C
	public static RemoveLevelPayload get_Default() { }

	// RVA: 0x245FF28 Offset: 0x245BF28 VA: 0x245FF28
	public int GetRemapLevelIndex(int origin) { }

	// RVA: 0x245FFC8 Offset: 0x245BFC8 VA: 0x245FFC8
	public string GetRemapLevelId(string origin) { }

	// RVA: 0x2460220 Offset: 0x245C220 VA: 0x2460220
	public void .ctor() { }
}

