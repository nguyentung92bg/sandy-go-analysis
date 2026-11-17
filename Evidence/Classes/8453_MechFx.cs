// Namespace: Dino.BusSand.View
public sealed class MechFx : MonoBehaviour // TypeDefIndex: 8453
{
	// Fields
	public const string UfoCircle = "UFOcircle";
	public const string UfoLight = "LightingUFO_01";
	public const string StarVacuum = "Star_Vaccum";
	public const string Burst = "PlayButtonBurst";
	[CompilerGenerated]
	private static MechFx <I>k__BackingField; // 0x0
	private float _scale; // 0x20
	private readonly Dictionary<string, GameObject> _prefabs; // 0x28
	private readonly Dictionary<string, Stack<GameObject>> _pool; // 0x30
	[TupleElementNames(new[] { "go", "key", "until", "follow", "offset" })]
	private readonly List<ValueTuple<GameObject, string, float, Transform, Vector3>> _live; // 0x38

	// Properties
	public static MechFx I { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x23BDCF0 Offset: 0x23B9CF0 VA: 0x23BDCF0
	public static MechFx get_I() { }

	[CompilerGenerated]
	// RVA: 0x23BDD38 Offset: 0x23B9D38 VA: 0x23BDD38
	private static void set_I(MechFx value) { }

	// RVA: 0x23BDD90 Offset: 0x23B9D90 VA: 0x23BDD90
	public static MechFx Create(Transform parent, float worldScale) { }

	// RVA: 0x23BDEAC Offset: 0x23B9EAC VA: 0x23BDEAC
	private void OnDestroy() { }

	// RVA: 0x23BDF88 Offset: 0x23B9F88 VA: 0x23BDF88
	private GameObject Prefab(string key) { }

	// RVA: 0x23BE070 Offset: 0x23BA070 VA: 0x23BE070
	public GameObject Play(string key, Vector3 pos, float size = 1, Transform follow, float maxLife = 3, Nullable<Quaternion> rot) { }

	// RVA: 0x23BE688 Offset: 0x23BA688 VA: 0x23BE688
	public void Stop(GameObject go) { }

	// RVA: 0x23BE78C Offset: 0x23BA78C VA: 0x23BE78C
	private void Release(int i) { }

	// RVA: 0x23BE940 Offset: 0x23BA940 VA: 0x23BE940
	private void LateUpdate() { }

	// RVA: 0x23BEAF4 Offset: 0x23BAAF4 VA: 0x23BEAF4
	public void .ctor() { }
}

