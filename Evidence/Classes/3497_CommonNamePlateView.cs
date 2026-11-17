// Namespace: Dino.BusSand.App.UI
public class CommonNamePlateView : MonoBehaviour // TypeDefIndex: 3497
{
	// Fields
	private Transform _root; // 0x20
	private Transform _defaultTxt; // 0x28
	private Transform _loadedTxt; // 0x30
	private GameObject _defaultPlate; // 0x38
	private GameObject _loaded; // 0x40
	private float _defaultFontSize; // 0x48
	private int _currentId; // 0x4C
	private string _name; // 0x50
	private bool _init; // 0x58
	private bool _player; // 0x59

	// Methods

	// RVA: 0x22CFC5C Offset: 0x22CBC5C VA: 0x22CFC5C
	public static CommonNamePlateView Of(Transform node) { }

	// RVA: 0x22CFD58 Offset: 0x22CBD58 VA: 0x22CFD58
	private void Setup() { }

	// RVA: 0x22CFFB0 Offset: 0x22CBFB0 VA: 0x22CFFB0
	public void InitPlayer() { }

	// RVA: 0x22D0534 Offset: 0x22CC534 VA: 0x22D0534
	public void Init(string name, int namePlateId = -1) { }

	// RVA: 0x22D05C8 Offset: 0x22CC5C8 VA: 0x22D05C8
	private void OnAppearanceChanged(PlayerIdentity.Appearance a) { }

	// RVA: 0x22D06C4 Offset: 0x22CC6C4 VA: 0x22D06C4
	public void RefreshNamePlate(string name) { }

	// RVA: 0x22D00B0 Offset: 0x22CC0B0 VA: 0x22D00B0
	public void LoadNamePlate(int id) { }

	// RVA: 0x22D0744 Offset: 0x22CC744 VA: 0x22D0744
	private void Clear() { }

	// RVA: 0x22D0A8C Offset: 0x22CCA8C VA: 0x22D0A8C
	private void OnDestroy() { }

	// RVA: 0x22D090C Offset: 0x22CC90C VA: 0x22D090C
	public static void Stretch(RectTransform rt, Vector2 offsetMin, Vector2 offsetMax) { }

	// RVA: 0x22D0430 Offset: 0x22CC430 VA: 0x22D0430
	public static void SetTexts(Transform node, string text) { }

	// RVA: 0x22D07F4 Offset: 0x22CC7F4 VA: 0x22D07F4
	public static void SetAutoSize(Transform node, float max) { }

	// RVA: 0x22D0B38 Offset: 0x22CCB38 VA: 0x22D0B38
	public void .ctor() { }
}

