// Namespace: Dino.BusSand.App.UI
public abstract class EventView // TypeDefIndex: 3785
{
	// Properties
	public abstract EventKind Kind { get; }
	public abstract string Header { get; }
	public abstract long SecondsLeft { get; }
	public virtual int BuyItem { get; }
	public virtual string ActionLabel { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract EventKind get_Kind();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract string get_Header();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract long get_SecondsLeft();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract List<EventRow> Rows();

	// RVA: 0x21B5B64 Offset: 0x21B1B64 VA: 0x21B5B64 Slot: 8
	public virtual int get_BuyItem() { }

	// RVA: 0x21B5B6C Offset: 0x21B1B6C VA: 0x21B5B6C Slot: 9
	public virtual string get_ActionLabel() { }

	// RVA: 0x21B5B74 Offset: 0x21B1B74 VA: 0x21B5B74 Slot: 10
	public virtual void Action() { }

	// RVA: 0x21B5B78 Offset: 0x21B1B78 VA: 0x21B5B78
	protected void .ctor() { }
}

