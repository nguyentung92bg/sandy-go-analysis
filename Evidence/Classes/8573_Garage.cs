// Namespace: Dino.BusSand.Core
public sealed class Garage // TypeDefIndex: 8573
{
	// Fields
	public const double BodyLength = 4.0152;
	public const double BodyWidth = 3.3558;
	public const double ClearanceCells = 0.5;
	public readonly int Id; // 0x10
	public readonly double Cx; // 0x18
	public readonly double Cz; // 0x20
	public readonly int AngleIndex; // 0x28
	[TupleElementNames(new[] { "id", "kind" })]
	public readonly List<ValueTuple<int, BusKind>> Queue; // 0x30
	public int Occupant; // 0x38
	public const double BlockLength = 2.262484080370943;
	public const double BlockWidth = 2.0711093262879787;

	// Properties
	public int Remaining { get; }
	public bool IsSpent { get; }
	public BusObb BodyObb { get; }
	public BusObb BlockObb { get; }

	// Methods

	// RVA: 0x2423AC0 Offset: 0x241FAC0 VA: 0x2423AC0
	public int get_Remaining() { }

	// RVA: 0x242B764 Offset: 0x2427764 VA: 0x242B764
	public bool get_IsSpent() { }

	// RVA: 0x242202C Offset: 0x241E02C VA: 0x242202C
	public void .ctor(int id, double cx, double cz, int angle) { }

	// RVA: 0x242E044 Offset: 0x242A044 VA: 0x242E044
	public BusObb get_BodyObb() { }

	// RVA: 0x2429E68 Offset: 0x2425E68 VA: 0x2429E68
	public BusObb get_BlockObb() { }

	// RVA: 0x242B678 Offset: 0x2427678 VA: 0x242B678
	public void ExitCenter(BusKind kind, out double x, out double z) { }

	// RVA: 0x242A31C Offset: 0x242631C VA: 0x242A31C
	public bool CanEmit(TruckGrid yard) { }
}

