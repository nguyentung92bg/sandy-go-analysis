// Namespace: Dino.BusSand.Core
[Serializable]
public sealed class BusDef // TypeDefIndex: 8539
{
	// Fields
	public float CenterX; // 0x10
	public float CenterZ; // 0x14
	public int AngleIndex; // 0x18
	public string Kind; // 0x20
	public string Color; // 0x28
	public bool Hidden; // 0x30
	public int Fuel; // 0x34
	public int Lock; // 0x38
	public int Key; // 0x3C
	public bool Shift; // 0x40
	public int Chain; // 0x44
	public bool FireTruck; // 0x48
	public List<LiftBusDef> Below; // 0x50
	public StationDef Station; // 0x58

	// Properties
	public bool HasStation { get; }

	// Methods

	// RVA: 0x2410D40 Offset: 0x240CD40 VA: 0x2410D40
	public bool get_HasStation() { }

	// RVA: 0x2410D6C Offset: 0x240CD6C VA: 0x2410D6C
	public void .ctor() { }
}

