// Namespace: Dino.BusSand.Core
public sealed class StageEngine // TypeDefIndex: 8566
{
	// Fields
	public const int TicksPerSecond = 60;
	public const double SecondsPerTick = 0.016666666666666666;
	public readonly LevelData Level; // 0x10
	public readonly SandGrid Grid; // 0x18
	public readonly Road Road; // 0x20
	public readonly TruckGrid Yard; // 0x28
	public readonly List<Garage> Garages; // 0x30
	public readonly List<Lift> Lifts; // 0x38
	public readonly List<Lane> Lanes; // 0x40
	public readonly List<Dune> Dunes; // 0x48
	public readonly Dictionary<int, TruckPayload> Payloads; // 0x50
	public readonly Dictionary<int, BusKind> Kinds; // 0x58
	public readonly HashSet<int> Hidden; // 0x60
	public readonly HashSet<int> Revealed; // 0x68
	public readonly List<byte> Colors; // 0x70
	[CompilerGenerated]
	private long <CurrentTick>k__BackingField; // 0x78
	[CompilerGenerated]
	private bool <IsTerminal>k__BackingField; // 0x80
	[CompilerGenerated]
	private bool <IsCleared>k__BackingField; // 0x81
	[CompilerGenerated]
	private FailReason <FailReason>k__BackingField; // 0x84
	[CompilerGenerated]
	private readonly int <TotalBuses>k__BackingField; // 0x88
	[CompilerGenerated]
	private readonly int <ExitGraceTicks>k__BackingField; // 0x8C
	private readonly Dictionary<int, long> _pendingExits; // 0x90
	private readonly List<SimEvent> _evts; // 0x98
	private readonly int[] _colorPresent; // 0xA0
	private readonly int _softLockTicks; // 0xA8
	private readonly int _softLockGrains; // 0xAC
	private long _softMarkTick; // 0xB0
	private int _softMarkCount; // 0xB8
	private readonly List<BusObb> _staticObjects; // 0xC0
	[TupleElementNames(new[] { "obb", "color" })]
	private readonly List<ValueTuple<BusObb, byte>> _gates; // 0xC8
	private readonly bool _hasFireTruck; // 0xD0
	private double _accumulator; // 0xD8
	public float MaxCatchUpSeconds; // 0xE0
	[CompilerGenerated]
	private int <RescueTicksLeft>k__BackingField; // 0xE4
	public const int LeavingGraceTicks = 120;
	private int _jamHolds; // 0xE8
	public int EndSuctionThresholdPct; // 0xEC
	public int EndSuctionDepthGrains; // 0xF0
	[CompilerGenerated]
	private bool <EndSuctionLatched>k__BackingField; // 0xF4
	[CompilerGenerated]
	private long <EndSuctionTick>k__BackingField; // 0xF8
	[CompilerGenerated]
	private int <EndSuctionGrainsLeft>k__BackingField; // 0x100
	private int _initialGrains; // 0x104
	public bool LastGrainsSweep; // 0x108
	public int SweepDelayTicks; // 0x10C
	public int SweepStallTicks; // 0x110
	public double SweepMaxShare; // 0x118
	private long _lastSuctionTick; // 0x120
	private readonly Dictionary<int, int> _dryTicks; // 0x128
	public Func<int, int> InboundTicksFor; // 0x130
	public const double StationCentreZ = 0.4468;
	public const double StationHalfX = 1.6343;
	public const double StationHalfZ = 1.7096;
	[TupleElementNames(new[] { "truck", "obb" })]
	private readonly List<ValueTuple<int, BusObb>> _stations; // 0x138

