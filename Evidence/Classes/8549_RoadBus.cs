// Namespace: Dino.BusSand.Core
public sealed class RoadBus // TypeDefIndex: 8549
{
	// Fields
	public int TruckId; // 0x10
	public byte Color; // 0x14
	public BusKind Kind; // 0x18
	public int LengthGrains; // 0x1C
	public int CapacityGrains; // 0x20
	public int Collected; // 0x24
	public RoadBusState State; // 0x28
	public long ReadyTick; // 0x30
	public int EntrySequence; // 0x38
	public double Position; // 0x40
	public double PrevPosition; // 0x48
	public bool OnEntryRun; // 0x50
	public int Laps; // 0x54
	public int LeavingTicks; // 0x58
	public int Chain; // 0x5C
	public int TrainAhead; // 0x60
	public bool Coupled; // 0x64

	// Properties
	public double Half { get; }
	public double Rear { get; }
	public double Front { get; }
	public float Progress { get; }
	public bool IsComplete { get; }
	public bool CountsTowardCapacity { get; }
	public bool IsLeaving { get; }
	public bool IsOnRoad { get; }
	public bool HasRoadPosition { get; }
	public int Remaining { get; }
	public bool IsHeld { get; }

	// Methods

	// RVA: 0x24117D4 Offset: 0x240D7D4 VA: 0x24117D4
	public double get_Half() { }

	// RVA: 0x24117E0 Offset: 0x240D7E0 VA: 0x24117E0
	public double get_Rear() { }

	// RVA: 0x24117FC Offset: 0x240D7FC VA: 0x24117FC
	public double get_Front() { }

	// RVA: 0x2411810 Offset: 0x240D810 VA: 0x2411810
	public float get_Progress() { }

	// RVA: 0x2411838 Offset: 0x240D838 VA: 0x2411838
	public bool get_IsComplete() { }

	// RVA: 0x2411848 Offset: 0x240D848 VA: 0x2411848
	public bool get_CountsTowardCapacity() { }

	// RVA: 0x2411858 Offset: 0x240D858 VA: 0x2411858
	public bool get_IsLeaving() { }

	// RVA: 0x241186C Offset: 0x240D86C VA: 0x241186C
	public bool get_IsOnRoad() { }

	// RVA: 0x2411880 Offset: 0x240D880 VA: 0x2411880
	public bool get_HasRoadPosition() { }

	// RVA: 0x24118A8 Offset: 0x240D8A8 VA: 0x24118A8
	public int get_Remaining() { }

	// RVA: 0x2411908 Offset: 0x240D908 VA: 0x2411908
	public bool get_IsHeld() { }

	// RVA: 0x2411938 Offset: 0x240D938 VA: 0x2411938
	public void .ctor() { }
}

