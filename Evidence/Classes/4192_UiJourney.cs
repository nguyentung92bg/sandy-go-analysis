// Namespace: Dino.BusSand.App.Meta.Journey
public sealed class UiJourney // TypeDefIndex: 4192
{
	// Fields
	public const byte Kind = 33;
	public const int MaxBytes = 1400;
	public const int MaxSteps = 200;
	public const int MaxNames = 96;
	public const int MaxNameLen = 48;
	public const int HeaderFlagsAt = 1;
	public const int EndBackground = 0;
	public const int EndFull = 1;
	public const int EndRecovered = 2;
	public const int EndOther = 3;
	public const int FlagStartedInLevel = 4;
	public const int OpOpen = 0;
	public const int OpClose = 1;
	public const int OpClick = 2;
	public const int OpBack = 3;
	public const int OpMark = 4;
	public const int MarkLevelStart = 0;
	public const int MarkLevelEnd = 1;
	public const int MarkExternalOpen = 2;
	public const int MarkExternalClose = 3;
	public const int MarkIapClick = 4;
	public const int MarkIapSuccess = 5;
	public const int MarkIapFail = 6;
	private readonly JourneyBytes _b; // 0x10
	private readonly string[] _nameA; // 0x18
	private readonly string[] _nameB; // 0x20
	private int _names; // 0x28
	private int _flags; // 0x2C
	private long _recMs; // 0x30
	[CompilerGenerated]
	private bool <Started>k__BackingField; // 0x38
	[CompilerGenerated]
	private int <Steps>k__BackingField; // 0x3C

	// Properties
	public bool Started { get; set; }
	public int Steps { get; set; }
	public int Bytes { get; }
	public bool Empty { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x229A450 Offset: 0x2296450 VA: 0x229A450
	public bool get_Started() { }

	[CompilerGenerated]
	// RVA: 0x229A458 Offset: 0x2296458 VA: 0x229A458
	private void set_Started(bool value) { }

	[CompilerGenerated]
	// RVA: 0x229A460 Offset: 0x2296460 VA: 0x229A460
	public int get_Steps() { }

	[CompilerGenerated]
	// RVA: 0x229A468 Offset: 0x2296468 VA: 0x229A468
	private void set_Steps(int value) { }

	// RVA: 0x229A470 Offset: 0x2296470 VA: 0x229A470
	public int get_Bytes() { }

	// RVA: 0x229A488 Offset: 0x2296488 VA: 0x229A488
	public bool get_Empty() { }

	// RVA: 0x229A498 Offset: 0x2296498 VA: 0x229A498
	public void Begin(long unixSeconds, long nowMs, int aseq, bool inLevel) { }

	// RVA: 0x229A538 Offset: 0x2296538 VA: 0x229A538
	public bool Open(long nowMs, string screen) { }

	// RVA: 0x229A64C Offset: 0x229664C VA: 0x229A64C
	public bool Close(long nowMs, string screen) { }

	// RVA: 0x229A65C Offset: 0x229665C VA: 0x229A65C
	public bool Click(long nowMs, string panel, string button) { }

	// RVA: 0x229A66C Offset: 0x229666C VA: 0x229A66C
	public bool Back(long nowMs, string panel) { }

	// RVA: 0x229A67C Offset: 0x229667C VA: 0x229A67C
	public bool Mark(long nowMs, int kind, long a = 0, long b = 0, string name) { }

	// RVA: 0x229A548 Offset: 0x2296548 VA: 0x229A548
	private bool Named(long nowMs, int op, string a, string b) { }

	// RVA: 0x229A8A4 Offset: 0x22968A4 VA: 0x229A8A4
	private int NameArg(string a, string b) { }

	// RVA: 0x229A910 Offset: 0x2296910 VA: 0x229A910
	private bool Commit(int mark, long rec, int added, string a, string b) { }

	// RVA: 0x229A7E0 Offset: 0x22967E0 VA: 0x229A7E0
	private void Time(long nowMs) { }

	// RVA: 0x229A9D8 Offset: 0x22969D8 VA: 0x229A9D8
	private int Find(string a, string b) { }

	// RVA: 0x229AA90 Offset: 0x2296A90 VA: 0x229AA90
	private void Literal(string a, string b) { }

	// RVA: 0x229ABCC Offset: 0x2296BCC VA: 0x229ABCC
	public string Encode(int endBy) { }

	// RVA: 0x229AC48 Offset: 0x2296C48 VA: 0x229AC48
	public void Reset() { }

	// RVA: 0x229AC78 Offset: 0x2296C78 VA: 0x229AC78
	public void .ctor() { }
}

