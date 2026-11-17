// Namespace: Dino.BusSand.Core
public sealed class Lane // TypeDefIndex: 8578
{
	// Fields
	public const double InnerWidth = 2.3;
	public const double WallThickness = 0.25;
	public const double MouthMargin = 0.05;
	public const double QueueGap = 0.22;
	public readonly int Id; // 0x10
	[TupleElementNames(new[] { "x", "z" })]
	public readonly List<ValueTuple<double, double>> Path; // 0x18
	public readonly int AngleIndex; // 0x20
	[TupleElementNames(new[] { "id", "kind" })]
	public readonly List<ValueTuple<int, BusKind>> Queue; // 0x28
	public int Occupant; // 0x30
	public BusKind OccupantKind; // 0x34

	// Properties
	public int Remaining { get; }
	public bool IsSpent { get; }
	public double PathLength { get; }
	public double RequiredLength { get; }
	public double CutDistance { get; }
	public double ActiveLength { get; }

	// Methods

	// RVA: 0x242EE54 Offset: 0x242AE54 VA: 0x242EE54
	public int get_Remaining() { }

	// RVA: 0x242EE9C Offset: 0x242AE9C VA: 0x242EE9C
	public bool get_IsSpent() { }

	// RVA: 0x242EEFC Offset: 0x242AEFC VA: 0x242EEFC
	public double get_PathLength() { }

	// RVA: 0x242F034 Offset: 0x242B034 VA: 0x242F034
	public double get_RequiredLength() { }

	// RVA: 0x242F1FC Offset: 0x242B1FC VA: 0x242F1FC
	public double get_CutDistance() { }

	// RVA: 0x242F98C Offset: 0x242B98C VA: 0x242F98C
	public double get_ActiveLength() { }

	// RVA: 0x242FA08 Offset: 0x242BA08 VA: 0x242FA08
	public List<ValueTuple<double, double>> ActivePath() { }

	// RVA: 0x242F4A8 Offset: 0x242B4A8 VA: 0x242F4A8
	private List<ValueTuple<double, double>> PathTail(double dist) { }

	// RVA: 0x242FABC Offset: 0x242BABC VA: 0x242FABC
	public void .ctor(int id, int angle) { }

	// RVA: 0x242F388 Offset: 0x242B388 VA: 0x242F388
	public void OccupantCenter(BusKind kind, out double x, out double z) { }

	// RVA: 0x242FBBC Offset: 0x242BBBC VA: 0x242FBBC
	public bool CanEmit(TruckGrid yard) { }

	// RVA: 0x242FCEC Offset: 0x242BCEC VA: 0x242FCEC
	public List<BusObb> Walls() { }

	// RVA: 0x24300B0 Offset: 0x242C0B0 VA: 0x24300B0
	public List<BusObb> FullWalls() { }

	// RVA: 0x242FCFC Offset: 0x242BCFC VA: 0x242FCFC
	public static List<BusObb> WallsOf(List<ValueTuple<double, double>> path) { }

	// RVA: 0x242F7DC Offset: 0x242B7DC VA: 0x242F7DC
	private static bool TryEndCap(List<ValueTuple<double, double>> path, out BusObb cap) { }
}

