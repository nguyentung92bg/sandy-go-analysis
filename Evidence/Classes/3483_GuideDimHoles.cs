// Namespace: Dino.BusSand.App.UI
public sealed class GuideDimHoles : MonoBehaviour // TypeDefIndex: 3483
{
	// Fields
	public const int MaxHoles = 32;
	public readonly List<Transform> Targets; // 0x20
	public Vector2 AnchorScreen; // 0x28
	public float AnchorRadius; // 0x30
	public float Padding; // 0x34
	public Func<IEnumerable<Transform>> Source; // 0x38
	public float TargetAlpha; // 0x40
	private float _alpha; // 0x44
	private float _sourceT; // 0x48
	private Material _mat; // 0x50
	private RawImage _img; // 0x58
	private readonly Vector4[] _holes; // 0x60
	private readonly List<VehicleView> _cars; // 0x68
	private readonly List<Renderer[]> _rs; // 0x70
	private static readonly Vector3[] Corners; // 0x0

	// Properties
	private static Camera Cam { get; }

	// Methods

	// RVA: 0x22C5A1C Offset: 0x22C1A1C VA: 0x22C5A1C
	public static GuideDimHoles Create(Transform parent, float alpha) { }

	// RVA: 0x22C5E74 Offset: 0x22C1E74 VA: 0x22C5E74
	public void ClearTargets() { }

	// RVA: 0x22C5F54 Offset: 0x22C1F54 VA: 0x22C5F54
	public void AddTargets(IEnumerable<Transform> targets) { }

	// RVA: 0x22C6490 Offset: 0x22C2490 VA: 0x22C6490
	private static Renderer[] VisibleRenderers(Transform t) { }

	// RVA: 0x22C6770 Offset: 0x22C2770 VA: 0x22C6770
	private static Camera get_Cam() { }

	// RVA: 0x22C6920 Offset: 0x22C2920 VA: 0x22C6920
	private void LateUpdate() { }

	// RVA: 0x22C7110 Offset: 0x22C3110 VA: 0x22C7110
	public bool TargetsScreenRect(out Rect rect) { }

	// RVA: 0x22C6D78 Offset: 0x22C2D78 VA: 0x22C6D78
	private bool TargetRect(Camera cam, int i, out Vector2 min, out Vector2 max) { }

	// RVA: 0x22C7654 Offset: 0x22C3654 VA: 0x22C7654
	public static bool VehiclesScreenRect(IEnumerable<Transform> vehicles, out Rect rect) { }

	// RVA: 0x22C7234 Offset: 0x22C3234 VA: 0x22C7234
	private static bool CarRect(Camera cam, VehicleView car, ref Vector2 min, ref Vector2 max) { }

	// RVA: 0x22C7548 Offset: 0x22C3548 VA: 0x22C7548
	private static bool Project(Camera cam, ref Vector2 min, ref Vector2 max) { }

	// RVA: 0x22C7A98 Offset: 0x22C3A98 VA: 0x22C7A98
	private void OnDestroy() { }

	// RVA: 0x22C7B28 Offset: 0x22C3B28 VA: 0x22C7B28
	public void .ctor() { }

	// RVA: 0x22C7C94 Offset: 0x22C3C94 VA: 0x22C7C94
	private static void .cctor() { }
}

