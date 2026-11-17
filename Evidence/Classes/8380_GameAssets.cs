// Namespace: Dino.BusSand
[CreateAssetMenu(menuName = "BusSand/Game Assets")]
public sealed class GameAssets : ScriptableObject // TypeDefIndex: 8380
{
	// Fields
	public const string ResourcePath = "BusSandAssets";
	public List<Sprite> sprites; // 0x18
	public List<AudioClip> clips; // 0x20
	public List<Mesh> meshes; // 0x28
	public List<ModelEntry> models; // 0x30
	public List<Texture2D> textures; // 0x38
	[SerializeField]
	private TMP_FontAsset font_; // 0x40
	public static Func<string, Type, Object> External; // 0x0
	public const string FontName = "LilitaOne SDF";
	private TMP_FontAsset _fontCache; // 0x48
	public List<Material> fontMaterials; // 0x50
	public List<Shader> shaders; // 0x58
	public List<Material> materials; // 0x60
	public List<Cubemap> cubemaps; // 0x68
	private static GameAssets _instance; // 0x8
	private Dictionary<string, Sprite> _sprites; // 0x70
	private Dictionary<string, AudioClip> _clips; // 0x78
	private Dictionary<string, Mesh> _meshes; // 0x80
	private Dictionary<string, Texture2D> _textures; // 0x88
	private static readonly HashSet<string> s_missing; // 0x10

	// Properties
	public TMP_FontAsset font { get; }
	public static GameAssets Instance { get; }

	// Methods

	// RVA: 0x237C424 Offset: 0x2378424 VA: 0x237C424
	public TMP_FontAsset get_font() { }

	// RVA: 0x237C614 Offset: 0x2378614 VA: 0x237C614
	public Material GetMaterial(string n) { }

	// RVA: 0x237C850 Offset: 0x2378850 VA: 0x237C850
	public Cubemap GetCubemap(string n) { }

	// RVA: 0x2374C6C Offset: 0x2370C6C VA: 0x2374C6C
	public static GameAssets get_Instance() { }

	// RVA: -1 Offset: -1
	private static Dictionary<string, T> Index<T>(List<T> list) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x275A37C Offset: 0x275637C VA: 0x275A37C
	|-GameAssets.Index<object>
	*/

	// RVA: 0x237CAE0 Offset: 0x2378AE0 VA: 0x237CAE0
	private static void Miss(string kind, string key) { }

	// RVA: 0x237CC24 Offset: 0x2378C24 VA: 0x237CC24
	public Sprite GetSprite(string spriteName) { }

	// RVA: 0x2374DF0 Offset: 0x2370DF0 VA: 0x2374DF0
	public AudioClip GetClip(string clipName) { }

	// RVA: 0x237D0FC Offset: 0x23790FC VA: 0x237D0FC
	public Mesh GetMesh(string meshName) { }

	// RVA: 0x237D214 Offset: 0x2379214 VA: 0x237D214
	public ModelEntry GetModel(string modelName) { }

	// RVA: 0x237CEB8 Offset: 0x2378EB8 VA: 0x237CEB8
	public Texture2D GetTexture(string texName) { }

	// RVA: 0x237D3B0 Offset: 0x23793B0 VA: 0x237D3B0
	public Shader GetShader(string shaderName) { }

	// RVA: 0x237D610 Offset: 0x2379610 VA: 0x237D610
	public static Shader FindShader(string shaderName) { }

	// RVA: 0x237D6D8 Offset: 0x23796D8 VA: 0x237D6D8
	public static Sprite Sprite(string spriteName) { }

	// RVA: 0x237D79C Offset: 0x237979C VA: 0x237D79C
	public void .ctor() { }

	// RVA: 0x237DA74 Offset: 0x2379A74 VA: 0x237DA74
	private static void .cctor() { }
}

