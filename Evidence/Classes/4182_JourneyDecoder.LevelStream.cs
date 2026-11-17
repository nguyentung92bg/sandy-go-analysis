// Namespace: 
public sealed class JourneyDecoder.LevelStream // TypeDefIndex: 4182
{
	// Fields
	public int Kind; // 0x10
	public int Flags; // 0x14
	public uint LevelHash; // 0x18
	public int EntryRunGrains; // 0x1C
	public int ExitRunGrains; // 0x20
	public int SideMarginGrains; // 0x24
	public int MinGapGrains; // 0x28
	public float Speed; // 0x2C
	public int Shuffle; // 0x30
	public int PickUp; // 0x34
	public int Wand; // 0x38
	public int ExtraSlot; // 0x3C
	public int HeadStart; // 0x40
	public int PlusSlot; // 0x44
	public int EndSuctionPct; // 0x48
	public int EndSuctionDepth; // 0x4C
	public readonly List<JourneyDecoder.LevelOp> Ops; // 0x50
	public string Error; // 0x58

	// Properties
	public bool Cut { get; }
	public bool Forced { get; }
	public JourneyDecoder.LevelOp End { get; }

	// Methods

	// RVA: 0x2297C18 Offset: 0x2293C18 VA: 0x2297C18
	public bool get_Cut() { }

	// RVA: 0x2297C24 Offset: 0x2293C24 VA: 0x2297C24
	public bool get_Forced() { }

	// RVA: 0x2297C30 Offset: 0x2293C30 VA: 0x2297C30
	public JourneyDecoder.LevelOp get_End() { }

	// RVA: 0x2296B4C Offset: 0x2292B4C VA: 0x2296B4C
	public void .ctor() { }
}

