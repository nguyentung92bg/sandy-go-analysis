// Namespace: Dino.BusSand.Core
public sealed class Truck // TypeDefIndex: 8569
{
	// Fields
	public readonly int Id; // 0x10
	public double Cx; // 0x18
	public double Cz; // 0x20
	public int AngleIndex; // 0x28
	public readonly BusKind Kind; // 0x2C
	public int Fuel; // 0x30
	public int Lock; // 0x34
	public int Key; // 0x38
	public bool Shift; // 0x3C
	public int Chain; // 0x40
	public bool FireTruck; // 0x44
	public int LiftId; // 0x48
	public byte Color; // 0x4C

	// Properties
	public BusObb Obb { get; }

	// Methods

	// RVA: 0x2421F18 Offset: 0x241DF18 VA: 0x2421F18
	public void .ctor(int id, double cx, double cz, int angle, BusKind kind) { }

	// RVA: 0x242CAB0 Offset: 0x2428AB0 VA: 0x242CAB0
	public BusObb get_Obb() { }
}

