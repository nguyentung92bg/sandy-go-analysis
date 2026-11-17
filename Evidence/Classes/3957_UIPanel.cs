// Namespace: Dino.BusSand.App.UI
public abstract class UIPanel : MonoBehaviour // TypeDefIndex: 3957
{
	// Fields
	public string Key; // 0x20
	public UILayer Layer; // 0x28
	public bool Closing; // 0x2C
	private readonly Dictionary<string, Transform> _cache; // 0x30
	[CompilerGenerated]
	private static Action<GameObject> Clicked; // 0x0

	// Methods

	// RVA: 0x22002DC Offset: 0x21FC2DC VA: 0x22002DC Slot: 4
	public virtual void OnOpen(object param) { }

	// RVA: 0x22002E0 Offset: 0x21FC2E0 VA: 0x22002E0 Slot: 5
	public virtual void OnAnimEvent(string evt) { }

	// RVA: 0x22002E4 Offset: 0x21FC2E4 VA: 0x22002E4
	public void OnAnimationEvent(string evt) { }

	// RVA: 0x22002F0 Offset: 0x21FC2F0 VA: 0x22002F0 Slot: 6
	public virtual void OnClose() { }

	// RVA: 0x22002F4 Offset: 0x21FC2F4 VA: 0x22002F4 Slot: 7
	public virtual bool OnBack() { }

	// RVA: 0x21F509C Offset: 0x21F109C VA: 0x21F509C
	public void Close() { }

	// RVA: 0x22002FC Offset: 0x21FC2FC VA: 0x22002FC Slot: 8
	protected virtual void OnDestroy() { }

	// RVA: 0x21F4108 Offset: 0x21F0108 VA: 0x21F4108
	public Transform Find(string nameOrPath) { }

	// RVA: 0x22003BC Offset: 0x21FC3BC VA: 0x22003BC
	public static Transform FindDeep(Transform root, string name) { }

	// RVA: 0x22007D4 Offset: 0x21FC7D4 VA: 0x22007D4
	private static Transform FindPath(Transform root, string path) { }

	// RVA: -1 Offset: -1
	public T Get<T>(string name) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x29460D0 Offset: 0x29420D0 VA: 0x29460D0
	|-UIPanel.Get<object>
	*/

	// RVA: 0x21F4018 Offset: 0x21F0018 VA: 0x21F4018
	public GameObject Show(string name, bool on) { }

	// RVA: 0x2200924 Offset: 0x21FC924 VA: 0x2200924
	public TMP_Text Txt(string name, string text) { }

	// RVA: 0x2200A70 Offset: 0x21FCA70 VA: 0x2200A70
	public TMP_Text TxtKey(string name, string langKey, object[] args) { }

	// RVA: 0x2200BC8 Offset: 0x21FCBC8 VA: 0x2200BC8
	public Image Img(string name, Sprite s) { }

	// RVA: 0x2200CB0 Offset: 0x21FCCB0 VA: 0x2200CB0
	public Button Btn(string name, Action onClick, bool scaleFeel = True, string sfx = "sfx_common_button_scale_click") { }

	[CompilerGenerated]
	// RVA: 0x2200DF8 Offset: 0x21FCDF8 VA: 0x2200DF8
	public static void add_Clicked(Action<GameObject> value) { }

	[CompilerGenerated]
	// RVA: 0x2200EC4 Offset: 0x21FCEC4 VA: 0x2200EC4
	public static void remove_Clicked(Action<GameObject> value) { }

	// RVA: 0x21F4CA8 Offset: 0x21F0CA8 VA: 0x21F4CA8
	public static Button Bind(GameObject go, Action onClick, bool scaleFeel = True, string sfx = "sfx_common_button_scale_click") { }

	// RVA: 0x2200F98 Offset: 0x21FCF98 VA: 0x2200F98
	public void Run(IEnumerator co) { }

	// RVA: 0x21F5184 Offset: 0x21F1184 VA: 0x21F5184
	protected void .ctor() { }
}

