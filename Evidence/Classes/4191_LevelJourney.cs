// Namespace: Dino.BusSand.App.Meta.Journey
public sealed class LevelJourney // TypeDefIndex: 4191
{
	// Fields
	public const byte Kind = 17;
	public const byte KindV2 = 18;
	public const int MaxBytes = 2200;
	public const int EndReserve = 24;
	public const int DriftMs = 100;
	public const int HeaderFlagsAt = 1;
	public const int FlagCut = 1;
	public const int FlagRewardedReady = 2;
	public const int FlagSolidReturnLane = 4;
	public const int FlagArtPack = 8;
	public const int FlagAuto = 16;
	public const int FlagForced = 32;
	public const int OpTapOk = 0;
	public const int OpTapBlocked = 1;
	public const int OpTapWait = 2;
	public const int OpTapRoadFull = 3;
	public const int OpMiss = 4;
	public const int OpBoost = 5;
	public const int OpFlow = 6;
	public const int OpEnd = 7;
	public const int BoostShuffle = 0;
	public const int BoostPickUp = 1;
	public const int BoostWand = 2;
	public const int BoostExtraSlot = 3;
	public const int BoostPlusSlot = 4;
	public const int BoostHeadStart = 5;
	public const int ActUse = 0;
	public const int ActArm = 1;
	public const int ActCancel = 2;
	public const int ActRefused = 3;
	public const int ActNotPossible = 4;
	public const int FlowPause = 0;
	public const int FlowBackground = 1;
	public const int FlowHint = 2;
	public const int FlowReviveOffer = 3;
	public const int FlowRevive = 4;
	public const int FlowAuto = 5;
	public const int FlowJamHold = 6;
	public const int FlowJamReset = 7;
	public const int ResultWin = 0;
	public const int ResultLose = 1;
	public const int ResultQuit = 2;
	public const int ResultSnapshot = 3;
	public const int FailNone = 0;
	public const int FailRoadDeadlock = 1;
	public const int FailSoftLock = 2;
	public const int FailYardDeadlock = 3;
	public const int FailTimeout = 4;
	public const int ReviveCoins = 0;
	public const int ReviveAd = 1;
	public const int ReviveOffer = 2;
	public const int ReviveOther = 3;
	private readonly JourneyBytes _b; // 0x10
	private long _tick; // 0x18
	private long _recMs; // 0x20
	private long _startMs; // 0x28
	private int _flags; // 0x30
	private int _mark; // 0x34
	private long _markTick; // 0x38
	private long _markRec; // 0x40
	[CompilerGenerated]
	private bool <IsOpen>k__BackingField; // 0x48
	[CompilerGenerated]
	private bool <Cut>k__BackingField; // 0x49
	[CompilerGenerated]
	private int <Ops>k__BackingField; // 0x4C

	// Properties
	public bool IsOpen { get; set; }
	public bool Cut { get; set; }
	public int Ops { get; set; }
	public int Bytes { get; }
	public long LastTick { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x22999B4 Offset: 0x22959B4 VA: 0x22999B4
	public bool get_IsOpen() { }

	[CompilerGenerated]
	// RVA: 0x22999BC Offset: 0x22959BC VA: 0x22999BC
	private void set_IsOpen(bool value) { }

	[CompilerGenerated]
	// RVA: 0x22999C4 Offset: 0x22959C4 VA: 0x22999C4
	public bool get_Cut() { }

	[CompilerGenerated]
	// RVA: 0x22999CC Offset: 0x22959CC VA: 0x22999CC
	private void set_Cut(bool value) { }

	[CompilerGenerated]
	// RVA: 0x22999D4 Offset: 0x22959D4 VA: 0x22999D4
	public int get_Ops() { }

	[CompilerGenerated]
	// RVA: 0x22999DC Offset: 0x22959DC VA: 0x22999DC
	private void set_Ops(int value) { }

	// RVA: 0x22999E4 Offset: 0x22959E4 VA: 0x22999E4
	public int get_Bytes() { }

	// RVA: 0x22999FC Offset: 0x22959FC VA: 0x22999FC
	public long get_LastTick() { }

	// RVA: 0x2296E34 Offset: 0x2292E34 VA: 0x2296E34
	public static long SimMs(long ticks) { }

	// RVA: 0x2299A04 Offset: 0x2295A04 VA: 0x2299A04
	public void Begin(in LevelJourney.Header h, long nowMs) { }

	// RVA: 0x2299BCC Offset: 0x2295BCC VA: 0x2299BCC
	public void Close() { }

	// RVA: 0x2299BD4 Offset: 0x2295BD4 VA: 0x2299BD4
	public void SetFlag(int flag) { }

	// RVA: 0x2299C08 Offset: 0x2295C08 VA: 0x2299C08
	public void Tap(long tick, long nowMs, int truckId, int outcome, int waitReason, int[] inbound, int inboundCount) { }

	// RVA: 0x2299FB4 Offset: 0x2295FB4 VA: 0x2299FB4
	public void Miss(long tick, long nowMs, int cell) { }

	// RVA: 0x229A074 Offset: 0x2296074 VA: 0x229A074
	public void Boost(long tick, long nowMs, int booster, int action, long arg = -1) { }

	// RVA: 0x229A104 Offset: 0x2296104 VA: 0x229A104
	public void Flow(long tick, long nowMs, int kind, long a = 0, long b = 0, float seconds = 0) { }

	// RVA: 0x229A1C8 Offset: 0x22961C8 VA: 0x229A1C8
	public string Finish(long tick, long nowMs, int result, int failReason, int yardLeft, int grainsLeft, int roadCapacity) { }

	// RVA: 0x229A300 Offset: 0x2296300 VA: 0x229A300
	public string Snapshot(long tick, long nowMs, int yardLeft, int grainsLeft, int roadCapacity) { }

	// RVA: 0x229A218 Offset: 0x2296218 VA: 0x229A218
	private void WriteEnd(long tick, long nowMs, int result, int failReason, int yardLeft, int grainsLeft, int roadCapacity) { }

	// RVA: 0x2299D68 Offset: 0x2295D68 VA: 0x2299D68
	private bool Head(long tick, long nowMs, int op, long x) { }

	// RVA: 0x2299F4C Offset: 0x2295F4C VA: 0x2299F4C
	private void Done() { }

	// RVA: 0x229A3E4 Offset: 0x22963E4 VA: 0x229A3E4
	public void .ctor() { }
}

