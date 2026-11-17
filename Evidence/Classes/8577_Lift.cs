// Namespace: Dino.BusSand.Core
public sealed class Lift // TypeDefIndex: 8577
{
	// Fields
	public readonly int Id; // 0x10
	public readonly double Cx; // 0x18
	public readonly double Cz; // 0x20
	public readonly LiftPlatform Platform; // 0x28
	public readonly List<List<LiftCar>> Floors; // 0x30
	public BusObb Lid; // 0x38
	public const double LidMargin = 0.3;
	public readonly List<int> Occupants; // 0x68

	// Properties
	public int Remaining { get; }
	public int FloorsLeft { get; }
	public bool IsSpent { get; }
	public int Occupant { get; }
	[TupleElementNames(new[] { "id", "kind", "angle" })]
	public IEnumerable<ValueTuple<int, BusKind, int>> Queue { get; }

	// Methods

	// RVA: 0x242E0F4 Offset: 0x242A0F4 VA: 0x242E0F4
	public void .ctor(int id, double cx, double cz, int occupant, LiftPlatform platform) { }

	// RVA: 0x242E29C Offset: 0x242A29C VA: 0x242E29C
	public int get_Remaining() { }

	// RVA: 0x242E3E4 Offset: 0x242A3E4 VA: 0x242E3E4
	public int get_FloorsLeft() { }

	// RVA: 0x242E42C Offset: 0x242A42C VA: 0x242E42C
	public bool get_IsSpent() { }

	// RVA: 0x242E4A0 Offset: 0x242A4A0 VA: 0x242E4A0
	public int get_Occupant() { }

	[IteratorStateMachine(typeof(Lift.<get_Queue>d__18))]
	// RVA: 0x242E51C Offset: 0x242A51C VA: 0x242E51C
	public IEnumerable<ValueTuple<int, BusKind, int>> get_Queue() { }

	// RVA: 0x242E5D0 Offset: 0x242A5D0 VA: 0x242E5D0
	public void Prune(TruckGrid yard) { }

	// RVA: 0x242E6B0 Offset: 0x242A6B0 VA: 0x242E6B0
	public bool CanEmit(TruckGrid yard) { }
}

