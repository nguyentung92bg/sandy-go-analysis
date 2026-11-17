// Namespace: Dino.BusSand.App.UI
public abstract class RevealPanel : UIPanel, IKitPanel // TypeDefIndex: 3644
{
	// Fields
	protected static readonly Color Warm; // 0x0
	private const float DimAlpha = 0.985;
	protected RectTransform Stage; // 0x38
	private bool _claimed; // 0x40
	private float _openAt; // 0x44
	private int _prizes; // 0x48

	// Methods

	// RVA: 0x2331F98 Offset: 0x232DF98 VA: 0x2331F98
	protected void BuildStage(string title, string subtitle, string titleImage) { }

	// RVA: 0x233290C Offset: 0x232E90C VA: 0x233290C
	protected Image Prize(Sprite icon, Vector2 centre, float size, string count, float countFont, float delay, bool rays, bool countBelow = False) { }

	// RVA: 0x233300C Offset: 0x232F00C VA: 0x233300C
	private void OnTap() { }

	// RVA: -1 Offset: -1 Slot: 9
	protected abstract void Claim();

	// RVA: 0x233305C Offset: 0x232F05C VA: 0x233305C Slot: 7
	public override bool OnBack() { }

	// RVA: 0x2333070 Offset: 0x232F070 VA: 0x2333070
	protected void .ctor() { }

	// RVA: 0x2333078 Offset: 0x232F078 VA: 0x2333078
	private static void .cctor() { }
}

