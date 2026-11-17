// Namespace: Dino.GameCommon
public interface ILoadingController : IGlobalService<ILoadingController> // TypeDefIndex: 13344
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract UniTask ShowLoading();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract UniTask HideLoading();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract UniTask LoadSceneAsync(string sceneName);
}

