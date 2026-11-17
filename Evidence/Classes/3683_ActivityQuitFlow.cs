// Namespace: Dino.BusSand.App.UI
public class ActivityQuitFlow // TypeDefIndex: 3683
{
	// Fields
	private readonly QuitPanel _p; // 0x10
	private readonly List<IStakeActivity> _list; // 0x18
	private readonly Action _quit; // 0x20
	private readonly Action _stay; // 0x28
	private int _index; // 0x30
	private bool _simple; // 0x34
	private bool _done; // 0x35
	private readonly List<GameObject> _rows; // 0x38

	// Methods

	// RVA: 0x2187D88 Offset: 0x2183D88 VA: 0x2187D88
	public void .ctor(QuitPanel panel, List<IStakeActivity> list, Action quit, Action stay) { }

	// RVA: 0x2187E70 Offset: 0x2183E70 VA: 0x2187E70
	public bool Start() { }

	// RVA: 0x21880B8 Offset: 0x21840B8 VA: 0x21880B8
	private void OnQuitTap() { }

	// RVA: 0x218819C Offset: 0x218419C VA: 0x218819C
	private void OnStay() { }

	// RVA: 0x2188014 Offset: 0x2184014 VA: 0x2188014
	private bool ShowNext() { }

	// RVA: 0x2188248 Offset: 0x2184248 VA: 0x2188248
	private bool TryEnterSimple() { }

	// RVA: 0x2188508 Offset: 0x2184508 VA: 0x2188508
	private bool ShowSingle(IStakeActivity a) { }

	// RVA: 0x2188EE0 Offset: 0x2184EE0 VA: 0x2188EE0
	private GameObject Spawn(GameObject prefab, Transform parent) { }

	// RVA: 0x2188B58 Offset: 0x2184B58 VA: 0x2188B58
	private void HideAll() { }

	// RVA: 0x21896B8 Offset: 0x21856B8 VA: 0x21896B8
	private void ApplyLevelBg(bool activityBg) { }
}

