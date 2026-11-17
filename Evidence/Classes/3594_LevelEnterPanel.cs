// Namespace: Dino.BusSand.App.UI
public class LevelEnterPanel : UIPanel, IKitPanel // TypeDefIndex: 3594
{
	// Fields
	public static readonly HashSet<int> Selected; // 0x0
	private LevelEnterPanel.Mode _mode; // 0x38
	private float _openTime; // 0x3C
	private readonly Dictionary<int, KitBoosterButton> _slots; // 0x40
	private bool _helpBusy; // 0x48

	// Properties
	private static bool NeedHallGuide { get; }

	// Methods

	// RVA: 0x23184BC Offset: 0x23144BC VA: 0x23184BC Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x2319588 Offset: 0x2315588 VA: 0x2319588
	private void BuildStuckHelp(KitWindow w, float rowY, RectTransform sure) { }

	// RVA: 0x2319340 Offset: 0x2315340 VA: 0x2319340
	private void AddSlot(RectTransform box, string node, int item, float x) { }

	// RVA: 0x2319CD8 Offset: 0x2315CD8 VA: 0x2319CD8 Slot: 6
	public override void OnClose() { }

	// RVA: 0x2319D7C Offset: 0x2315D7C VA: 0x2319D7C
	private static bool get_NeedHallGuide() { }

	// RVA: 0x2319E50 Offset: 0x2315E50 VA: 0x2319E50
	private void OnItem(int id) { }

	// RVA: 0x23199C8 Offset: 0x23159C8 VA: 0x23199C8
	private void RefreshSlots() { }

	// RVA: 0x2319E6C Offset: 0x2315E6C VA: 0x2319E6C
	private void OnSlot(int item) { }

	// RVA: 0x231A258 Offset: 0x2316258 VA: 0x231A258
	private void OnSure() { }

	// RVA: 0x231A6F0 Offset: 0x23166F0 VA: 0x231A6F0
	private void OnCloseBtn() { }

	// RVA: 0x231A894 Offset: 0x2316894 VA: 0x231A894 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x231A8A8 Offset: 0x23168A8 VA: 0x231A8A8
	public void .ctor() { }

	// RVA: 0x231A930 Offset: 0x2316930 VA: 0x231A930
	private static void .cctor() { }
}

