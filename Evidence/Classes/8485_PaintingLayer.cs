// Namespace: Dino.BusSand.View
public sealed class PaintingLayer : MonoBehaviour // TypeDefIndex: 8485
{
	// Fields
	public static bool Enabled; // 0x0
	public static float BloomSeconds; // 0x4
	private const int Ids = 128;
	private Texture2D _sketch; // 0x20
	private Texture2D _wash; // 0x28
	private Texture2D _palette; // 0x30
	private Material _mat; // 0x38
	private Mesh _mesh; // 0x40
	private readonly float[] _bloomT; // 0x48
	private readonly Vector2[] _origin; // 0x50
	private readonly Color32[] _washPx; // 0x58
	private readonly Vector2[] _centre; // 0x60
	private int _w; // 0x68
	private int _h; // 0x6C
	private bool _animating; // 0x70
	private static Texture2D s_noise; // 0x8

	// Properties
	public bool Blooming { get; }
	public float BloomLeft { get; }

	// Methods

	// RVA: 0x23D860C Offset: 0x23D460C VA: 0x23D860C
	public static PaintingLayer Create(Transform parent, StageLayout L, SandGrid grid) { }

	// RVA: 0x23D8894 Offset: 0x23D4894 VA: 0x23D8894
	private void Build(SandGrid grid, float gwx, float gw, Vector2 paper, Shader shader) { }

	// RVA: 0x23D9DC8 Offset: 0x23D5DC8 VA: 0x23D9DC8
	public void Bloom(byte color, Nullable<Vector2> cell) { }

	// RVA: 0x23D9F10 Offset: 0x23D5F10 VA: 0x23D9F10
	public bool get_Blooming() { }

	// RVA: 0x23D9F18 Offset: 0x23D5F18 VA: 0x23D9F18
	public float get_BloomLeft() { }

	// RVA: 0x23D9FEC Offset: 0x23D5FEC VA: 0x23D9FEC
	private void Update() { }

	// RVA: 0x23D93C4 Offset: 0x23D53C4 VA: 0x23D93C4
	private void WriteWash() { }

	// RVA: 0x23D9848 Offset: 0x23D5848 VA: 0x23D9848
	internal static Texture2D Noise() { }

	// RVA: 0x23DA138 Offset: 0x23D6138 VA: 0x23DA138
	private void OnDestroy() { }

	// RVA: 0x23DA2E8 Offset: 0x23D62E8 VA: 0x23DA2E8
	public void .ctor() { }

	// RVA: 0x23DA3D0 Offset: 0x23D63D0 VA: 0x23DA3D0
	private static void .cctor() { }
}

