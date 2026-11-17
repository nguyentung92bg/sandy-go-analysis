// Namespace: Dino.BusSand.Core
public sealed class TruckGrid // TypeDefIndex: 8572
{
	// Fields
	public readonly int Rows; // 0x10
	public readonly int Cols; // 0x14
	private readonly Dictionary<int, Truck> _trucks; // 0x18
	private readonly List<Truck> _ordered; // 0x20
	private readonly List<BusObb> _blockers; // 0x28
	[TupleElementNames(new[] { "obb", "color" })]
	private readonly List<ValueTuple<BusObb, byte>> _gates; // 0x30
	[TupleElementNames(new[] { "obb", "lift" })]
	private readonly List<ValueTuple<BusObb, int>> _lids; // 0x38
	private readonly List<BusObb> _scratch; // 0x40
	[CompilerGenerated]
	private int <Version>k__BackingField; // 0x48
	private int _anyVersion; // 0x4C
	private bool _any; // 0x50
	private int _tapVersion; // 0x54
	private bool _anyTap; // 0x58

	// Properties
	public int Version { get; set; }
	public bool AnyEscapable { get; }
	public bool AnyTappable { get; }
	public ListView<Truck> Trucks { get; }
	public int Count { get; }
	public bool IsEmpty { get; }
	public IReadOnlyList<BusObb> Blockers { get; }
	[TupleElementNames(new[] { "obb", "lift" })]
	public IReadOnlyList<ValueTuple<BusObb, int>> LiftLids { get; }

	// Methods

	// RVA: 0x2421D08 Offset: 0x241DD08 VA: 0x2421D08
	public void .ctor(int rows, int cols) { }

	[CompilerGenerated]
	// RVA: 0x242CB4C Offset: 0x2428B4C VA: 0x242CB4C
	public int get_Version() { }

	[CompilerGenerated]
	// RVA: 0x242CB54 Offset: 0x2428B54 VA: 0x242CB54
	private void set_Version(int value) { }

	// RVA: 0x242CB5C Offset: 0x2428B5C VA: 0x242CB5C
	public bool get_AnyEscapable() { }

	// RVA: 0x242B910 Offset: 0x2427910 VA: 0x242B910
	public bool get_AnyTappable() { }

	// RVA: 0x241C3D0 Offset: 0x24183D0 VA: 0x241C3D0
	public ListView<Truck> get_Trucks() { }

	// RVA: 0x24236A8 Offset: 0x241F6A8 VA: 0x24236A8
	public int get_Count() { }

	// RVA: 0x2424904 Offset: 0x2420904 VA: 0x2424904
	public bool get_IsEmpty() { }

	// RVA: 0x241D34C Offset: 0x241934C VA: 0x241D34C
	public bool TryGet(int id, out Truck t) { }

	// RVA: 0x2421F70 Offset: 0x241DF70 VA: 0x2421F70
	public void Add(Truck t) { }

	// RVA: 0x2428D44 Offset: 0x2424D44 VA: 0x2428D44
	public bool Remove(Truck t) { }

	// RVA: 0x242CCB0 Offset: 0x2428CB0 VA: 0x242CCB0
	private int IndexOf(int id) { }

	// RVA: 0x2429F10 Offset: 0x2425F10 VA: 0x2429F10
	public void SetBlockers(List<BusObb> blockers) { }

	// RVA: 0x242CD88 Offset: 0x2428D88 VA: 0x242CD88
	public IReadOnlyList<BusObb> get_Blockers() { }

	// RVA: 0x2429DE4 Offset: 0x2425DE4 VA: 0x2429DE4
	public void SetLiftLids(List<ValueTuple<BusObb, int>> lids) { }

	// RVA: 0x242CD90 Offset: 0x2428D90 VA: 0x242CD90
	public IReadOnlyList<ValueTuple<BusObb, int>> get_LiftLids() { }

	// RVA: 0x242CD98 Offset: 0x2428D98 VA: 0x242CD98
	public bool CrossesGate(Truck t) { }

	// RVA: 0x2423134 Offset: 0x241F134 VA: 0x2423134
	public void SetColorBlockers(List<ValueTuple<BusObb, byte>> gates) { }

	// RVA: 0x2429D70 Offset: 0x2425D70 VA: 0x2429D70
	public void Invalidate() { }

	// RVA: 0x242CFD0 Offset: 0x2428FD0 VA: 0x242CFD0
	private List<BusObb> CollectObbs(Truck t, bool ignoreChain, out int self) { }

	// RVA: 0x2423BE4 Offset: 0x241FBE4 VA: 0x2423BE4
	public bool CanEscape(Truck t) { }

	// RVA: 0x2427AF4 Offset: 0x2423AF4 VA: 0x2427AF4
	public bool CanEscape(Truck t, bool ignoreChain) { }

	// RVA: 0x241C41C Offset: 0x241841C VA: 0x241C41C
	public bool CanTap(Truck t) { }

	// RVA: 0x241C9F8 Offset: 0x24189F8 VA: 0x241C9F8
	public List<Truck> ChainOf(Truck t) { }

	// RVA: 0x24281D8 Offset: 0x24241D8 VA: 0x24281D8
	public void ApplyExit(IReadOnlyList<Truck> departed, List<SimEvent> evts) { }

	// RVA: 0x242D6AC Offset: 0x24296AC VA: 0x242D6AC
	public double MaxForwardAdvance(Truck t) { }

	// RVA: 0x241CD5C Offset: 0x2418D5C VA: 0x241CD5C
	public List<int> BlockersOf(Truck t, bool ignoreChain = False) { }

	// RVA: 0x242D7AC Offset: 0x24297AC VA: 0x242D7AC
	public bool OverlapsAny(in BusObb o, int ownLift = -1) { }

	// RVA: 0x242DD84 Offset: 0x2429D84 VA: 0x242DD84
	public bool OverlapsAnyTruck(in BusObb o) { }
}

