// Namespace: Dino.BusSand.App.UI
public abstract class RewardStagePanel : RevealPanel // TypeDefIndex: 3647
{
	// Fields
	public Action<Vector3> OnContinue; // 0x50
	private Vector3 _from; // 0x58
	private readonly List<KeyValuePair<int, Image>> _boosters; // 0x68

	// Properties
	protected virtual string TitleImage { get; }

	// Methods

	// RVA: 0x2333EC0 Offset: 0x232FEC0 VA: 0x2333EC0
	private static Vector2[] Slots(int n) { }

	// RVA: 0x2334108 Offset: 0x2330108 VA: 0x2334108 Slot: 10
	protected virtual string get_TitleImage() { }

	// RVA: 0x2334110 Offset: 0x2330110 VA: 0x2334110 Slot: 11
	protected virtual List<KeyValuePair<int, long>> Contents(object param) { }

	// RVA: 0x232D110 Offset: 0x2329110 VA: 0x232D110 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x232DA10 Offset: 0x2329A10 VA: 0x232DA10 Slot: 9
	protected override void Claim() { }

	// RVA: 0x232DCD8 Offset: 0x2329CD8 VA: 0x232DCD8
	protected void .ctor() { }
}

