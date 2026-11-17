// Namespace: Dino.GameCommon
public interface IGameDirector : IGlobalService<IGameDirector> // TypeDefIndex: 13356
{
	// Properties
	public abstract EGameState CurrentGameState { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract EGameState get_CurrentGameState();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract UniTask Play();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract UniTask Menu();
}

