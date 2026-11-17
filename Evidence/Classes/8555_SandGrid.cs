// Namespace: Dino.BusSand.Core
public sealed class SandGrid // TypeDefIndex: 8555
{
	// Fields
	public readonly int Width; // 0x10
	public readonly int Height; // 0x14
	public SandFallMode FallMode; // 0x18
	public float SideStealChance; // 0x1C
	public float StraightFirstChance; // 0x20
	public int CenterReachCells; // 0x24
	public bool StraightGradientEnabled; // 0x28
	public float GradientCenter; // 0x2C
	public float GradientEdge; // 0x30
	public float GradientExponent; // 0x34
	private readonly byte[] _color; // 0x38
	private readonly sbyte[] _shade; // 0x40
	private readonly int[] _rowCount; // 0x48
	private readonly int[] _colorCount; // 0x50
	private readonly int[] _rowChanged; // 0x58
	private int _step; // 0x60
	private SandRandom _rng; // 0x64
	private float[] _straightCache; // 0x68
	[CompilerGenerated]
	private int <Count>k__BackingField; // 0x70
	public bool NeedRedraw; // 0x74
	[CompilerGenerated]
	private bool <IsSettled>k__BackingField; // 0x75
	[CompilerGenerated]
	private int <LastStepMoveCount>k__BackingField; // 0x78
	[CompilerGenerated]
	private int <Version>k__BackingField; // 0x7C

	// Properties
	public int Count { get; set; }
	public bool IsSettled { get; set; }
	public int LastStepMoveCount { get; set; }
	public uint RandomState { get; }
	public int Version { get; set; }
	internal byte[] RawColors { get; }
	internal sbyte[] RawShades { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2417260 Offset: 0x2413260 VA: 0x2417260
	public int get_Count() { }

	[CompilerGenerated]
	// RVA: 0x2417268 Offset: 0x2413268 VA: 0x2417268
	private void set_Count(int value) { }

	[CompilerGenerated]
	// RVA: 0x2417270 Offset: 0x2413270 VA: 0x2417270
	public bool get_IsSettled() { }

	[CompilerGenerated]
	// RVA: 0x2417278 Offset: 0x2413278 VA: 0x2417278
	private void set_IsSettled(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2417280 Offset: 0x2413280 VA: 0x2417280
	public int get_LastStepMoveCount() { }

	[CompilerGenerated]
	// RVA: 0x2417288 Offset: 0x2413288 VA: 0x2417288
	private void set_LastStepMoveCount(int value) { }

	// RVA: 0x2417290 Offset: 0x2413290 VA: 0x2417290
	public uint get_RandomState() { }

	[CompilerGenerated]
	// RVA: 0x2417298 Offset: 0x2413298 VA: 0x2417298
	public int get_Version() { }

	[CompilerGenerated]
	// RVA: 0x24172A0 Offset: 0x24132A0 VA: 0x24172A0
	private void set_Version(int value) { }

	// RVA: 0x24172A8 Offset: 0x24132A8 VA: 0x24172A8
	public void .ctor(int width, int height, SandFallMode mode, int seed) { }

	// RVA: 0x2417464 Offset: 0x2413464 VA: 0x2417464
	public void ApplyTuning(SandTuning t) { }

	// RVA: 0x24174B0 Offset: 0x24134B0 VA: 0x24174B0
	public bool InBounds(int x, int y) { }

	// RVA: 0x24174DC Offset: 0x24134DC VA: 0x24174DC
	public byte ColorAt(int x, int y) { }

	// RVA: 0x2417538 Offset: 0x2413538 VA: 0x2417538
	public sbyte ShadeAt(int x, int y) { }

	// RVA: 0x2417594 Offset: 0x2413594 VA: 0x2417594
	public bool IsSand(int x, int y) { }

	// RVA: 0x24175AC Offset: 0x24135AC VA: 0x24175AC
	public byte RawColor(int i) { }

	// RVA: 0x24175DC Offset: 0x24135DC VA: 0x24175DC
	public sbyte RawShade(int i) { }

	// RVA: 0x241760C Offset: 0x241360C VA: 0x241760C
	internal byte[] get_RawColors() { }

	// RVA: 0x2417614 Offset: 0x2413614 VA: 0x2417614
	internal sbyte[] get_RawShades() { }

	// RVA: 0x241761C Offset: 0x241361C VA: 0x241761C
	public int SandCountInRow(int y) { }

	// RVA: 0x241764C Offset: 0x241364C VA: 0x241764C
	public int CountOf(byte color) { }

	[IteratorStateMachine(typeof(SandGrid.<PresentColors>d__51))]
	// RVA: 0x241767C Offset: 0x241367C VA: 0x241767C
	public IEnumerable<byte> PresentColors() { }

	// RVA: 0x2417730 Offset: 0x2413730 VA: 0x2417730
	public bool TrySpawn(int x, int y, byte color, sbyte shade) { }

	// RVA: 0x2417854 Offset: 0x2413854 VA: 0x2417854
	public bool TryRemove(int x, int y) { }

	// RVA: 0x241796C Offset: 0x241396C VA: 0x241796C
	public void Clear() { }

	// RVA: 0x24179F8 Offset: 0x24139F8 VA: 0x24179F8
	public bool AnyColorInRows(byte color, int minY, int maxY) { }

	// RVA: 0x2417B60 Offset: 0x2413B60 VA: 0x2417B60
	public int CountOf(byte color, int minX, int maxX, int minY, int maxY) { }

	// RVA: 0x2417CA4 Offset: 0x2413CA4 VA: 0x2417CA4
	public byte BottomColorAt(int x) { }

	// RVA: 0x2417D04 Offset: 0x2413D04 VA: 0x2417D04
	public bool Step() { }

	// RVA: 0x2418430 Offset: 0x2414430 VA: 0x2418430
	private bool TryPullSandDown(int x, int y, bool canPull) { }

	// RVA: 0x2418904 Offset: 0x2414904 VA: 0x2418904
	private bool TryPullCenterDirection(int x, int y, int dir) { }

	// RVA: 0x2418768 Offset: 0x2414768 VA: 0x2418768
	private bool TryPullFrom(int fx, int fy, int tx, int ty) { }

	// RVA: 0x2418260 Offset: 0x2414260 VA: 0x2418260
	private bool PullCenterConverging(int x, int y, int o) { }

	// RVA: 0x2418B1C Offset: 0x2414B1C VA: 0x2418B1C
	private bool PullConverging(int x, int y, int so, int ti, int dir) { }

	// RVA: 0x24189FC Offset: 0x24149FC VA: 0x24189FC
	private void Move(int fi, int ti, int fy, int ty) { }

	// RVA: 0x24180F8 Offset: 0x24140F8 VA: 0x24180F8
	private void EnsureStraightCache() { }

	// RVA: 0x2418C50 Offset: 0x2414C50 VA: 0x2418C50
	public int Collect(byte color, int minX, int maxX, int minY, int maxY, int maxRemoves, List<GrainPoint> samples, int sampleStride, int preferredAlong) { }
}

