// Namespace: Dino.BusSand.Core
public sealed class Road // TypeDefIndex: 8550
{
	// Fields
	private const double Eps = 1E-09;
	public readonly RoadConfig Config; // 0x10
	[CompilerGenerated]
	private readonly int <BoardWidth>k__BackingField; // 0x18
	[CompilerGenerated]
	private readonly int <BoardOffset>k__BackingField; // 0x1C
	[CompilerGenerated]
	private readonly int <StraightLength>k__BackingField; // 0x20
	[CompilerGenerated]
	private readonly int <LoopLength>k__BackingField; // 0x24
	[CompilerGenerated]
	private readonly int <ExitRunGrains>k__BackingField; // 0x28
	[CompilerGenerated]
	private readonly int <EntryRunGrains>k__BackingField; // 0x2C
	[CompilerGenerated]
	private readonly double <EntryRunSpeedMultiplier>k__BackingField; // 0x30
	[CompilerGenerated]
	private int <Capacity>k__BackingField; // 0x38
	private int _depth; // 0x3C
	private int _perTick; // 0x40
	private readonly Dictionary<int, RoadBus> _buses; // 0x48
	private readonly List<RoadBus> _ordered; // 0x50
	private readonly List<RoadBus> _iteration; // 0x58
	private readonly Dictionary<int, double> _moveOrigin; // 0x60
	private readonly HashSet<int> _branchCrossings; // 0x68
	private readonly List<GrainPoint> _samples; // 0x70
	private readonly Dictionary<int, RoadBus> _ahead; // 0x78
	private readonly Dictionary<int, double> _trainCap; // 0x80
	private readonly Dictionary<int, double> _trainRide; // 0x88
	private readonly List<RoadBus> _followers; // 0x90
	private int _nextEntrySequence; // 0x98
	public const double CoupleTolerance = 1E-06;
	public const double CatchUpMultiplier = 2;
	public const double MoveEps = 1E-06;
	[CompilerGenerated]
	private long <LastMoveTick>k__BackingField; // 0xA0
	[CompilerGenerated]
	private long <LastLeavingMoveTick>k__BackingField; // 0xA8
	[CompilerGenerated]
	private bool <EntryBlocked>k__BackingField; // 0xB0
	private long _tick; // 0xB8
	public static readonly double[] WindowWidth; // 0x0
	public static readonly double[] WindowOffset; // 0x8

