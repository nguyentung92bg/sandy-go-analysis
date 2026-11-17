// Namespace: Dino.BusSand.App.UI
public class UIManager : MonoBehaviour // TypeDefIndex: 3952
{
	// Fields
	[CompilerGenerated]
	private static UIManager <I>k__BackingField; // 0x0
	[CompilerGenerated]
	private Camera <UICamera>k__BackingField; // 0x20
	[CompilerGenerated]
	private Canvas <RootCanvas>k__BackingField; // 0x28
	private readonly RectTransform[] _layers; // 0x30
	private readonly List<UIPanel> _open; // 0x38
	private CanvasScaler _scaler; // 0x40
	private Camera _baseCam; // 0x48
	private int _lastW; // 0x50
	private int _lastH; // 0x54

	// Properties
	public static UIManager I { get; set; }
	public Camera UICamera { get; set; }
	public Canvas RootCanvas { get; set; }
	public IReadOnlyList<UIPanel> OpenPanels { get; }
	public Camera BaseCamera { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x21FD090 Offset: 0x21F9090 VA: 0x21FD090
	public static UIManager get_I() { }

	[CompilerGenerated]
	// RVA: 0x21FD0D8 Offset: 0x21F90D8 VA: 0x21FD0D8
	private static void set_I(UIManager value) { }

	[CompilerGenerated]
	// RVA: 0x21FD130 Offset: 0x21F9130 VA: 0x21FD130
	public Camera get_UICamera() { }

	[CompilerGenerated]
	// RVA: 0x21FD138 Offset: 0x21F9138 VA: 0x21FD138
	private void set_UICamera(Camera value) { }

	[CompilerGenerated]
	// RVA: 0x21FD140 Offset: 0x21F9140 VA: 0x21FD140
	public Canvas get_RootCanvas() { }

	[CompilerGenerated]
	// RVA: 0x21FD148 Offset: 0x21F9148 VA: 0x21FD148
	private void set_RootCanvas(Canvas value) { }

	// RVA: 0x21FD150 Offset: 0x21F9150 VA: 0x21FD150
	public IReadOnlyList<UIPanel> get_OpenPanels() { }

	// RVA: 0x21FD158 Offset: 0x21F9158 VA: 0x21FD158
	public static UIManager Create(Transform parent) { }

	// RVA: 0x21FD2C4 Offset: 0x21F92C4 VA: 0x21FD2C4
	private void Init() { }

	// RVA: 0x21FDE64 Offset: 0x21F9E64 VA: 0x21FDE64
	private void ApplyScaler() { }

	// RVA: 0x21FDF64 Offset: 0x21F9F64 VA: 0x21FDF64
	public void AttachTo(Camera baseCam) { }

	// RVA: 0x21FE220 Offset: 0x21FA220 VA: 0x21FE220
	public RectTransform Layer(UILayer l) { }

	// RVA: 0x21FE250 Offset: 0x21FA250 VA: 0x21FE250
	public Camera get_BaseCamera() { }

	// RVA: -1 Offset: -1
	public T Open<T>(string prefabKey, UILayer layer, object param) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2945314 Offset: 0x2941314 VA: 0x2945314
	|-UIManager.Open<object>
	*/

	// RVA: 0x21FE258 Offset: 0x21FA258 VA: 0x21FE258
	public static void FullScreenBackdrops(Transform panel) { }

	// RVA: 0x21FE774 Offset: 0x21FA774 VA: 0x21FE774
	public static void SubstituteSoftMasks(GameObject root) { }

	// RVA: 0x21FE9A0 Offset: 0x21FA9A0 VA: 0x21FE9A0
	public void Close(UIPanel p) { }

	// RVA: -1 Offset: -1
	public T Get<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x29451C8 Offset: 0x29411C8 VA: 0x29451C8
	|-UIManager.Get<object>
	*/

	// RVA: -1 Offset: -1
	public bool IsOpen<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2945298 Offset: 0x2941298 VA: 0x2945298
	|-UIManager.IsOpen<object>
	*/

	// RVA: -1 Offset: -1
	public void CloseAll<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x29450E0 Offset: 0x29410E0 VA: 0x29450E0
	|-UIManager.CloseAll<object>
	*/

	// RVA: 0x21FEED4 Offset: 0x21FAED4 VA: 0x21FEED4
	public void CloseAllPopups() { }

	// RVA: 0x21FEF84 Offset: 0x21FAF84 VA: 0x21FEF84
	public bool AnyPopupOpen() { }

	// RVA: 0x21FF0C0 Offset: 0x21FB0C0 VA: 0x21FF0C0
	private void Update() { }

	// RVA: 0x21FF160 Offset: 0x21FB160 VA: 0x21FF160
	public UIPanel HandleBack() { }

	// RVA: 0x21FF334 Offset: 0x21FB334 VA: 0x21FF334
	public void .ctor() { }
}

