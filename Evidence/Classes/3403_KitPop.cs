// Namespace: Dino.BusSand.App.UI
public class KitPop : MonoBehaviour, IKitAdoptAware // TypeDefIndex: 3403
{
	// Fields
	public Graphic Dim; // 0x20
	public float DimAlpha; // 0x28
	public KitPop.Style Kind; // 0x2C
	public bool Sound; // 0x30
	public bool Negative; // 0x31
	public RectTransform Title; // 0x38
	public RectTransform Content; // 0x40
	public static float InputDelay; // 0x0
	[CompilerGenerated]
	private bool <Ready>k__BackingField; // 0x48
	private static readonly List<KitPop> Outgoing; // 0x8
	private Vector3 _base; // 0x4C
	private Vector2 _basePos; // 0x58
	private CanvasGroup _win; // 0x60
	private CanvasGroup _panel; // 0x68
	private bool _out; // 0x70
	private Action _done; // 0x78
	private static Image s_held; // 0x10
	public const float HeldAlpha = 0.72;
	private static bool s_going; // 0x18

	// Properties
	public bool Ready { get; set; }
	private float PanelAlpha { get; }
	public static bool DimHeld { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x228D9F0 Offset: 0x22899F0 VA: 0x228D9F0
	public bool get_Ready() { }

	[CompilerGenerated]
	// RVA: 0x228D9F8 Offset: 0x22899F8 VA: 0x228D9F8
	private void set_Ready(bool value) { }

	// RVA: 0x228DA00 Offset: 0x2289A00 VA: 0x228DA00
	public void Rescale(float k) { }

	// RVA: 0x228DA44 Offset: 0x2289A44 VA: 0x228DA44 Slot: 4
	public void OnAdopted() { }

	// RVA: 0x228DA74 Offset: 0x2289A74 VA: 0x228DA74
	private void Awake() { }

	[IteratorStateMachine(typeof(KitPop.<Start>d__23))]
	// RVA: 0x228DBF8 Offset: 0x2289BF8 VA: 0x228DBF8
	private IEnumerator Start() { }

	// RVA: 0x228DC8C Offset: 0x2289C8C VA: 0x228DC8C
	private void TakeTaps() { }

	// RVA: 0x228DCC0 Offset: 0x2289CC0 VA: 0x228DCC0
	private void StaggerContent() { }

	// RVA: 0x228E524 Offset: 0x228A524 VA: 0x228E524
	private void SlideExtras() { }

	// RVA: 0x228EDE0 Offset: 0x228ADE0 VA: 0x228EDE0
	private float get_PanelAlpha() { }

	// RVA: 0x228EE68 Offset: 0x228AE68 VA: 0x228EE68
	private static float HeldTopUp(float a) { }

	// RVA: 0x228EE9C Offset: 0x228AE9C VA: 0x228EE9C
	public static void HoldDim() { }

	// RVA: 0x228A7B0 Offset: 0x22867B0 VA: 0x228A7B0
	public static void ReleaseDim() { }

	// RVA: 0x228F178 Offset: 0x228B178 VA: 0x228F178
	public static bool get_DimHeld() { }

	// RVA: 0x228A570 Offset: 0x2286570 VA: 0x228A570
	public static void FinishLeaving() { }

	// RVA: 0x228F2EC Offset: 0x228B2EC VA: 0x228F2EC
	public bool PlayOut(Action done) { }

	[IteratorStateMachine(typeof(KitPop.<Out>d__40))]
	// RVA: 0x228F5F8 Offset: 0x228B5F8 VA: 0x228F5F8
	private IEnumerator Out() { }

	// RVA: 0x228F238 Offset: 0x228B238 VA: 0x228F238
	private void Finish() { }

	// RVA: 0x228F68C Offset: 0x228B68C VA: 0x228F68C
	private void OnDisable() { }

	// RVA: 0x228F6A4 Offset: 0x228B6A4 VA: 0x228F6A4
	private void OnDestroy() { }

	// RVA: 0x228F724 Offset: 0x228B724 VA: 0x228F724
	public void .ctor() { }

	// RVA: 0x228F740 Offset: 0x228B740 VA: 0x228F740
	private static void .cctor() { }
}

