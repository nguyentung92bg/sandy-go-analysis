// Namespace: Dino.BusSand.App.UI
public sealed class CupView : EventView // TypeDefIndex: 3801
{
	// Fields
	private readonly WeeklyCupFeature _f; // 0x10

	// Properties
	public override EventKind Kind { get; }
	public override string Header { get; }
	public override long SecondsLeft { get; }

	// Methods

	// RVA: 0x21BB95C Offset: 0x21B795C VA: 0x21BB95C Slot: 4
	public override EventKind get_Kind() { }

	// RVA: 0x21BB964 Offset: 0x21B7964 VA: 0x21BB964 Slot: 5
	public override string get_Header() { }

	// RVA: 0x21BBBF0 Offset: 0x21B7BF0 VA: 0x21BBBF0 Slot: 6
	public override long get_SecondsLeft() { }

	// RVA: 0x21BBC08 Offset: 0x21B7C08 VA: 0x21BBC08 Slot: 7
	public override List<EventRow> Rows() { }

	// RVA: 0x21BC168 Offset: 0x21B8168 VA: 0x21BC168
	private static EventRow Entry(CupEntry e, int rank) { }

	// RVA: 0x21BC3F4 Offset: 0x21B83F4 VA: 0x21BC3F4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x21BC424 Offset: 0x21B8424 VA: 0x21BC424
	private List<KeyValuePair<int, long>> <Rows>b__7_1() { }
}