	// Properties
	public long CurrentTick { get; set; }
	public bool IsTerminal { get; set; }
	public bool IsCleared { get; set; }
	public FailReason FailReason { get; set; }
	public int TotalBuses { get; }
	public int ExitGraceTicks { get; }
	public int BusesLeft { get; }
	public int GarageRemaining { get; }
	public int LiftRemaining { get; }
	public int LaneRemaining { get; }
	public float Progress { get; }
	public bool IsClearedBoard { get; }
	public bool ShouldAutoSpeedUp { get; }
	public int RescueTicksLeft { get; set; }
	public bool FireTruckInLot { get; }
	public bool RoadEmpty { get; }
	public float Alpha { get; }
	public float JamPressure { get; }
	public bool JamClockPaused { get; }
	public bool EndSuctionLatched { get; set; }
	public long EndSuctionTick { get; set; }
	public int EndSuctionGrainsLeft { get; set; }
	public int InitialGrains { get; }
	public int SandLeftPermille { get; }
	public bool CanShuffle { get; }
	private bool RoadEffectivelyFull { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x241E47C Offset: 0x241A47C VA: 0x241E47C
	public long get_CurrentTick() { }

	[CompilerGenerated]
	// RVA: 0x241E484 Offset: 0x241A484 VA: 0x241E484
	private void set_CurrentTick(long value) { }

	[CompilerGenerated]
	// RVA: 0x241E48C Offset: 0x241A48C VA: 0x241E48C
	public bool get_IsTerminal() { }

	[CompilerGenerated]
	// RVA: 0x241E494 Offset: 0x241A494 VA: 0x241E494
	private void set_IsTerminal(bool value) { }

	[CompilerGenerated]
	// RVA: 0x241E49C Offset: 0x241A49C VA: 0x241E49C
	public bool get_IsCleared() { }

	[CompilerGenerated]
	// RVA: 0x241E4A4 Offset: 0x241A4A4 VA: 0x241E4A4
	private void set_IsCleared(bool value) { }

	[CompilerGenerated]
	// RVA: 0x241E4AC Offset: 0x241A4AC VA: 0x241E4AC
	public FailReason get_FailReason() { }

	[CompilerGenerated]
	// RVA: 0x241E4B4 Offset: 0x241A4B4 VA: 0x241E4B4
	private void set_FailReason(FailReason value) { }

	[CompilerGenerated]
	// RVA: 0x241E4BC Offset: 0x241A4BC VA: 0x241E4BC
	public int get_TotalBuses() { }

	[CompilerGenerated]
	// RVA: 0x241E4C4 Offset: 0x241A4C4 VA: 0x241E4C4
	public int get_ExitGraceTicks() { }

	// RVA: 0x241E4CC Offset: 0x241A4CC VA: 0x241E4CC
	public void .ctor(LevelData level, StageOptions options) { }

	// RVA: 0x242362C Offset: 0x241F62C VA: 0x242362C
	public int get_BusesLeft() { }

	// RVA: 0x24236F8 Offset: 0x241F6F8 VA: 0x24236F8
	public int get_GarageRemaining() { }

	// RVA: 0x2423838 Offset: 0x241F838 VA: 0x2423838
	public int get_LiftRemaining() { }

	// RVA: 0x242397C Offset: 0x241F97C VA: 0x242397C
	public int get_LaneRemaining() { }

	// RVA: 0x2423B08 Offset: 0x241FB08 VA: 0x2423B08
	public float get_Progress() { }

	// RVA: 0x2423B90 Offset: 0x241FB90 VA: 0x2423B90
	public bool CanEscape(int id) { }

	// RVA: 0x2423BEC Offset: 0x241FBEC VA: 0x2423BEC
	public bool CanTapTruck(int id) { }

	// RVA: 0x2423CE8 Offset: 0x241FCE8 VA: 0x2423CE8
	public bool IsColorHidden(int id) { }

	// RVA: 0x2424554 Offset: 0x2420554 VA: 0x2424554
	public bool get_IsClearedBoard() { }

	// RVA: 0x2424960 Offset: 0x2420960 VA: 0x2424960
	public bool get_ShouldAutoSpeedUp() { }

	[CompilerGenerated]
	// RVA: 0x24249E4 Offset: 0x24209E4 VA: 0x24249E4
	public int get_RescueTicksLeft() { }

	[CompilerGenerated]
	// RVA: 0x24249EC Offset: 0x24209EC VA: 0x24249EC
	private void set_RescueTicksLeft(int value) { }

	// RVA: 0x24249F4 Offset: 0x24209F4 VA: 0x24249F4
	public bool get_FireTruckInLot() { }

	// RVA: 0x2424B44 Offset: 0x2420B44 VA: 0x2424B44
	public float DuneProgress(int objectIndex) { }

	// RVA: 0x2423258 Offset: 0x241F258 VA: 0x2423258
	private static int RescueTicks(float seconds) { }

	// RVA: 0x2424D6C Offset: 0x2420D6C VA: 0x2424D6C
	public bool WillCollectSoon(int truckId) { }

	// RVA: 0x2424E00 Offset: 0x2420E00 VA: 0x2424E00
	public List<SimEvent> Advance(double dt) { }

	// RVA: 0x24251C4 Offset: 0x24211C4 VA: 0x24251C4
	public List<SimEvent> AdvanceOutro(double dt) { }

	// RVA: 0x24252FC Offset: 0x24212FC VA: 0x24252FC
	public bool get_RoadEmpty() { }

	// RVA: 0x2425324 Offset: 0x2421324 VA: 0x2425324
	public float get_Alpha() { }

	// RVA: 0x241DBD8 Offset: 0x2419BD8 VA: 0x241DBD8
	public List<SimEvent> Tick() { }

	// RVA: 0x2424F0C Offset: 0x2420F0C VA: 0x2424F0C
	private void TickInto(List<SimEvent> evts) { }

	// RVA: 0x2425878 Offset: 0x2421878 VA: 0x2425878
	private void TickRescueTimer(List<SimEvent> evts) { }

	// RVA: 0x24255D0 Offset: 0x24215D0 VA: 0x24255D0
	private void CheckDunes(List<SimEvent> evts) { }

	// RVA: 0x2426A34 Offset: 0x2422A34 VA: 0x2426A34
	public float get_JamPressure() { }

	// RVA: 0x24267E8 Offset: 0x24227E8 VA: 0x24267E8
	private void CheckSoftLock(List<SimEvent> evts) { }

	// RVA: 0x2426D28 Offset: 0x2422D28 VA: 0x2426D28
	public void PauseJamClock() { }

	// RVA: 0x2426D38 Offset: 0x2422D38 VA: 0x2426D38
	public void ResumeJamClock() { }

	// RVA: 0x2426D4C Offset: 0x2422D4C VA: 0x2426D4C
	public bool get_JamClockPaused() { }

	// RVA: 0x2426D5C Offset: 0x2422D5C VA: 0x2426D5C
	public void ResetJamClock() { }

	[CompilerGenerated]
	// RVA: 0x2426D80 Offset: 0x2422D80 VA: 0x2426D80
	public bool get_EndSuctionLatched() { }

	[CompilerGenerated]
	// RVA: 0x2426D88 Offset: 0x2422D88 VA: 0x2426D88
	private void set_EndSuctionLatched(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2426D90 Offset: 0x2422D90 VA: 0x2426D90
	public long get_EndSuctionTick() { }

	[CompilerGenerated]
	// RVA: 0x2426D98 Offset: 0x2422D98 VA: 0x2426D98
	private void set_EndSuctionTick(long value) { }

	[CompilerGenerated]
	// RVA: 0x2426DA0 Offset: 0x2422DA0 VA: 0x2426DA0
	public int get_EndSuctionGrainsLeft() { }

	[CompilerGenerated]
	// RVA: 0x2426DA8 Offset: 0x2422DA8 VA: 0x2426DA8
	private void set_EndSuctionGrainsLeft(int value) { }

	// RVA: 0x2426DB0 Offset: 0x2422DB0 VA: 0x2426DB0
	public int get_InitialGrains() { }

	// RVA: 0x2426DB8 Offset: 0x2422DB8 VA: 0x2426DB8
	public int get_SandLeftPermille() { }

	// RVA: 0x242539C Offset: 0x242139C VA: 0x242539C
	private void CheckEndSuction() { }

	// RVA: 0x2425D50 Offset: 0x2421D50 VA: 0x2425D50
	private bool TrySweep(List<SimEvent> evts, bool immediate) { }

	// RVA: 0x2426DF0 Offset: 0x2422DF0 VA: 0x2426DF0
	private bool IsLastOfColor(RoadBus bus) { }

	// RVA: 0x2425418 Offset: 0x2421418 VA: 0x2425418
	private void CheckColorsCleared(List<SimEvent> evts) { }

	// RVA: 0x24258E0 Offset: 0x24218E0 VA: 0x24258E0
	private void ExpireExits(List<SimEvent> evts) { }

	// RVA: 0x241D6D8 Offset: 0x24196D8 VA: 0x241D6D8
	public List<SimEvent> TapTruck(int id) { }

	// RVA: 0x242796C Offset: 0x242396C VA: 0x242796C
	private static int WaitingReason(Truck t, List<Truck> chain) { }

	// RVA: 0x2427BF8 Offset: 0x2423BF8 VA: 0x2427BF8
	private void SaveFireTruck(Truck t, List<SimEvent> evts) { }

	// RVA: 0x2427E1C Offset: 0x2423E1C VA: 0x2427E1C
	private void CommitExit(Truck t, bool byPickup, List<SimEvent> evts) { }

	// RVA: 0x2428D10 Offset: 0x2424D10 VA: 0x2428D10
	private void AfterInput(List<SimEvent> evts) { }

	// RVA: 0x2428DFC Offset: 0x2424DFC VA: 0x2428DFC
	public List<SimEvent> PickupTruck(int id) { }

	// RVA: 0x2429170 Offset: 0x2425170 VA: 0x2429170
	public List<SimEvent> ExpandRoadCapacity() { }

	// RVA: 0x24293A0 Offset: 0x24253A0 VA: 0x24293A0
	public List<SimEvent> AddRescueTime(float seconds) { }

	// RVA: 0x242951C Offset: 0x242551C VA: 0x242951C
	public List<SimEvent> AbsorbColorIntoRoadBus(int truckId, int sampleStride = 24) { }

	// RVA: 0x24296B0 Offset: 0x24256B0 VA: 0x24296B0
	private List<SimEvent> AbsorbInto(int truckId, int sampleStride) { }

	// RVA: 0x2429894 Offset: 0x2425894 VA: 0x2429894
	public List<SimEvent> ResumeByFillingRoadBus(int busCount = 1, int sampleStride = 24) { }

	// RVA: 0x2429A28 Offset: 0x2425A28 VA: 0x2429A28
	public bool get_CanShuffle() { }

	// RVA: 0x2429A40 Offset: 0x2425A40 VA: 0x2429A40
	public List<SimEvent> ShuffleTruckColors(int seed) { }

	// RVA: 0x2429D80 Offset: 0x2425D80 VA: 0x2429D80
	private bool StationOn(int truck) { }

	// RVA: 0x2428BBC Offset: 0x2424BBC VA: 0x2428BBC
	private void SyncStations(List<SimEvent> evts) { }

	// RVA: 0x24229DC Offset: 0x241E9DC VA: 0x24229DC
	private void BuildLiftLids() { }

	// RVA: 0x2429114 Offset: 0x2425114 VA: 0x2429114
	public bool IsMechanicVehicle(Truck t) { }

	// RVA: 0x24221E0 Offset: 0x241E1E0 VA: 0x24221E0
	private void SyncBlockers() { }

	// RVA: 0x2429F94 Offset: 0x2425F94 VA: 0x2429F94
	private bool AnyEmitterCanEmit() { }

	// RVA: 0x24220EC Offset: 0x241E0EC VA: 0x24220EC
	private static void ApplyLiftDef(Truck t, BusDef b) { }

	// RVA: 0x242A458 Offset: 0x2426458 VA: 0x242A458
	private Truck Spawn(int id, double x, double z, int angle, BusKind kind) { }

	// RVA: 0x24231B8 Offset: 0x241F1B8 VA: 0x24231B8
	private void EmitFromGarages(List<SimEvent> evts) { }

	// RVA: 0x242AA78 Offset: 0x2426A78 VA: 0x242AA78
	private void EmitFromLifts(List<SimEvent> evts) { }

	// RVA: 0x242B140 Offset: 0x2427140 VA: 0x242B140
	private void EmitFromLanes(List<SimEvent> evts) { }

	// RVA: 0x242A534 Offset: 0x2426534 VA: 0x242A534
	private void EmitFromGaragesOnly(List<SimEvent> evts) { }

	// RVA: 0x242B7C4 Offset: 0x24277C4 VA: 0x242B7C4
	public Garage GarageById(int gid) { }

	// RVA: 0x2423348 Offset: 0x241F348 VA: 0x2423348
	private void RefreshHiddenReveals(List<SimEvent> evts) { }

	// RVA: 0x2426550 Offset: 0x2422550 VA: 0x2426550
	private void EvaluateTermination(List<SimEvent> evts) { }

	// RVA: 0x2426AD8 Offset: 0x2422AD8 VA: 0x2426AD8
	private bool get_RoadEffectivelyFull() { }

	// RVA: 0x242BA64 Offset: 0x2427A64 VA: 0x242BA64
	private bool AnyDuneStanding() { }

	// RVA: 0x24268E4 Offset: 0x24228E4 VA: 0x24268E4
	private void Terminate(List<SimEvent> evts, bool cleared, FailReason reason) { }

	// RVA: 0x242BB94 Offset: 0x2427B94 VA: 0x242BB94
	public List<SimEvent> ForceEnd(bool cleared, FailReason reason = 0) { }

	// RVA: 0x241D654 Offset: 0x2419654 VA: 0x241D654
	public List<SimEvent> Settle() { }
}

