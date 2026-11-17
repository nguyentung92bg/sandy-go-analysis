// Namespace: Dino.BusSand.App.UI
public class GuideRequest // TypeDefIndex: 3495
{
	// Fields
	public int GuideId; // 0x10
	public Nullable<Vector3> WorldAnchor; // 0x14
	public RectTransform UiAnchor; // 0x28
	public RectTransform RaiseAlso; // 0x30
	public string TextKey; // 0x38
	public bool ShowHand; // 0x40
	public bool PassThroughTap; // 0x41
	public int ItemId; // 0x44
	public bool CanMaskClick; // 0x48
	public bool CanRepeat; // 0x49
	public float HoleScale; // 0x4C
	public int HoleAnimMs; // 0x50
	public int OpenDelayMs; // 0x54
	public float OverlayAlpha; // 0x58
	public Vector2 ContentOffset; // 0x5C
	public float ContentWidth; // 0x64
	public Vector2 HandOffset; // 0x68
	public int RequiredVehicle; // 0x70
	public List<Transform> Highlights; // 0x78
	public List<Transform> KeepClear; // 0x80

	// Properties
	public bool IconRaise { get; }

	// Methods

	// RVA: 0x22CBEA4 Offset: 0x22C7EA4 VA: 0x22CBEA4
	public bool get_IconRaise() { }

	// RVA: 0x22CE980 Offset: 0x22CA980 VA: 0x22CE980
	public static GuideRequest FromConfig(int id) { }

	// RVA: 0x22CF034 Offset: 0x22CB034 VA: 0x22CF034
	private static bool Bool(Dictionary<string, object> r, string k) { }

	// RVA: 0x22CEE94 Offset: 0x22CAE94 VA: 0x22CEE94
	private static void ApplyDecoded(GuideRequest q, int id) { }

	// RVA: 0x22C84C8 Offset: 0x22C44C8 VA: 0x22C84C8
	public void .ctor() { }
}