	// Properties
	public int BoardWidth { get; }
	public int BoardOffset { get; }
	public int StraightLength { get; }
	public int LoopLength { get; }
	public int ExitRunGrains { get; }
	public int EntryRunGrains { get; }
	public double EntryRunSpeedMultiplier { get; }
	public int Capacity { get; set; }
	public int SuctionDepthGrains { get; set; }
	public int SuctionPerTick { get; set; }
	public ListView<RoadBus> Buses { get; }
	public int Count { get; }
	public int ActiveCount { get; }
	public bool IsFull { get; }
	public bool AnyBusLeaving { get; }
	public bool AnyBusHeld { get; }
	public long LastMoveTick { get; set; }
	public long LastLeavingMoveTick { get; set; }
	public bool EntryBlocked { get; set; }
	public bool AnyOnLoop { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2411948 Offset: 0x240D948 VA: 0x2411948
	public int get_BoardWidth() { }

	[CompilerGenerated]
	// RVA: 0x2411950 Offset: 0x240D950 VA: 0x2411950
	public int get_BoardOffset() { }

	[CompilerGenerated]
	// RVA: 0x2411958 Offset: 0x240D958 VA: 0x2411958
	public int get_StraightLength() { }

	[CompilerGenerated]
	// RVA: 0x2411960 Offset: 0x240D960 VA: 0x2411960
	public int get_LoopLength() { }

	[CompilerGenerated]
	// RVA: 0x2411968 Offset: 0x240D968 VA: 0x2411968
	public int get_ExitRunGrains() { }

	[CompilerGenerated]
	// RVA: 0x2411970 Offset: 0x240D970 VA: 0x2411970
	public int get_EntryRunGrains() { }

	[CompilerGenerated]
	// RVA: 0x2411978 Offset: 0x240D978 VA: 0x2411978
	public double get_EntryRunSpeedMultiplier() { }

	[CompilerGenerated]
	// RVA: 0x2411980 Offset: 0x240D980 VA: 0x2411980
	public int get_Capacity() { }

	[CompilerGenerated]
	// RVA: 0x2411988 Offset: 0x240D988 VA: 0x2411988
	private void set_Capacity(int value) { }

	// RVA: 0x2411990 Offset: 0x240D990 VA: 0x2411990
	public int get_SuctionDepthGrains() { }

	// RVA: 0x2411998 Offset: 0x240D998 VA: 0x2411998
	public void set_SuctionDepthGrains(int value) { }

	// RVA: 0x2411A08 Offset: 0x240DA08 VA: 0x2411A08
	public int get_SuctionPerTick() { }

	// RVA: 0x2411A10 Offset: 0x240DA10 VA: 0x2411A10
	public void set_SuctionPerTick(int value) { }

	// RVA: 0x2411A80 Offset: 0x240DA80 VA: 0x2411A80
	public void .ctor(RoadConfig config, int boardWidthGrains, int sideMarginGrains, int capacity, int exitRunGrains = 0, int entryRunGrains = 0) { }

	// RVA: 0x2411E9C Offset: 0x240DE9C VA: 0x2411E9C
	public ListView<RoadBus> get_Buses() { }

	// RVA: 0x2411EE8 Offset: 0x240DEE8 VA: 0x2411EE8
	public int get_Count() { }

	// RVA: 0x2411F38 Offset: 0x240DF38 VA: 0x2411F38
	public void CompleteAll() { }

	// RVA: 0x2412078 Offset: 0x240E078 VA: 0x2412078
	public int get_ActiveCount() { }

	// RVA: 0x24121B8 Offset: 0x240E1B8 VA: 0x24121B8
	public bool get_IsFull() { }

	// RVA: 0x24121D8 Offset: 0x240E1D8 VA: 0x24121D8
	public bool get_AnyBusLeaving() { }

	// RVA: 0x2412310 Offset: 0x240E310 VA: 0x2412310
	public bool get_AnyBusHeld() { }

	[CompilerGenerated]
	// RVA: 0x241245C Offset: 0x240E45C VA: 0x241245C
	public long get_LastMoveTick() { }

	[CompilerGenerated]
	// RVA: 0x2412464 Offset: 0x240E464 VA: 0x2412464
	private void set_LastMoveTick(long value) { }

	[CompilerGenerated]
	// RVA: 0x241246C Offset: 0x240E46C VA: 0x241246C
	public long get_LastLeavingMoveTick() { }

	[CompilerGenerated]
	// RVA: 0x2412474 Offset: 0x240E474 VA: 0x2412474
	private void set_LastLeavingMoveTick(long value) { }

	[CompilerGenerated]
	// RVA: 0x241247C Offset: 0x240E47C VA: 0x241247C
	public bool get_EntryBlocked() { }

	[CompilerGenerated]
	// RVA: 0x2412484 Offset: 0x240E484 VA: 0x2412484
	private void set_EntryBlocked(bool value) { }

	// RVA: 0x241248C Offset: 0x240E48C VA: 0x241248C
	public bool get_AnyOnLoop() { }

	// RVA: 0x24125C4 Offset: 0x240E5C4 VA: 0x24125C4
	public bool AnyBusLeavingMoving(long tick, int graceTicks) { }

	// RVA: 0x2412604 Offset: 0x240E604 VA: 0x2412604
	public bool FrozenAt(long tick) { }

	// RVA: 0x241261C Offset: 0x240E61C VA: 0x241261C
	public bool LoopHasRoomFor(RoadBus e) { }

	// RVA: 0x24127E0 Offset: 0x240E7E0 VA: 0x24127E0
	public bool TryGet(int truckId, out RoadBus bus) { }

	// RVA: 0x2412848 Offset: 0x240E848 VA: 0x2412848
	private int IndexOf(int truckId) { }

	// RVA: 0x2412920 Offset: 0x240E920 VA: 0x2412920
	public bool IsInReturnStraight(double pos) { }

	// RVA: 0x241295C Offset: 0x240E95C VA: 0x241295C
	private bool IsInLeftCorner(double pos) { }

	// RVA: 0x2412994 Offset: 0x240E994 VA: 0x2412994
	public double SpeedGrainsPerTickAt(double pos) { }

	// RVA: 0x24129D0 Offset: 0x240E9D0 VA: 0x24129D0
	public bool ExpandCapacity() { }

	// RVA: 0x24129E8 Offset: 0x240E9E8 VA: 0x24129E8
	public RoadBus CreateBus(int truckId, byte color, BusKind kind, int capacityGrains, int chain = 0) { }

	// RVA: 0x2412AEC Offset: 0x240EAEC VA: 0x2412AEC
	public void Enqueue(RoadBus bus, long tick, int inboundTicks = 0) { }

	// RVA: 0x2412C60 Offset: 0x240EC60 VA: 0x2412C60
	public void Advance(long tick, SandGrid grid, List<SimEvent> evts) { }

	// RVA: 0x2415BE0 Offset: 0x2411BE0 VA: 0x2415BE0
	private void Complete(RoadBus b, List<SimEvent> evts) { }

	// RVA: 0x2415D9C Offset: 0x2411D9C VA: 0x2415D9C
	private bool IsChainFull(int chain) { }

	// RVA: 0x2415EFC Offset: 0x2411EFC VA: 0x2415EFC
	private void ReleaseChain(int chain, List<SimEvent> evts) { }

	// RVA: 0x24162D0 Offset: 0x24122D0 VA: 0x24162D0
	public bool AtExitBranch(RoadBus b) { }

	// RVA: 0x2414F04 Offset: 0x2410F04 VA: 0x2414F04
	private double MergeReservationFor(RoadBus e) { }

	// RVA: 0x2414F38 Offset: 0x2410F38 VA: 0x2414F38
	private double LeavingFactor(RoadBus b) { }

	// RVA: 0x2416450 Offset: 0x2412450 VA: 0x2416450
	private double LeavingFactorAt(int ticks) { }

	// RVA: 0x24155B8 Offset: 0x24115B8 VA: 0x24155B8
	private void MoveOnLoop(RoadBus b, double pos, double np, List<SimEvent> evts) { }

	// RVA: 0x2416514 Offset: 0x2412514 VA: 0x2416514
	private double AheadOf(double from, double to) { }

	// RVA: 0x241659C Offset: 0x241259C VA: 0x241659C
	public double CouplingDistance(RoadBus ahead, RoadBus follower) { }

	// RVA: 0x24165DC Offset: 0x24125DC VA: 0x24165DC
	private static bool InTrain(RoadBus b) { }

	// RVA: 0x2416618 Offset: 0x2412618 VA: 0x2416618
	private double NormalStep(RoadBus b, double pos, int leavingTicks) { }

	// RVA: 0x241402C Offset: 0x241002C VA: 0x241402C
	private void BuildTrains() { }

	// RVA: 0x2416734 Offset: 0x2412734 VA: 0x2416734
	private int Depth(RoadBus b) { }

	// RVA: 0x2415748 Offset: 0x2411748 VA: 0x2415748
	private void MoveFollower(RoadBus b, double mergeRes, double holdLine, List<SimEvent> evts) { }

	// RVA: 0x2416398 Offset: 0x2412398 VA: 0x2416398
	private bool TrainMayExit(RoadBus b) { }

	// RVA: 0x24167BC Offset: 0x24127BC VA: 0x24167BC
	private double NearestCenter(double pos, double reference) { }

	// RVA: 0x2414CA8 Offset: 0x2410CA8 VA: 0x2414CA8
	private bool IsSlotClear(double pos, RoadBus e) { }

	// RVA: 0x2414F58 Offset: 0x2410F58 VA: 0x2414F58
	private double ClampBeforeMerge(RoadBus e, double current, double desired) { }

	// RVA: 0x2415244 Offset: 0x2411244 VA: 0x2415244
	private double ClampBehindLeader(RoadBus b, double current, double desired, RoadBus ignore) { }

	// RVA: 0x2415A10 Offset: 0x2411A10 VA: 0x2415A10
	public bool TryBoardFootprint(RoadBus b, out int minX, out int maxX) { }

	// RVA: 0x2416850 Offset: 0x2412850 VA: 0x2416850
	public bool AnyColorInBottomBand(SandGrid grid, byte color) { }

	// RVA: 0x24168E8 Offset: 0x24128E8 VA: 0x24168E8
	public bool AnyActiveBusCanCollect(SandGrid grid) { }

	// RVA: 0x2416A64 Offset: 0x2412A64 VA: 0x2416A64
	public bool AnyLoopBusCanCollect(SandGrid grid) { }

	// RVA: 0x2416BDC Offset: 0x2412BDC VA: 0x2416BDC
	public bool TryPickNearestToBranch(ICollection<int> excluded, out int truckId) { }

	// RVA: 0x2416E64 Offset: 0x2412E64 VA: 0x2416E64
	public int AbsorbColorInto(int truckId, SandGrid grid, int sampleStride, List<GrainPoint> samples) { }

	// RVA: 0x2416F68 Offset: 0x2412F68 VA: 0x2416F68
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x241704C Offset: 0x241304C VA: 0x241704C
	private int <BuildTrains>b__102_0(RoadBus x, RoadBus y) { }
}

