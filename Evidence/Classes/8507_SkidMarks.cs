// Namespace: Dino.BusSand.View
public sealed class SkidMarks : MonoBehaviour // TypeDefIndex: 8507
{
	// Fields
	[CompilerGenerated]
	private static SkidMarks <I>k__BackingField; // 0x0
	private readonly List<SkidMarks.Seg> _segs; // 0x20
	[TupleElementNames(new[] { "l", "r", "t" })]
	private readonly Dictionary<int, ValueTuple<Vector3, Vector3, float>> _last; // 0x28
	private readonly List<Vector3> _v; // 0x30
	private readonly List<Color> _c; // 0x38
	private readonly List<Vector2> _uv; // 0x40
	private readonly List<int> _t; // 0x48
	private Mesh _mesh; // 0x50
	private Material _mat; // 0x58
	private const float Life = 2.4;
	private const int Max = 700;

	// Properties
	public static SkidMarks I { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x23EDFC8 Offset: 0x23E9FC8 VA: 0x23EDFC8
	public static SkidMarks get_I() { }

	[CompilerGenerated]
	// RVA: 0x23EE010 Offset: 0x23EA010 VA: 0x23EE010
	private static void set_I(SkidMarks value) { }

	// RVA: 0x23EE068 Offset: 0x23EA068 VA: 0x23EE068
	public static SkidMarks Create(Transform parent) { }

	// RVA: 0x23EE49C Offset: 0x23EA49C VA: 0x23EE49C
	public void Mark(int id, Vector3 left, Vector3 right, float width) { }

	// RVA: 0x23EE92C Offset: 0x23EA92C VA: 0x23EE92C
	private void LateUpdate() { }

	// RVA: 0x23EF240 Offset: 0x23EB240 VA: 0x23EF240
	private void OnDestroy() { }

	// RVA: 0x23EF3B8 Offset: 0x23EB3B8 VA: 0x23EF3B8
	public void .ctor() { }
}

