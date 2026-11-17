// Namespace: Dino.BusSand.View
public sealed class VehicleBatch : MonoBehaviour // TypeDefIndex: 8512
{
	// Fields
	public static bool AllCameras; // 0x0
	private const int Max = 511;
	[CompilerGenerated]
	private static VehicleBatch <I>k__BackingField; // 0x8
	private readonly VehicleBatch.Kind[] _kinds; // 0x20
	private readonly Matrix4x4[] _blobs; // 0x28
	private readonly List<VehicleView> _views; // 0x30
	private Camera _cam; // 0x38
	private static readonly Dictionary<string, Mesh> Meshes; // 0x10

	// Properties
	public static VehicleBatch I { get; set; }
	public static bool Available { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x23EF5E8 Offset: 0x23EB5E8 VA: 0x23EF5E8
	public static VehicleBatch get_I() { }

	[CompilerGenerated]
	// RVA: 0x23EF640 Offset: 0x23EB640 VA: 0x23EF640
	private static void set_I(VehicleBatch value) { }

	// RVA: 0x23EF6A0 Offset: 0x23EB6A0 VA: 0x23EF6A0
	public static bool get_Available() { }

	// RVA: 0x23EF7E4 Offset: 0x23EB7E4 VA: 0x23EF7E4
	public static VehicleBatch Create(Transform parent, Camera cam) { }

	// RVA: 0x23EF924 Offset: 0x23EB924 VA: 0x23EF924
	private void OnDestroy() { }

	// RVA: 0x23EFA48 Offset: 0x23EBA48 VA: 0x23EFA48
	public void Register(VehicleView v) { }

	// RVA: 0x23EFB2C Offset: 0x23EBB2C VA: 0x23EFB2C
	public void Unregister(VehicleView v) { }

	// RVA: 0x23EFB84 Offset: 0x23EBB84 VA: 0x23EFB84
	private VehicleBatch.Kind KindFor(BusKind k, ModelEntry model, Vector4 meta, float arrowScale) { }

	// RVA: 0x23F1E0C Offset: 0x23EDE0C VA: 0x23F1E0C
	public void Prepare(BusKind k, ModelEntry model, Vector4 meta, float arrowScale) { }

	// RVA: 0x23F1E10 Offset: 0x23EDE10 VA: 0x23F1E10
	public bool HasCargo(BusKind k) { }

	// RVA: 0x23F1EAC Offset: 0x23EDEAC VA: 0x23F1EAC
	private void LateUpdate() { }

	// RVA: 0x23F3108 Offset: 0x23EF108 VA: 0x23F3108
	public Mesh ShadowHullOf(BusKind k) { }

	// RVA: 0x23F2EB8 Offset: 0x23EEEB8 VA: 0x23F2EB8
	private void Draw(VehicleBatch.Kind kd, VehicleBatch.Set set, Mesh mesh, Bounds bounds) { }

	// RVA: 0x23F02EC Offset: 0x23EC2EC VA: 0x23F02EC
	private static Mesh MergedMesh(ModelEntry m, Vector4 meta, float arrowScale, int lod, bool withArrow = True) { }

	// RVA: 0x23F1308 Offset: 0x23ED308 VA: 0x23F1308
	private static Mesh ShadowHull(ModelEntry m, int res) { }

	// RVA: 0x23F3574 Offset: 0x23EF574 VA: 0x23F3574
	public static void SetGlobals(Color sky, Color equator, Color ground, Texture env, float envIntensity) { }

	// RVA: 0x23F371C Offset: 0x23EF71C VA: 0x23F371C
	public void .ctor() { }

	// RVA: 0x23F380C Offset: 0x23EF80C VA: 0x23F380C
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x23F3148 Offset: 0x23EF148 VA: 0x23F3148
	internal static void <MergedMesh>g__Add|25_0(Vector3 offset, Vector3 scale, int part, ref VehicleBatch.<>c__DisplayClass25_0 , ref VehicleBatch.<>c__DisplayClass25_1 ) { }
}

