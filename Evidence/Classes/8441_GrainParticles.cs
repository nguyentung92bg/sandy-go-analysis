// Namespace: Dino.BusSand.View
public sealed class GrainParticles : MonoBehaviour // TypeDefIndex: 8441
{
	// Fields
	public const int Capacity = 8192;
	private static readonly VertexAttributeDescriptor[] Layout; // 0x0
	private static readonly Vector2[] Corners; // 0x8
	private const MeshUpdateFlags Quiet = 15;
	private readonly GrainParticles.P[] _p; // 0x20
	private readonly GrainParticles.GrainVertex[] _verts; // 0x28
	private int _count; // 0x30
	private Mesh _mesh; // 0x38
	private Material _mat; // 0x40
	private RenderParams _rp; // 0x48
	private Material _sparkMat; // 0xB8
	private RenderParams _rpSpark; // 0xC0
	public float SparkShutter; // 0x130
	private Transform[] _targets; // 0x138
	private Vector3[] _targetOffsets; // 0x140
	private Action<int>[] _arrive; // 0x148
	private Vector3[] _targetPos; // 0x150
	private int[] _targetPass; // 0x158
	private int _pass; // 0x160
	public float Gravity; // 0x164
	public float SprayChance; // 0x168
	public float SpraySpeed; // 0x16C
	public float GroundY; // 0x170
	public float SpeedScale; // 0x174
	public float SparkDrag; // 0x178
	public float SparkGravity; // 0x17C
	public Vector3 SparkUp; // 0x180

	// Properties
	public int Count { get; }

	// Methods

	// RVA: 0x23B4264 Offset: 0x23B0264 VA: 0x23B4264
	public int get_Count() { }

	// RVA: 0x23B426C Offset: 0x23B026C VA: 0x23B426C
	public static GrainParticles Create(Transform parent) { }

	// RVA: 0x23B4324 Offset: 0x23B0324 VA: 0x23B4324
	private void Awake() { }

	// RVA: 0x23B4BE0 Offset: 0x23B0BE0 VA: 0x23B4BE0
	private void OnDestroy() { }

	// RVA: 0x23B4D00 Offset: 0x23B0D00 VA: 0x23B4D00
	public void SetTarget(int slot, Transform t, Vector3 localOffset, Action<int> onArrive) { }

	// RVA: 0x23B4EB4 Offset: 0x23B0EB4 VA: 0x23B4EB4
	public void ClearTarget(int slot) { }

	// RVA: 0x23B4F8C Offset: 0x23B0F8C VA: 0x23B4F8C
	private Vector3 PassTargetPos(int slot) { }

	// RVA: 0x23B5084 Offset: 0x23B1084 VA: 0x23B5084
	private Vector3 TargetPos(int slot) { }

	// RVA: 0x23B518C Offset: 0x23B118C VA: 0x23B518C
	public void EmitHoming(Vector3 from, int slot, Color32 color, float size, float duration, float arcHeight, float delay = 0, float glow = 0) { }

	// RVA: 0x23B52A4 Offset: 0x23B12A4 VA: 0x23B52A4
	public void EmitHoming(Vector3 from, int slot, Color32 color, float size, float duration, Vector3 arcOffset, float delay = 0, float glow = 0) { }

	// RVA: 0x23B5490 Offset: 0x23B1490 VA: 0x23B5490
	private static Vector4 Shade(Color32 c) { }

	// RVA: 0x23B53F0 Offset: 0x23B13F0 VA: 0x23B53F0
	private static Vector4 Lin(Color32 c, float glow) { }

	// RVA: 0x23B55F8 Offset: 0x23B15F8 VA: 0x23B55F8
	public void EmitBallistic(Vector3 pos, Vector3 vel, Color32 color, float size, float life, float glow = 0) { }

	// RVA: 0x23AE9E8 Offset: 0x23AA9E8 VA: 0x23AE9E8
	public void Spark(Vector3 pos, Vector3 vel, Color32 color, float size, float life, float glow, float delay = 0, float drag = 0, float gravity = 0, float twinkle = 0, float whiten = 0) { }

	// RVA: 0x23B5730 Offset: 0x23B1730 VA: 0x23B5730
	public void Firework(Vector3 pos, Color32 color, int n, float speed, float size, float life, float glow = 0) { }

	// RVA: 0x23B5A1C Offset: 0x23B1A1C VA: 0x23B5A1C
	public void Puff(int slot, Color32 color, int n, float size, float apex, float flight, float spread, float delay = 0, float glow = 0) { }

	// RVA: 0x23B5D68 Offset: 0x23B1D68 VA: 0x23B5D68
	public void Burst(Vector3 pos, Color32 color, int n, float speed, float size, float up = 0.6, float life = 1.1, float glow = 0) { }

	// RVA: 0x23B5928 Offset: 0x23B1928 VA: 0x23B5928
	public static Color32 Jitter(Color32 c, float amount) { }

	// RVA: 0x23B5FAC Offset: 0x23B1FAC VA: 0x23B5FAC
	public void Clear() { }

	// RVA: 0x23B5FB4 Offset: 0x23B1FB4 VA: 0x23B5FB4
	private void LateUpdate() { }

	// RVA: 0x23B6CE4 Offset: 0x23B2CE4 VA: 0x23B6CE4
	public void .ctor() { }

	// RVA: 0x23B6EE0 Offset: 0x23B2EE0 VA: 0x23B6EE0
	private static void .cctor() { }
}

